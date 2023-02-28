#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QMainWindow>
#include <mainwindow.h>
#include <plantripwindow.h>

namespace Ui {
class welcomeWindow;
}

class welcomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcomeWindow(QWidget *parent = nullptr);
    ~welcomeWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::welcomeWindow *ui;
    MainWindow *display;
    planTripWindow *select;

};

#endif // WELCOMEWINDOW_H
