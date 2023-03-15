#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QDir>

welcomeWindow::welcomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcomeWindow)
{
    ui->setupUi(this);
    qDebug() << QDir().currentPath();
}

welcomeWindow::~welcomeWindow()
{
    delete ui;
}

void welcomeWindow::on_pushButton_clicked()
{
    display = new MainWindow(this);
    display->show();
}


void welcomeWindow::on_pushButton_2_clicked()
{
    select = new planTripWindow(this);
    select->show();
}


void welcomeWindow::on_pushButton_3_clicked()
{
    //Admin push button
    adminLogin = new adminWindow(this);
    adminLogin->show();
}


void welcomeWindow::on_pushButton_5_clicked()
{
    qApp->exit();
}

