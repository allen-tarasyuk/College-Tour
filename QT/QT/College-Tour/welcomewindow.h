#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QMainWindow>
#include <mainwindow.h>
#include <plantripwindow.h>
#include "adminwindow.h"

namespace Ui {
class welcomeWindow;
}

/// TravelPlan class
///
/// Presents the user with option to display distances or souvenirs,
/// select plans, or access adminstration pages

class welcomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcomeWindow(QWidget *parent = nullptr);
    ~welcomeWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked(); //Admin pushButton

private:
    Ui::welcomeWindow *ui;
    MainWindow *display;
    planTripWindow *select;
    adminWindow *adminLogin;

};

#endif // WELCOMEWINDOW_H
