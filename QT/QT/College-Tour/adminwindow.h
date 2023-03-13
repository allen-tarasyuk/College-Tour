#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include <adminselectwindow.h>

namespace Ui {
class adminWindow;
}

/// adminWindow
///
/// Prompts the user to enter a password to access
/// the adminstrator page
class adminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = nullptr);
    ~adminWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::adminWindow *ui;
    adminSelectWindow *adminSelect;
};

#endif // ADMINWINDOW_H
