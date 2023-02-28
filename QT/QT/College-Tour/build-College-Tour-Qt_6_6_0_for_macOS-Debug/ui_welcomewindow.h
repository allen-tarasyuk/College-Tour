/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcomeWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcomeWindow)
    {
        if (welcomeWindow->objectName().isEmpty())
            welcomeWindow->setObjectName("welcomeWindow");
        welcomeWindow->resize(800, 600);
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        welcomeWindow->setFont(font);
        centralwidget = new QWidget(welcomeWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 60, 351, 71));
        QFont font1;
        font1.setPointSize(55);
        font1.setBold(true);
        label->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 180, 281, 71));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 270, 281, 71));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 360, 281, 71));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(260, 460, 131, 51));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(410, 460, 131, 51));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        welcomeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(welcomeWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        welcomeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(welcomeWindow);
        statusbar->setObjectName("statusbar");
        welcomeWindow->setStatusBar(statusbar);

        retranslateUi(welcomeWindow);

        QMetaObject::connectSlotsByName(welcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *welcomeWindow)
    {
        welcomeWindow->setWindowTitle(QCoreApplication::translate("welcomeWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("welcomeWindow", "College-Tour!", nullptr));
        pushButton->setText(QCoreApplication::translate("welcomeWindow", "Display", nullptr));
        pushButton_2->setText(QCoreApplication::translate("welcomeWindow", "Select", nullptr));
        pushButton_3->setText(QCoreApplication::translate("welcomeWindow", "Admin", nullptr));
        pushButton_4->setText(QCoreApplication::translate("welcomeWindow", "About", nullptr));
        pushButton_5->setText(QCoreApplication::translate("welcomeWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomeWindow: public Ui_welcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
