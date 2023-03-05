#ifndef CUSTOMWINDOW_H
#define CUSTOMWINDOW_H

#include <QMainWindow>
#include "saddlebacktripwindow.h"

namespace Ui {
class customwindow;
}

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

        /// Closes database
        ///
        /// Calls databse method to close database
        void ConnClose() { db.close();}

        /// Display Receipt
        ///
        /// This method displays the receipt of the items
        /// purchased at the current city
        void DisplayReceipt();




//    explicit customwindow(QWidget *parent = nullptr);
    explicit customwindow(QWidget *parent = nullptr, const vector<QString> &collegesVec = vector<QString>());
    ~customwindow();

private slots:
        void on_pushButton_clicked();

        void on_pushButton_2_clicked();

private:
    Ui::customwindow *ui;
    TravelPlan *custom;
    summarypage *summaryWindow;
    TravelPlan::Receipt cityReceipt;
    vector<QString> colleges;




};

#endif // CUSTOMWINDOW_H
