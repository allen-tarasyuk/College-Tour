#include "arizonainput.h"
#include "ui_arizonainput.h"

arizonainput::arizonainput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::arizonainput)
{
    tripWindow = parent;
    ui->setupUi(this);
}

arizonainput::~arizonainput()
{
    delete ui;
    delete arizonaWindow;
}

void arizonainput::on_buttonBox_accepted()
{

    if(NumCheck(ui->lineEdit->text()))
       {
           // If valid but expecting data to be inserted
           // tell user data isn't inserted
           int num = ui->lineEdit->text().toInt();


           if((num == 12 || num == 13))
           {
               QMessageBox::warning(this, "Error", "Data not inserted.");
           }
           else
           {
               // If valid pass the number of colleges to arizonawindow
               // and open a arizonawindow
               int num = ui->lineEdit->text().toInt();
               arizonaWindow = new arizonawindow(nullptr, num);
               arizonaWindow->show();
               tripWindow->close();
           }

       }
       else
       {
           QMessageBox::warning(this, "Error", "Invalid input.");
       }


}

