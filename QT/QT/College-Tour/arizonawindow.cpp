#include "arizonawindow.h"
#include "ui_arizonawindow.h"
#include <QMessageBox>

arizonawindow::arizonawindow(QWidget *parent, int numColleges) :
    QMainWindow(parent),
    ui(new Ui::arizonawindow)
{
    ui->setupUi(this);

    colleges = numColleges;

        // Sets the database
        SetDataBase();
        ConnOpen();

        // Creates a travel plan that stores all the functionality of the software
        arizona = new TravelPlan(db);

        // Instantiates variables
        arizona->collegeIndex = 0;
        arizona->receipt.cost = 0;
        arizona->receipt.distanceTraveled = 0;
        arizona->currentCollege = "Arizona State University";

        // Sets font for ui display
        QFont font = ui->label->font();
        font.setBold(true);
        font.setPointSize(30);
        ui->label->setFont(font);

        // Shows the current college
        ui->label->setText(arizona->currentCollege);

        // Outputs the souvenirs of the current college
        QSqlQuery q;
        q.exec("SELECT Souvenir, Cost FROM souvenirs WHERE College = 'Arizona State University'");
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
        arizona->visitedColleges.push_back(arizona->currentCollege);
        qDebug() << colleges;



try{

        arizona->FindClosestCollege(arizona->currentCollege, arizona->visitedColleges, colleges);

}catch(const std::exception& e){
     QMessageBox::critical(nullptr, "Error", QString::fromStdString(e.what()));
}

        arizona->collegeReceipt.cost = 0;

        // Displays the colleges receipt
        DisplayReceipt();
}

arizonawindow::~arizonawindow()
{
    delete ui;
    delete arizona;
}

void arizonawindow::on_pushButton_clicked()
{

           ConnOpen();
           QString string = "";
           QString s = "";
           QSqlQuery q;
           s = ui->comboBox->currentText();
           arizona->receipt.itemsBought.push_back(s);
           arizona->collegeReceipt.itemsBought.push_back(s);

           // Gets the cost of the souvenir item
           string = "SELECT cost FROM souvenirs WHERE souvenir = \'" + s + "\'";
           q.exec(string);
           while(q.next())
           {
               s = q.value(0).toString();
           }

           arizona->receipt.costOfItems.push_back(s.toDouble());
           arizona->collegeReceipt.costOfItems.push_back(s.toDouble());
           arizona->collegeReceipt.cost += s.toDouble();
           arizona->receipt.cost += s.toDouble();

           // Updates the colleges receipt
           DisplayReceipt();

           qInfo() << arizona->receipt.cost;

           ConnClose();

}


void arizonawindow::on_pushButton_2_clicked()
{
    if(arizona->collegeIndex != colleges - 1)
           {
               // Updates ui and variables for new college
               arizona->collegeReceipt.itemsBought.clear();
               arizona->collegeReceipt.costOfItems.clear();
               arizona->collegeReceipt.cost = 0;
               DisplayReceipt();

               ui->comboBox->clear();
               arizona->collegeIndex++;
               ui->comboBox->clear();
               ConnOpen();
               QSqlQuery q;

               qInfo() << arizona->visitedColleges[arizona->collegeIndex];

               arizona->currentCollege = arizona->visitedColleges[arizona->collegeIndex];

               ui->label->setText(arizona->currentCollege);

               // Displays the souvenir of the current college
               q.exec("SELECT souvenir, Cost FROM souvenirs WHERE College = \'" + arizona->currentCollege + "\'");
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
               q.exec("SELECT Distance FROM Distances WHERE Starting_College = \'" + arizona->currentCollege + "\' AND Ending_College = \'" + arizona->visitedColleges[arizona->collegeIndex-1] + "\'");
               while(q.next())
               {
                   arizona->receipt.distanceTraveled += q.value(0).toDouble();
                   qInfo() << arizona->receipt.distanceTraveled;

               }
               ConnClose();
           }
           else
           {
               // If we reached the end of colleges display the summaryPage
               this->hide();
               summaryWindow = new summarypage(this);
               summaryWindow->GetData(arizona->receipt);

               summaryWindow->show();
           }


}



//void arizonawindow::DisplayReceipt()
//{
//    // Displays the total cost of items purchased from the current college
//    QString receipt = "";
//    for(int i = 0; i < arizona->collegeReceipt.costOfItems.size(); i++)
//    {
//        receipt += arizona->collegeReceipt.itemsBought[i] + ": $" + QString::number(arizona->collegeReceipt.costOfItems[i]) + "\n";
//    }

//    receipt += "\n\n---------------------------\nTotal cost: $" + QString::number(arizona->collegeReceipt.cost);

//    ui->textBrowser_2->setText(receipt);
//}




void arizonawindow::DisplayReceipt()
{
    // Displays the total cost of items purchased from the current college
    QString receipt = "";
    QList<QString> items;
    QHash<QString, double> itemCosts;
    QHash<QString, int> itemCounts;

    for(int i = 0; i < arizona->collegeReceipt.itemsBought.size(); i++)
    {
        QString item = arizona->collegeReceipt.itemsBought[i];
        double cost = arizona->collegeReceipt.costOfItems[i];
        if (!itemCosts.contains(item)) {
            itemCosts.insert(item, cost);
            itemCounts.insert(item, 1);
            items.append(item);
        } else {
            itemCosts[item] += cost;
            itemCounts[item]++;
        }
    }

    for (int i = 0; i < items.size(); i++) {
        QString itemName = items.at(i);
        double cost = itemCosts[itemName];
        int count = itemCounts[itemName];
        QString itemString = itemName + (count > 1 ? " (x" + QString::number(count) + ")" : "");
        receipt += itemString + ": $" + QString::number(cost) + "\n";
    }

    receipt += "\n\n---------------------------\nTotal cost: $" + QString::number(arizona->collegeReceipt.cost);

    ui->textBrowser_2->setText(receipt);
}













