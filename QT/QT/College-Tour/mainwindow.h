#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "plantripwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:


    QSqlDatabase db;

        void SetDataBase(){
            // Sets database path and name for the database variable
            db = QSqlDatabase::addDatabase("QSQLITE");
           QString path = "/Users/allentarasyuk/Desktop/College-Tour/College-Tour/DB/Colleges.db";
          //  QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";   //Adam's db file path
            qInfo() << path;
            db.setDatabaseName(path);
        }

        void ConnOpen(){
            // Opens database and outputs if it opened sucessfully
            if(db.open()){
                qDebug() << ("Connected.");
            } else {
                qDebug() << ("Not Connected.");
            }
        }

        void ConnClose() {
            db.close();
        }




    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    planTripWindow *tripWindow;
};
#endif // MAINWINDOW_H
