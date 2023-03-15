#ifndef SADDLEBACKTRIPWINDOW_H
#define SADDLEBACKTRIPWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVector>
#include "summarypage.h"
#include "travelplan.h"


namespace Ui {
class saddlebackTripWindow;
}

/// saddlebackTripWindow
///
/// Displays the initial saddleback trip plan

class saddlebackTripWindow : public QMainWindow
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
            QString path = "/Users/Julien/Desktop/Schooling/C++/Data Structures/Lebowitz/Team Elephant/College-Tour/QT/QT/College-Tour/DB/Colleges.db";

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
        /// Calls database method to close database

        void ConnClose()
        {
         db.close();
        }

        /// Display Receipt
        ///
        /// This method displays the receipt of the items
        /// purchased at the current college


        void DisplayReceipt();




    explicit saddlebackTripWindow(QWidget *parent = nullptr);
    ~saddlebackTripWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:

      Ui::saddlebackTripWindow *ui;
      TravelPlan *saddleback;
      summarypage *summaryWindow;
      TravelPlan::Receipt collegeReceipt;


};

#endif // SADDLEBACKTRIPWINDOW_H
