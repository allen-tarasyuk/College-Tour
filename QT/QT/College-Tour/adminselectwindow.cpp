#include "adminselectwindow.h"
#include "ui_adminselectwindow.h"

adminSelectWindow::adminSelectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminSelectWindow)
{
    ui->setupUi(this);

    //Set the window title
    this->setWindowTitle("Admin Selection Menu");
}

adminSelectWindow::~adminSelectWindow()
{
    delete ui;
}

void adminSelectWindow::on_comboBox_school_currentIndexChanged(int index)
{
    ConnOpen();
    QSqlQuery q;
    // SQL statement: means to output all values in the table
    q.exec("SELECT Souvenir, cost FROM souvenirs WHERE College = \'" + ui->comboBox_school->itemText(index) + "\'");
    QString data = "";
    while(q.next())
    {
        data += q.value(0).toString() + ": $" + q.value(1).toString() + "\n";

    }

    //ui->textEdit->setText(data);

    ConnClose();
}


void adminSelectWindow::on_comboBox_souvenir_currentIndexChanged(int index)
{

}

