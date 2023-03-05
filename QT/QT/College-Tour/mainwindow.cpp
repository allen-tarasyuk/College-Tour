#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


       ui->comboBox->addItem("Select College");
       ui->comboBox_2->addItem("Select College");

       // Sets data base and puts colleges into comboBoxes
       SetDataBase();
       ConnOpen();
       QSqlQuery q;
       q.exec("SELECT * FROM souvenirs ORDER BY College ASC"); // SQL statement: means to output all values in the table
       QString name = "";

       while(q.next())
       {
           if(name != q.value(0).toString())
           {
               ui->comboBox->addItem(q.value(0).toString());
               ui->comboBox_2->addItem(q.value(0).toString());
           }
           name = q.value(0).toString();
       }

       ConnClose();




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{

    ConnOpen();
     QSqlQuery q;
     q.exec("SELECT Souvenir, cost FROM souvenirs WHERE College = \'" + ui->comboBox->itemText(index) + "\'"); // SQL statement: means to output all values in the table
     QString data = "";
     while(q.next())
     {
         data += q.value(0).toString() + ": $" + q.value(1).toString() + "\n";

     }

     ui->textEdit->setText(data);

     ConnClose();

}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{

    ConnOpen();
  QSqlQuery q;
  q.exec("SELECT Distance FROM Distances WHERE Ending_College = 'Saddleback College' AND Starting_College = \'" + ui->comboBox_2->itemText(index) + "\'"); // SQL statement: means to output all values in the table
  QString data = "";
  while(q.next())
  {
      data = "Distance from " + ui->comboBox_2->itemText(index) + " to Saddleback is ";
      data += q.value(0).toString() + "km";

  }
  ui->textEdit_2->setText(data);

  ConnClose();

}


void MainWindow::on_pushButton_clicked()
{
    tripWindow = new planTripWindow(this);
    tripWindow->show();
}

