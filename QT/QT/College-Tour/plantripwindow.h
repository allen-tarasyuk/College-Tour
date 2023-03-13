#ifndef PLANTRIPWINDOW_H
#define PLANTRIPWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QDialog>
#include "saddlebacktripwindow.h"
#include "arizonainput.h"
#include "custominput.h"
#include "irvinewindow.h"

namespace Ui {
class planTripWindow;
}

/// planTripWindow class
///
/// Holds the buttons to all the trip plans
/// and sends the user to the specified plan they chose

class planTripWindow : public QMainWindow
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
           QString path = "/Users/allentarasyuk/Desktop/Git-Project/College-Tour/QT/QT/College-Tour/DB/Colleges.db";


           // QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";   //Adam's db file path

           qInfo() << path;
           db.setDatabaseName(path);

       }

       /// Opens database
       ///
       /// Calls database method to open database and returns to console
       /// if opened properly
       void ConnOpen()
       {
           // opens database and outputs if it opened sucessfully
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
       void ConnClose() { db.close();}


       /// Checks if new colleges were added
       ///
       /// Checks if the new colleges were added to be used in this
       /// travel plan
       /// @returns if colleges were added or not
       bool CheckCollegesAdded();


    explicit planTripWindow(QWidget *parent = nullptr);
    ~planTripWindow();

private slots:
       void on_pushButton_clicked();

       void on_pushButton_3_clicked();

       void on_pushButton_2_clicked();

       void on_pushButton_4_clicked();

//       void on_pushButton_5_clicked();

private:
    Ui::planTripWindow *ui;
    saddlebackTripWindow *saddlebackPlanWindow;
    irvinewindow *irvinePlanWindow;
    arizonainput *arizonaInput;
     custominput *customInput;


};

#endif // PLANTRIPWINDOW_H
