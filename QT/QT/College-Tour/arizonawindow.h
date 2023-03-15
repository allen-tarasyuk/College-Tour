#ifndef ARIZONAWINDOW_H
#define ARIZONAWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVector>
#include "summarypage.h"
#include "travelplan.h"

namespace Ui {
class arizonawindow;
}

/// arizonaWindow class
///
/// The window that goes through the arizona travel plan
/// gets the amount of colleges the user wanted to visit
/// and goes through those colleges

class arizonawindow : public QMainWindow
{
    Q_OBJECT

public:

    /// Holds the database for the program
    QSqlDatabase db;


       /// Sets database
       ///
       /// This method gets a path from the administrator and looks for the database
       /// in that given path and sets the database variable to that database

       void SetDataBase()
       {
           // sets database path and name for the database variable
           db = QSqlDatabase::addDatabase("QSQLITE");

           // Allen's db file path
           //QString path = "/Users/allentarasyuk/Desktop/Git-Project/College-Tour/QT/QT/College-Tour/DB/Colleges.db";
           QString path = "Users/Julien/Desktop/Schooling/C++/Data Structures/Lebowitz/Team Elephant/College-Tour/QT/QT/College-Tour/DB/Colleges.db";

           /*QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db"; */  //Adam's db file path
           qInfo() << path;
           db.setDatabaseName(path);
       }

         /// Opens database
         ///
         /// Calls database method to open database and returns to console
         /// if opened properly

       void ConnOpen()
       {
           // Opens database and outputs if it opened sucessfully
           if(db.open())
           {
               qDebug() << ("Connected.");

           } else {

               qDebug() << ("Not Connected.");
           }
       }

       /// Closes database
       ///
       /// Calls databse method to close database

       void ConnClose()
       {
        db.close();
       }

       /// Display Receipt
       ///
       /// This method displays the receipt of the items
       /// purchased at the current college

       void DisplayReceipt();

       /// Constructor
       ///
       /// Constructs arizonaWindow takes an integer as an input which stores the number of colleges the user wants to visit

      explicit arizonawindow(QWidget *parent = nullptr, int numColleges = 1);

       ~arizonawindow();



private slots:
       void on_pushButton_clicked();

       void on_pushButton_2_clicked();

private:

       Ui::arizonawindow *ui;
       TravelPlan *arizona;
       summarypage *summaryWindow;
       TravelPlan::Receipt collegeReceipt;
       int colleges;

};

#endif // ARIZONAWINDOW_H
