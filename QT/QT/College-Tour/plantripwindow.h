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

namespace Ui {
class planTripWindow;
}

class planTripWindow : public QMainWindow
{
    Q_OBJECT

public:


    QSqlDatabase db;

       /// Sets database
       ///
       /// This method gets a path from the administrator and looks for the database
       /// in that given path and sets the database variable to that database
       void SetDataBase()
       {
           // sets database path and name for the database variable
           db = QSqlDatabase::addDatabase("QSQLITE");
           QString path = "/Users/allentarasyuk/Desktop/College-Tour/College-Tour/DB/Colleges.db";
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




    explicit planTripWindow(QWidget *parent = nullptr);
    ~planTripWindow();

private slots:
       void on_pushButton_clicked();

       void on_pushButton_3_clicked();

       void on_pushButton_2_clicked();

private:
    Ui::planTripWindow *ui;
    saddlebackTripWindow *saddlebackPlanWindow;
    arizonainput *arizonaInput;
     custominput *customInput;


};

#endif // PLANTRIPWINDOW_H
