#ifndef PLANTRIPWINDOW_H
#define PLANTRIPWINDOW_H

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

private:
    Ui::planTripWindow *ui;
};

#endif // PLANTRIPWINDOW_H
