#include "adminselectwindow.h"
#include "ui_adminselectwindow.h"

adminSelectWindow::adminSelectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminSelectWindow)
{
    ui->setupUi(this);

    //Set the window title
    this->setWindowTitle("Admin Selection Menu");


    ui->comboBox_school->addItem("Select College");
    ui->comboBox_souvenir->addItem("Select College");
    ui->comboBox_souvenirITEM->addItem("Select Souvenir");

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
            ui->comboBox_school->addItem(q.value(0).toString());
            ui->comboBox_souvenir->addItem(q.value(0).toString());
        }
        name = q.value(0).toString();
    }

    ConnClose();
}

adminSelectWindow::~adminSelectWindow()
{
    delete ui;
}

void adminSelectWindow::on_comboBox_school_currentIndexChanged(int index)
{
//    ConnOpen();
//    QSqlQuery q;
//    // SQL statement: means to output all values in the table
//    q.exec("SELECT Souvenir, cost FROM souvenirs WHERE College = \'" + ui->comboBox_school->itemText(index) + "\'");
//    QString data = "";
//    while(q.next())
//    {
//        data += q.value(0).toString() + ": $" + q.value(1).toString() + "\n";

//    }


//    ConnClose();

}


void adminSelectWindow::on_comboBox_souvenir_currentIndexChanged(int index)
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

    //attempting to read changes in the textEdit widget
    ui->textEdit_souvenir->setText(data);
    QString textInput = ui->textEdit_souvenir->toPlainText();
    qDebug() << (textInput);


    //Show the souvenirs in the combobox_souvenirITEM
    QSqlQuery S;
    S.exec("SELECT Souvenir FROM souvenirs WHERE College = \'" + ui->comboBox_souvenir->itemText(index) + "\'");

    while(S.next())
    {
        ui->comboBox_souvenirITEM->addItem(S.value(0).toString());

//      if(S.next())
//      {
//          ui->comboBox_souvenirITEM->clear();
//      }
    }


    //attempting to clear the comboBox_souvenirITEM after a new college is selected
    //ui->comboBox_souvenirITEM->clear();
//        int count = index;
//        if(count != index)
//        {
//            ui->comboBox_souvenirITEM->clear();
//        }
//        //count++;

        ConnClose();
}


void adminSelectWindow::on_pushButton_souvenirEDIT_clicked()
{
    //Get the current souvenir selected in comboBox_souvenirITEM
    QString souvenirItem = ui->comboBox_souvenirITEM->currentText();
    //Get the new souvenir price entered
    QString newPrice = ui->lineEdit_souvenirPrice->text();

    //Show error message if price is invalid (-1)
    if (newPrice >= "0") {
        //HERE add code to change the souvenir price in the DB file.

    }
    else {
        QMessageBox::warning(this, "", "Invalid Price");
    }

    //qDebug() << souvenirItem;
}


//This is the add push button to add a new college into the data base
void adminSelectWindow::on_pushButton_schoolADD_clicked()
{
    //Get the current school selected in comboBox_school
    QString schoolSelected = ui->comboBox_school->currentText();

    //Here add code to append to the db file the new college.


    qDebug() << schoolSelected;
}

