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


/// MainWindow
///
/// Main window displays the souvenirs and distances
///

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    /// Holds the database for the program
    QSqlDatabase db;


        /// Sets database
        ///
        /// This method gets a path from the administrator and looks for the database
        /// in that given path and sets the database variable to that database

        void SetDataBase(){

            // Sets database path and name for the database variable
            db = QSqlDatabase::addDatabase("QSQLITE");
<<<<<<< HEAD

            // Allen's db file path
            QString path = "/Users/allentarasyuk/Desktop/Git-Project/College-Tour/QT/QT/College-Tour/DB/Colleges.db";

          //  QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";   //Adam's db file path
=======
//           QString path = "/Users/allentarasyuk/Desktop/College-Tour/College-Tour/DB/Colleges.db";
            QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";   //Adam's db file path
>>>>>>> 8c9a6a61a52c4f79582d37ca42996b5674b33fc4
            qInfo() << path;
            db.setDatabaseName(path);
        }

        /// Opens database
        ///
        /// Calls database method to open database and returns to console
        /// if opened properly
        void ConnOpen(){
            // Opens database and outputs if it opened sucessfully
            if(db.open()){
                qDebug() << ("Connected.");
            } else {
                qDebug() << ("Not Connected.");
            }
        }

        /// Closes database
        ///
        /// Calls databse method to close database

        void ConnClose() {
            db.close();
        }

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_clicked();

//    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    planTripWindow *tripWindow;
};
#endif // MAINWINDOW_H
