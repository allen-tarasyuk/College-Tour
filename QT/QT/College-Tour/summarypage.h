#ifndef SUMMARYPAGE_H
#define SUMMARYPAGE_H

#include <QDialog>
#include "travelplan.h"

namespace Ui {
class summarypage;
}


/// summaryPage class
///
/// takes the summary at the end of a travel plan
/// and sets up and displays all the data to the ui

class summarypage : public QDialog
{
    Q_OBJECT

public:
    explicit summarypage(QWidget *parent = nullptr);


    /// Gets data to output to ui
    ///
    /// Gets a travelPlan receipt object to output
    /// to the values of to the ui

     void GetData(TravelPlan::Receipt currentReceipt);
    ~summarypage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::summarypage *ui;
};

#endif // SUMMARYPAGE_H
