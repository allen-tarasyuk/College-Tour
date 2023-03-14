#ifndef ADMINSELECTWINDOW_H
#define ADMINSELECTWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class adminSelectWindow;
}

/// adminSelectWindow
///
/// Allows the admin to access the database and the option
/// to alter the distances and souvenirs of different campuses

class adminSelectWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminSelectWindow(QWidget *parent = nullptr);
    ~adminSelectWindow();

     /// Holds the database for the program
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
       QString path = "/Users/allentarasyuk/Desktop/Git-Project/College-Tour/QT/QT/College-Tour/DB/Colleges.db";

        //Adam's db file path
       // QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";
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
        if (db.open())
        {
            qDebug() << ("Connected.");
        }
        else {
            qDebug() << ("Not Connected.");
        }
    }


    /// Closes database
    ///
   /// Calls databse method to close database
    void ConnClose() {
        db.close();
    }


    /// Add College
    ///
    /// Allows the admin to add a college from a file
    void addCollege(QTextStream& fileCollege);


private slots:
    void on_comboBox_school_currentIndexChanged(int index);

    void on_comboBox_schoolSouvenir_currentIndexChanged(int index);

    void on_pushButton_souvenirEDIT_clicked();

    void on_pushButton_schoolADD_clicked();

    void on_pushButton_souvenirRM_clicked();

    void on_pushButton_souvenirADD_clicked();

private:
    Ui::adminSelectWindow *ui;
};

#endif // ADMINSELECTWINDOW_H
