#include "mainwindow.h"
#include "welcomewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    MainWindow w;
//    w.show();

  welcomeWindow w;
  w.show();




    return a.exec();
}
