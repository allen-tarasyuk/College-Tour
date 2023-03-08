/********************************************************************************
** Form generated from reading UI file 'plantripwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANTRIPWINDOW_H
#define UI_PLANTRIPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planTripWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *planTripWindow)
    {
        if (planTripWindow->objectName().isEmpty())
            planTripWindow->setObjectName("planTripWindow");
        planTripWindow->resize(800, 600);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        planTripWindow->setFont(font);
        centralwidget = new QWidget(planTripWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 20, 241, 61));
        QFont font1;
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 160, 271, 71));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 400, 271, 71));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 240, 271, 71));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(260, 320, 271, 71));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(190, 80, 401, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        planTripWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(planTripWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        planTripWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(planTripWindow);
        statusbar->setObjectName("statusbar");
        planTripWindow->setStatusBar(statusbar);

        retranslateUi(planTripWindow);

        QMetaObject::connectSlotsByName(planTripWindow);
    } // setupUi

    void retranslateUi(QMainWindow *planTripWindow)
    {
        planTripWindow->setWindowTitle(QCoreApplication::translate("planTripWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("planTripWindow", "Select a Trip!", nullptr));
        pushButton->setText(QCoreApplication::translate("planTripWindow", "Saddleback", nullptr));
        pushButton_2->setText(QCoreApplication::translate("planTripWindow", "Custom Trip", nullptr));
        pushButton_3->setText(QCoreApplication::translate("planTripWindow", "Arizona State", nullptr));
        pushButton_4->setText(QCoreApplication::translate("planTripWindow", "UC Irvine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planTripWindow: public Ui_planTripWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANTRIPWINDOW_H
