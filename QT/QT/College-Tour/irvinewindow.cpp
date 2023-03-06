#include "irvinewindow.h"
#include "ui_irvinewindow.h"

irvinewindow::irvinewindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::irvinewindow)
{
    ui->setupUi(this);
}

irvinewindow::~irvinewindow()
{
    delete ui;
}

void irvinewindow::on_pushButton_clicked()
{

}


void irvinewindow::on_pushButton_2_clicked()
{

}

