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

class saddlebackTripWindow : public QMainWindow
{
    Q_OBJECT

public:

    QSqlDatabase db;

        void SetDataBase()
        {
            // sets database path and name for the database variable
            db = QSqlDatabase::addDatabase("QSQLITE");
//            QString path = "/Users/allentarasyuk/Desktop/College-Tour/College-Tour/DB/Colleges.db";
            QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";   //Adam's db file path

            qInfo() << path;
            db.setDatabaseName(path);
        }


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


        void ConnClose()
        {
         db.close();
        }

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
