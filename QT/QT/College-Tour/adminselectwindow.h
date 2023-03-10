#ifndef ADMINSELECTWINDOW_H
#define ADMINSELECTWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class adminSelectWindow;
}

class adminSelectWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminSelectWindow(QWidget *parent = nullptr);
    ~adminSelectWindow();

    QSqlDatabase db;

    void SetDataBase()
    {
        // Sets database path and name for the database variable
        db = QSqlDatabase::addDatabase("QSQLITE");
        //QString path = "/Users/allentarasyuk/Desktop/College-Tour/College-Tour/DB/Colleges.db";
        QString path = "/Users/adamortiz/Desktop/collegeTour-git/College-Tour/QT/QT/College-Tour/DB/Colleges.db";   //Adam's db file path
        qInfo() << path;
        db.setDatabaseName(path);
    }

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

    void ConnClose() {
        db.close();
    }


private slots:
    void on_comboBox_school_currentIndexChanged(int index);

    void on_comboBox_souvenir_currentIndexChanged(int index);

private:
    Ui::adminSelectWindow *ui;
};

#endif // ADMINSELECTWINDOW_H