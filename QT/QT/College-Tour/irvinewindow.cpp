#include "irvinewindow.h"
#include "ui_irvinewindow.h"
#include <QMessageBox>

irvinewindow::irvinewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::irvinewindow)
{

       // Sets up ui
       ui->setupUi(this);

       // Sets database
       SetDataBase();
       ConnOpen();

       // Creates travelPlan object for trip
       irvine = new TravelPlan(db);

       // Instantiates variables
       irvine->collegeIndex = 0;
       irvine->receipt.cost = 0;
       irvine->receipt.distanceTraveled = 0;
       irvine->currentCollege = "University of California, Irvine (UCI)";

       // Sets up ui for college
       QFont font = ui->label->font();
       font.setBold(true);
       font.setPointSize(30);
       ui->label->setFont(font);

       // Shows the current college
       ui->label->setText(irvine->currentCollege);

       // Displays the souvenir items of the current college and adds
       // them to the comboBox
       QSqlQuery q;
       q.exec("SELECT souvenir, Cost FROM souvenirs WHERE College = 'University of California, Irvine (UCI)'");
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

       // Finds the closest college recursively
       irvine->visitedColleges.push_back(irvine->currentCollege);


try{


       irvine->FindClosestCollege(irvine->currentCollege, irvine->visitedColleges, 13);


}catch(const std::exception& e){
     QMessageBox::critical(nullptr, "Error", e.what());

}



       irvine->collegeReceipt.cost = 0;
       DisplayReceipt();


}

irvinewindow::~irvinewindow()
{
    delete ui;
    delete irvine;
}

void irvinewindow::on_pushButton_clicked()
{
    // Purchases the selected souvenir
       ConnOpen();
       QString string = "";
       QString s = "";
       QSqlQuery q;
       s = ui->comboBox->currentText();
       irvine->receipt.itemsBought.push_back(s);
       irvine->collegeReceipt.itemsBought.push_back(s);
       string = "SELECT cost FROM souvenirs WHERE souvenir = \'" + s + "\'";
       q.exec(string);
       while(q.next())
       {
           s = q.value(0).toString();
       }

       irvine->receipt.costOfItems.push_back(s.toDouble());
       irvine->collegeReceipt.costOfItems.push_back(s.toDouble());
       irvine->collegeReceipt.cost += s.toDouble();
       irvine->receipt.cost += s.toDouble();

       // Updates the receipt of the selected college
       DisplayReceipt();

       qInfo() << irvine->receipt.cost;

       ConnClose();


}


void irvinewindow::on_pushButton_2_clicked()
{

    // Goes to the next college
      if(irvine->collegeIndex != 12)
      {
          // Updates ui for the new college
          irvine->collegeReceipt.itemsBought.clear();
          irvine->collegeReceipt.costOfItems.clear();
          irvine->collegeReceipt.cost = 0;
          DisplayReceipt();

          ui->comboBox->clear();
          irvine->collegeIndex++;
          ui->comboBox->clear();
          ConnOpen();
          QSqlQuery q;

          qInfo() << irvine->visitedColleges[irvine->collegeIndex];

          irvine->currentCollege = irvine->visitedColleges[irvine->collegeIndex];

          ui->label->setText(irvine->currentCollege);


          // Displays souvenir items of the current college
          q.exec("SELECT souvenir, Cost FROM souvenirs WHERE College = \'" + irvine->currentCollege + "\'");
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
          q.exec("SELECT Distance FROM Distances WHERE Starting_College = \'" + irvine->currentCollege + "\' AND Ending_College = \'" + irvine->visitedColleges[irvine->collegeIndex-1] + "\'");
          while(q.next())
          {
              irvine->receipt.distanceTraveled += q.value(0).toDouble();
              qInfo() << irvine->receipt.distanceTraveled;

          }
          ConnClose();
      }
      else
      {
          // If all colleges visited open summaryPage
          this->hide();
          summaryWindow = new summarypage(this);
          summaryWindow->GetData(irvine->receipt);

          summaryWindow->show();
      }





}



void irvinewindow::DisplayReceipt()
{
    // Displays the total cost of items purchased from the current college
    QString receipt = "";
    for(int i = 0; i < irvine->collegeReceipt.costOfItems.size(); i++)
    {
        receipt += irvine->collegeReceipt.itemsBought[i] + ": $" + QString::number(irvine->collegeReceipt.costOfItems[i]) + "\n";
    }

    receipt += "\n\n---------------------------\nTotal cost: $" + QString::number(irvine->collegeReceipt.cost);

    ui->textBrowser_2->setText(receipt);
}


