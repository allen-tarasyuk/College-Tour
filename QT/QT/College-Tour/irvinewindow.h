#ifndef IRVINEWINDOW_H
#define IRVINEWINDOW_H

#include <QMainWindow>
#include <saddlebacktripwindow.h>

namespace Ui {
class irvinewindow;
}

class irvinewindow : public QMainWindow
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

        /// Display Receipt
        ///
        /// This method displays the receipt of the items
        /// purchased at the current college
        void DisplayReceipt();

    explicit irvinewindow(QWidget *parent = nullptr);
    ~irvinewindow();










private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::irvinewindow *ui;
    TravelPlan *irvine;
    summarypage *summaryWindow;
    TravelPlan::Receipt collegeReceipt;
};

#endif // IRVINEWINDOW_H
