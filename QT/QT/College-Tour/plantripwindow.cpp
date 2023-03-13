#include "plantripwindow.h"
#include "ui_plantripwindow.h"

planTripWindow::planTripWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::planTripWindow)
{
    ui->setupUi(this);

      // sets database
      SetDataBase();
}

planTripWindow::~planTripWindow()
{
    delete ui;
    delete saddlebackPlanWindow;
    delete arizonaInput;
    delete irvinePlanWindow;
    delete customInput;

}

void planTripWindow::on_pushButton_clicked()
{
    saddlebackPlanWindow = new saddlebackTripWindow(this);

    // Show window
    saddlebackPlanWindow->show();
    this->hide();

}


void planTripWindow::on_pushButton_3_clicked()
{

    // If plan clicked creates input window
     arizonaInput = new arizonainput(this);

     // show window
     arizonaInput->show();


}


void planTripWindow::on_pushButton_2_clicked()
{
    // If plan clicked creates input window
    customInput = new custominput();

    // Show window
    customInput->show();
    this->close();
}


void planTripWindow::on_pushButton_4_clicked()
{

irvinePlanWindow = new irvinewindow;

irvinePlanWindow->show();
this->close();

}

bool planTripWindow::CheckCollegesAdded()
{
    // checks if the new data was inserted
    ConnOpen();
    QSqlQuery q;
    q.exec("SELECT DISTINCT Starting_College FROM Distances WHERE Starting_College = 'University of Texas' OR Starting_College = 'California State University, Fullerton'"); // SQL statement: means to output all values in the table
    bool dataInserted = false;
    while(q.next())
    {
        if(!(q.value(0).isNull()))
        {
            dataInserted = true;
        }
        else
        {
            dataInserted = false;
        }

    }

    ConnClose();

    return dataInserted;
}






//void planTripWindow::on_pushButton_5_clicked()
//{
//    // Refreshes database
//    SetDataBase();

//}

