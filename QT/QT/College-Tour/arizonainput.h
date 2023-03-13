#ifndef ARIZONAINPUT_H
#define ARIZONAINPUT_H

#include <QDialog>
#include <QMessageBox>
#include "arizonawindow.h"

namespace Ui {
class arizonainput;
}

/// arizonaInput class
///
/// Gets the number of colleges the user wants to visit
/// in the Arizona plan

class arizonainput : public QDialog
{
    Q_OBJECT

public:
    explicit arizonainput(QWidget *parent = nullptr);
    ~arizonainput();



       /// Checks input
       ///
       /// This method takes a num string and checks to see if the input is a number
       /// @param num String num to check if a valid number
       /// @returns valid or not
       bool NumCheck(QString num)
       {
           bool ok;

           num.toInt(&ok);
           if(ok && num.toInt() < 14 && num.toInt() > 0)
           {
               return true;
           }
           else
           {
               return false;
           }
       }




private slots:
    void on_buttonBox_accepted();

private:
    Ui::arizonainput *ui;
    arizonawindow *arizonaWindow;
    QWidget *tripWindow;
};

#endif // ARIZONAINPUT_H
