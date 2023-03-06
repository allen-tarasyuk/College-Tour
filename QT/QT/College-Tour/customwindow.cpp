#include "customwindow.h"
#include "ui_customwindow.h"

customwindow::customwindow(QWidget *parent, const vector<QString> &collegesVec) :
    QMainWindow(parent),
    ui(new Ui::customwindow)
{
    ui->setupUi(this);

       colleges = collegesVec;

       // Sets database
       SetDataBase();
       ConnOpen();

       // Instantiates a travelPlan
       custom = new TravelPlan(db);

       // Instantiates variables
       custom->collegeIndex = 0;
       custom->receipt.cost = 0;
       custom->receipt.distanceTraveled = 0;
       custom->currentCollege = colleges[0];

       // Sets up ui
       QFont font = ui->label->font();
       font.setBold(true);
       font.setPointSize(30);
       ui->label->setFont(font);

       ui->label->setText(custom->currentCollege);

       // Outputs the Souvenir items of the college and adds them to the comboBox
       QSqlQuery q;
       q.exec("SELECT souvenir, Cost FROM souvenirs WHERE College = \'" + custom->currentCollege + "\'");
       QString data = "";
       QString dataCombo = "";
       while(q.next())
       {
           dataCombo = q.value(0).toString();
           ui->comboBox->addItem(q.value(0).toString());
           data += q.value(0).toString() + ": $" + q.value(1).toString() + "\n";

       }

       // Sets up ui
       font.setBold(true);
       font.setPointSize(15);
       ui->textBrowser->setFont(font);
       ui->textBrowser->setText(data);
       ConnClose();

       // Finds all the closest colleges recursively
       custom->visitedColleges.push_back(custom->currentCollege);

       custom->FindClosestCollege(custom->currentCollege, custom->visitedColleges, colleges.size(), false, true, colleges);

       custom->collegeReceipt.cost = 0;

       // Displays the colleges receipt
       DisplayReceipt();

}

customwindow::~customwindow()
{
    delete ui;
    delete custom;
}

void customwindow::on_pushButton_clicked()
{

        ConnOpen();
         QString string = "";
         QString s = "";
         QSqlQuery q;
         s = ui->comboBox->currentText();
         custom->receipt.itemsBought.push_back(s);
         custom->collegeReceipt.itemsBought.push_back(s);

         // Gets the price of the souvenir item
         string = "SELECT cost FROM souvenirs WHERE souvenir = \'" + s + "\'";
         q.exec(string);
         while(q.next())
         {
             s = q.value(0).toString();
         }

         custom->receipt.costOfItems.push_back(s.toDouble());
         custom->collegeReceipt.costOfItems.push_back(s.toDouble());
         custom->collegeReceipt.cost += s.toDouble();
         custom->receipt.cost += s.toDouble();

         // Updates the college's receipt
         DisplayReceipt();

         qInfo() << custom->receipt.cost;

         ConnClose();


}


void customwindow::on_pushButton_2_clicked()
{

           // Goes to the next college
          if(custom->collegeIndex != colleges.size() - 1)
          {
              // Updates the ui for the new college
              custom->collegeReceipt.itemsBought.clear();
              custom->collegeReceipt.costOfItems.clear();
              custom->collegeReceipt.cost = 0;
              DisplayReceipt();

              ui->comboBox->clear();
              custom->collegeIndex++;
              ui->comboBox->clear();
              ConnOpen();
              QSqlQuery q;

              qInfo() << custom->visitedColleges[custom->collegeIndex];

              custom->currentCollege = custom->visitedColleges[custom->collegeIndex];

              ui->label->setText(custom->currentCollege);

              // Displays the souvenir items of the new college and adds them to the comboBox
              q.exec("SELECT souvenir, Cost FROM souvenirs WHERE College = \'" + custom->currentCollege + "\'");
              QString data = "";
              QString dataCombo = "";
              while(q.next())
              {
                  dataCombo = q.value(0).toString();
                  ui->comboBox->addItem(q.value(0).toString());
                  data += q.value(0).toString() + ": $" + q.value(1).toString() + "\n";

              }
              ui->textBrowser->setText(data);

              // Gets distance from previous college to current college and adds it to the total
              q.exec("SELECT Distance FROM Distances WHERE Starting_College = \'" + custom->currentCollege + "\' AND Ending_College = \'" + custom->visitedColleges[custom->collegeIndex-1] + "\'");
              while(q.next())
              {
                  custom->receipt.distanceTraveled += q.value(0).toDouble();
                  qInfo() << custom->receipt.distanceTraveled;

              }
              ConnClose();
          }
          else
          {
              // If all colleges visited open summaryPage
              this->hide();
              summaryWindow = new summarypage(this);
              summaryWindow->GetData(custom->receipt);

              summaryWindow->show();
          }


}

void customwindow::DisplayReceipt()
{
    // Displays the total cost of items purchased from the current college
    QString receipt = "";
    for(int i = 0; i < custom->collegeReceipt.costOfItems.size(); i++)
    {
        receipt += custom->collegeReceipt.itemsBought[i] + ": $" + QString::number(custom->collegeReceipt.costOfItems[i]) + "\n";
    }

    receipt += "\n\n---------------------------\nTotal cost: $" + QString::number(custom->collegeReceipt.cost);

    ui->textBrowser_2->setText(receipt);
}

