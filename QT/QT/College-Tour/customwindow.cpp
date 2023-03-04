#include "customwindow.h"
#include "ui_customwindow.h"

customwindow::customwindow(QWidget *parent, const vector<QString> &collegesVec) :
    QMainWindow(parent),
    ui(new Ui::customwindow)
{
    ui->setupUi(this);
}

customwindow::~customwindow()
{
    delete ui;
}
