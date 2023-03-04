#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class adminWindow;
}

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
};

#endif // ADMINWINDOW_H