#include "plantripwindow.h"
#include "ui_plantripwindow.h"

planTripWindow::planTripWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planTripWindow)
{
    ui->setupUi(this);
}

planTripWindow::~planTripWindow()
{
    delete ui;
}

void planTripWindow::on_pushButton_clicked()
{

    saddlebackPlanWindow = new saddlebackTripWindow(this);

    // show window
    saddlebackPlanWindow->show();
    this->hide();



}

