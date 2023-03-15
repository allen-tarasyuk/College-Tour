#ifndef CUSTOMWINDOW_H
#define CUSTOMWINDOW_H

#include <QMainWindow>
#include "saddlebacktripwindow.h"

namespace Ui {
class customwindow;
}


/// customWindow
///
/// Goes through the custom trip plan

class customwindow : public QMainWindow
{
    Q_OBJECT

public:

        /// holds the database for the program
        QSqlDatabase db;

        /// Sets database
        ///
        /// This method gets a path from the administrator and looks for the database
        /// in that given path and sets the database variable to that database
        void SetDataBase()
        {
            // Sets database path and name for the database variable
            db = QSqlDatabase::addDatabase("QSQLITE");

            // Allen's db file path
            //QString path = "/Users/allentarasyuk/Desktop/Git-Project/College-Tour/QT/QT/College-Tour/DB/Colleges.db";
            QString path = "/Users/Julien/Desktop/Schooling/C++/Data Structures/Lebowitz/Team Elephant/College-Tour/QT/QT/College-Tour/DB/Colleges.db";

//            QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";   //Adam's db file path
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

        /// Display Receipt
        ///
        /// This method displays the receipt of the items
        /// purchased at the current college
        void DisplayReceipt();

        /// Constructor
        ///
        /// Constructs customWindow takes a vector as input which stores the colleges the user wants to visit

    explicit customwindow(QWidget *parent = nullptr, const vector<QString> &collegesVec = vector<QString>());
    ~customwindow();

private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

private:
    Ui::customwindow *ui;
    TravelPlan *custom;
    summarypage *summaryWindow;
    TravelPlan::Receipt collegeReceipt;
    vector<QString> colleges;




};

#endif // CUSTOMWINDOW_H
