#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QMessageBox>

adminWindow::adminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);
    //Set the window title
    this->setWindowTitle("Admin Login");
}

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::on_pushButton_login_clicked()
{
    //Get the password entered
    QString password = ui->lineEdit_password->text();

    if (password == "123") {
        QMessageBox::information(this, "Login", "Password is correct");
    }
    else {
        QMessageBox::warning(this, "Login", "Password is incorrect");
    }
}

