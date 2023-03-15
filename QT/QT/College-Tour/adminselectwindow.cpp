#include "adminselectwindow.h"
#include "ui_adminselectwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

adminSelectWindow::adminSelectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminSelectWindow)
{
    ui->setupUi(this);

    //Set the window title
    this->setWindowTitle("Admin Selection Menu");

    ui->comboBox_school->addItem("Select College");
    ui->comboBox_schoolSouvenir->addItem("Select College");
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
            ui->comboBox_schoolSouvenir->addItem(q.value(0).toString());
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


void adminSelectWindow::on_comboBox_schoolSouvenir_currentIndexChanged(int index)
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
    S.exec("SELECT Souvenir FROM souvenirs WHERE College = \'" + ui->comboBox_schoolSouvenir->itemText(index) + "\'");

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

    //Try
    //ui->comboBox_souvenirITEM->removeItem(ui->comboBox_souvenirITEM->currentIndex());

//        int count = index;
//        if(count != index)
//        {
//            ui->comboBox_souvenirITEM->clear();
//        }
//        //count++;

        ConnClose();
}


//This function edits the price of the selected souvenir.
void adminSelectWindow::on_pushButton_souvenirEDIT_clicked()
{
    //Get the current souvenir selected in comboBox_souvenirITEM
    QString souvenirItem = ui->comboBox_souvenirITEM->currentText();
    //Get the current school selected in comboBox_schoolSouvenir
    QString schoolSovenir = ui->comboBox_schoolSouvenir->currentText();
    //Get the new souvenir price entered
    QString newPrice = ui->lineEdit_souvenirPrice->text();
    QSqlQuery edit;
    QString editSql;

    //Show error message if price is invalid (ex. -1)
    if (newPrice >= "0") {
        ConnOpen();

        //Get the sql exec parameters
        editSql = "update souvenirs set Cost = '"+ newPrice+"' where Souvenir = '" + souvenirItem+"'";
        //Execute sql query
        edit.exec(editSql);

        ConnClose();
        //Inform that the price was updated
        QMessageBox::information(this, "", "Updated Price");
    }
    else {
        QMessageBox::critical(this, "", "Invalid Price");
    }

    //Debug
    qDebug() << schoolSovenir;
    qDebug() << souvenirItem;
    qDebug() << newPrice;

}


//This is the add push button to add a new college into the data base
void adminSelectWindow::on_pushButton_schoolADD_clicked()
{
    //Get the current school selected in comboBox_school
    QString schoolSelected = ui->comboBox_school->currentText();

    //Get file with the two new colleges.
    //REPLACE WITH THE FILE PATH FOR YOUR FILE     // QFile file("YOUR FILE PATH");

    // Adam's Path
//    QFile file("/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/texasFullerton.txt");


    // Allen's Path
    //QFile file("/Users/allentarasyuk/Desktop/Git-Project/College-Tour/QT/QT/College-Tour/DB/texasFullerton.txt");
    QFile file("Users/Julien/Desktop/Schooling/C++/Data Structures/Lebowitz/Team Elephant/College-Tour/QT/QT/College-Tour/DB/texasFullerton.txt");


    //This is for reading the selected college form the file
    if(schoolSelected == "University of Texas")
    {
        QString texasSelected = "University of Texas Arizona State University 1007";
    }
    else if(schoolSelected == "California State University, Fullerton")
    {
        QString fullertonSelected = "California State University, Fullerton Arizona State University 364";
    }

    //If the file opens successfully then add its data.
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(this, "", "Success Opening file.");

        QTextStream fileCollege(&file);

        addCollege(fileCollege);

        file.close();
    }
    else
    {
        QMessageBox::information(this, "Error", "Failed Opening file.");
    }

    qDebug() << schoolSelected;
}


//This function reads the txt file and adds the new colleges.
void adminSelectWindow::addCollege(QTextStream& fileCollege)
{
    QStringList insertData;
    QString readLine;
    QString addDB;
    QSqlQuery insert;

    ConnOpen();

    //Add the txt file data into the DB file.
    while(!fileCollege.atEnd())
    {
        //Read the txt file and split the line at ":".
        readLine = fileCollege.readLine();
        insertData.append(readLine.split(':'));
        //Get the sql exec parameters
        addDB = "insert into Distances (Starting_College, Ending_College, Distance) values (\'" + insertData.at(0) + "\', \'" + insertData.at(1) + "\', \'" + insertData.at(2) + "\')";
        //Execute sql query
        insert.exec(addDB);
        //Clear list for the next line.
        insertData.clear();
    }

    ConnClose();

}

//This function removes a selected souvenir from a selected school.
void adminSelectWindow::on_pushButton_souvenirRM_clicked()
{
    //Get the current souvenir selected in comboBox_souvenirITEM
    QString souvenirItem = ui->comboBox_souvenirITEM->currentText();
    //Get the current school selected in comboBox_schoolSouvenir
    QString schoolSouvenir = ui->comboBox_schoolSouvenir->currentText();

    QSqlQuery remove;
    QString removeSql;

    //If a college and souvenir is selected then a souvenir can be removed.
    if(ui->comboBox_schoolSouvenir->currentIndex() > 0 && ui->comboBox_souvenirITEM->currentIndex() > 0 )
    {
        //Open database
        ConnOpen();

        //removeSql = "delete from souvenir where College = '" + schoolSovenir +"' and '" + souvenirItem +"'";
        //Get the sql exec parameters
        removeSql = "delete from souvenirs where Souvenir = '" + souvenirItem +"'";
        //Execute sql query
        remove.exec(removeSql);

        //Inform user that the souvenir was removed.
        QMessageBox::information(this, "", "Removed Souvenir");
        ConnClose();
    }
    else
        QMessageBox::warning(this, "", "Select a college and souvenir");

}

//This function adds a user inputed souvenir into a school.
void adminSelectWindow::on_pushButton_souvenirADD_clicked()
{

    //Get the current school selected in comboBox_schoolSouvenir
    QString addSchoolSouvenir = ui->comboBox_schoolSouvenir->currentText();
    //Get the new added souvenir price entered
    QString addPrice = ui->lineEdit_souvenirAddPrice->text();
    //Get the new added souvenir name entered
    QString addName = ui->lineEdit_souvenirAddName->text();
    QSqlQuery add;
    QString addSql;

    //If a college is selected then add the souvenir.
    if(ui->comboBox_schoolSouvenir->currentIndex() > 0 && ui->lineEdit_souvenirAddPrice->isEnabled())
    {
        //If the price entered is valid
        if(addPrice >= "0")
        {
            //Open database
            ConnOpen();

            //Get the sql exec parameters
            addSql = "insert into souvenirs (College, Souvenir, Cost) values (\'" + addSchoolSouvenir + "\', \'" + addName + "\', \'" + addPrice + "\')";
            //Execute sql query
            add.exec(addSql);

            //Inform that the souvenir was added.
            QMessageBox::information(this, "", "Added Souvenir");
            ConnClose();
        }
        else
        {
//            if(addPrice > "0")
//            {
//                QMessageBox::warning(this, "", "Select a college and enter a souvenir name and price");
//            }
//            else
//                QMessageBox::critical(this, "", "Invalid Price");
            //return;
            QMessageBox::critical(this, "", "Invalid Price");
        }
    }
    else
        QMessageBox::warning(this, "", "Select a college and enter a souvenir name and price");
}

