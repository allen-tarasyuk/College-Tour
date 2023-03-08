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

#include "env.h"

namespace Ui {
class arizonawindow;
}

class arizonawindow : public QMainWindow
{
    Q_OBJECT

public:

    env env_variables;

    QSqlDatabase db;

       void SetDataBase()
       {
           // sets database path and name for the database variable
           db = QSqlDatabase::addDatabase("QSQLITE");
           QString path = env_variables.getDatabasePath();
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
