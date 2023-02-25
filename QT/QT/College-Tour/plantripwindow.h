#ifndef PLANTRIPWINDOW_H
#define PLANTRIPWINDOW_H

#include "saddlebacktripwindow.h"
#include <QDialog>

namespace Ui {
class planTripWindow;
}

class planTripWindow : public QDialog
{
    Q_OBJECT

public:
    explicit planTripWindow(QWidget *parent = nullptr);
    ~planTripWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::planTripWindow *ui;
    saddlebackTripWindow *saddlebackPlanWindow;

};

#endif // PLANTRIPWINDOW_H
