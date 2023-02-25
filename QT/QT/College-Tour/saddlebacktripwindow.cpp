#include "saddlebacktripwindow.h"
#include "ui_saddlebacktripwindow.h"


bool Compare(const QString& str1, const QString& str2);

saddlebackTripWindow::saddlebackTripWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saddlebackTripWindow)
{
    ui->setupUi(this);

    // Sets the database
    SetDataBase();
    ConnOpen();

    // Creates a travel plan that stores all the functionality of the software
    saddleback = new TravelPlan(db);

    // Instantiates variables
    saddleback->collegeIndex = 0;
    saddleback->receipt.cost = 0;
    saddleback->receipt.distanceTraveled = 0;
    saddleback->currentCollege = "Saddleback College";

    // Sets font for ui display
    QFont font = ui->label->font();
    font.setBold(true);
    font.setPointSize(30);
    ui->label->setFont(font);

    // Shows the current college
    ui->label->setText(saddleback->currentCollege);

    // Outputs the souvenirs of the current college
    QSqlQuery q;
    q.exec("SELECT Souvenir, Cost FROM souvenirs WHERE College = 'Saddleback College'");
    QString data = "";
    QString dataCombo = "";

    while(q.next())
    {
        dataCombo = q.value(0).toString();
        ui->comboBox->addItem(q.value(0).toString());
        data += q.value(0).toString() + ": $" + q.value(1).toString() + "\n";

    }

    font.setBold(true);
    font.setPointSize(15);
    ui->textBrowser->setFont(font);
    ui->textBrowser->setText(data);
    ConnClose();

    // Finds the closest colleges recursively
    saddleback->visitedColleges.push_back(saddleback->currentCollege);
    saddleback->FindClosestCollege(saddleback->currentCollege, saddleback->visitedColleges, 11, true);
    saddleback->collegeReceipt.cost = 0;

    // Displays the colleges receipt
    DisplayReceipt();

}

// Destructor
saddlebackTripWindow::~saddlebackTripWindow()
{
    delete ui;
    delete saddleback;
}

// Purchase Button
void saddlebackTripWindow::on_pushButton_clicked()
{
    ConnOpen();
    QString string = "";
    QString s = "";
    QSqlQuery q;
    s = ui->comboBox->currentText();
    saddleback->receipt.itemsBought.push_back(s);
    saddleback->collegeReceipt.itemsBought.push_back(s);

    // Gets the cost of the souvenir item
    string = "SELECT cost FROM souvenirs WHERE souvenir = \'" + s + "\'";
    q.exec(string);
    while(q.next())
    {
        s = q.value(0).toString();
    }

    saddleback->receipt.costOfItems.push_back(s.toDouble());
    saddleback->collegeReceipt.costOfItems.push_back(s.toDouble());
    saddleback->collegeReceipt.cost += s.toDouble();
    saddleback->receipt.cost += s.toDouble();

    // Updates the colleges receipt
    DisplayReceipt();

    qInfo() << saddleback->receipt.cost;

    ConnClose();

}

// Next Button
void saddlebackTripWindow::on_pushButton_2_clicked()
{

    if(saddleback->collegeIndex != 10)
    {
        // Updates ui and variables for new college
        saddleback->collegeReceipt.itemsBought.clear();
        saddleback->collegeReceipt.costOfItems.clear();
        saddleback->collegeReceipt.cost = 0;
        DisplayReceipt();

        ui->comboBox->clear();
        saddleback->collegeIndex++;
        ui->comboBox->clear();
        ConnOpen();
        QSqlQuery q;

        qInfo() << saddleback->visitedColleges[saddleback->collegeIndex];

        saddleback->currentCollege = saddleback->visitedColleges[saddleback->collegeIndex];

        ui->label->setText(saddleback->currentCollege);

        // Displays the souvenir of the current college
        q.exec("SELECT souvenir, Cost FROM souvenirs WHERE College = \'" + saddleback->currentCollege + "\'");
        QString data = "";
        QString dataCombo = "";
        while(q.next())
        {
            dataCombo = q.value(0).toString();
            ui->comboBox->addItem(q.value(0).toString());
            data += q.value(0).toString() + ": $" + q.value(1).toString() + "\n";

        }
        ui->textBrowser->setText(data);

        // Gets the distance from previous college to current college and adds it to the travelPlan
        q.exec("SELECT Distance FROM Distances WHERE Starting_College = \'" + saddleback->currentCollege + "\' AND Ending_College = \'" + saddleback->visitedColleges[saddleback->collegeIndex-1] + "\'");
        while(q.next())
        {
            saddleback->receipt.distanceTraveled += q.value(0).toDouble();
            qInfo() << saddleback->receipt.distanceTraveled;

        }
        ConnClose();
    }
    else
    {
        // If we reached the end of colleges display the summaryPage
        this->hide();
        summaryWindow = new summarypage(this);
        summaryWindow->GetData(saddleback->receipt);

        summaryWindow->show();
    }

}



void saddlebackTripWindow::DisplayReceipt()
{
    // Displays the total cost of items purchased from the current college
    QString receipt = "";
    for(int i = 0; i < saddleback->collegeReceipt.costOfItems.size(); i++)
    {
        receipt += saddleback->collegeReceipt.itemsBought[i] + ": $" + QString::number(saddleback->collegeReceipt.costOfItems[i]) + "\n";
    }

    receipt += "\n\n---------------------------\nTotal cost: $" + QString::number(saddleback->collegeReceipt.cost);

    ui->textBrowser_2->setText(receipt);
}


