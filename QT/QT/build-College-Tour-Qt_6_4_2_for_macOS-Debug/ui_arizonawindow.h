/********************************************************************************
** Form generated from reading UI file 'arizonawindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARIZONAWINDOW_H
#define UI_ARIZONAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_arizonawindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *arizonawindow)
    {
        if (arizonawindow->objectName().isEmpty())
            arizonawindow->setObjectName("arizonawindow");
        arizonawindow->resize(800, 600);
        centralwidget = new QWidget(arizonawindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(100, 170, 256, 192));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(440, 180, 256, 192));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 40, 151, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 130, 58, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 140, 58, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(290, 110, 191, 32));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 400, 100, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 400, 100, 32));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 400, 100, 32));
        arizonawindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(arizonawindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        arizonawindow->setMenuBar(menubar);
        statusbar = new QStatusBar(arizonawindow);
        statusbar->setObjectName("statusbar");
        arizonawindow->setStatusBar(statusbar);

        retranslateUi(arizonawindow);

        QMetaObject::connectSlotsByName(arizonawindow);
    } // setupUi

    void retranslateUi(QMainWindow *arizonawindow)
    {
        arizonawindow->setWindowTitle(QCoreApplication::translate("arizonawindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("arizonawindow", "College Name", nullptr));
        label_2->setText(QCoreApplication::translate("arizonawindow", "Menu", nullptr));
        label_3->setText(QCoreApplication::translate("arizonawindow", "receipt", nullptr));
        pushButton->setText(QCoreApplication::translate("arizonawindow", "Purchase", nullptr));
        pushButton_2->setText(QCoreApplication::translate("arizonawindow", "Next", nullptr));
        pushButton_3->setText(QCoreApplication::translate("arizonawindow", "Previous", nullptr));
    } // retranslateUi

};

namespace Ui {
    class arizonawindow: public Ui_arizonawindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARIZONAWINDOW_H
