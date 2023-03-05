#include "plantripwindow.h"
#include "ui_plantripwindow.h"

planTripWindow::planTripWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::planTripWindow)
{
    ui->setupUi(this);
}

planTripWindow::~planTripWindow()
{
    delete ui;
    delete saddlebackPlanWindow;
    delete arizonaInput;
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

