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


    //Show the souvenirs in the combobox_souvenirITEM
    QString souvenirData = "";
    QString souvenirDataCombo = "";

    QString selectedCollege = "";
    selectedCollege = ui->comboBox_souvenir->currentText();

    QString name1 = "";
    qDebug() << "selectedCollege";

    QSqlQuery S;
    S.exec("SELECT souvenir, Cost FROM souvenirs WHERE College = \'" + selectedCollege + "\'");

    while(S.next())
    {
         qDebug() << selectedCollege;
//        if(name1 != S.value(0).toString())
//        {
        //souvenirDataCombo = S.value(0).toString();
        ui->comboBox_souvenirITEM->addItem(S.value(0).toString());
        //souvenirData += S.value(0).toString() + ": $" + S.value(1).toString() + "\n";

//        }
//        name1 = S.value(0).toString();

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


        //ui->textEdit->setText(data);

        //attempting to read changes in the textEdit widget
        ui->textEdit_souvenir->setText(data);
        QString textInput = ui->textEdit_souvenir->toPlainText();
        qDebug() << (textInput);

        ConnClose();
}

