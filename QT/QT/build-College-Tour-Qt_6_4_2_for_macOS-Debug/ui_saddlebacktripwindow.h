/********************************************************************************
** Form generated from reading UI file 'saddlebacktripwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SADDLEBACKTRIPWINDOW_H
#define UI_SADDLEBACKTRIPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_saddlebackTripWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QFrame *line;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *saddlebackTripWindow)
    {
        if (saddlebackTripWindow->objectName().isEmpty())
            saddlebackTripWindow->setObjectName("saddlebackTripWindow");
        saddlebackTripWindow->resize(800, 600);
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        saddlebackTripWindow->setFont(font);
        centralwidget = new QWidget(saddlebackTripWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 771, 41));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(140, 230, 256, 192));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(430, 230, 256, 192));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 200, 71, 21));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setUnderline(true);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 200, 81, 21));
        QFont font3;
        font3.setPointSize(19);
        font3.setBold(true);
        font3.setUnderline(true);
        label_3->setFont(font3);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 450, 100, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 450, 100, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 450, 100, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(290, 140, 231, 32));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(130, 60, 571, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 120, 171, 16));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        label_4->setFont(font4);
        saddlebackTripWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(saddlebackTripWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        saddlebackTripWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(saddlebackTripWindow);
        statusbar->setObjectName("statusbar");
        saddlebackTripWindow->setStatusBar(statusbar);

        retranslateUi(saddlebackTripWindow);

        QMetaObject::connectSlotsByName(saddlebackTripWindow);
    } // setupUi

    void retranslateUi(QMainWindow *saddlebackTripWindow)
    {
        saddlebackTripWindow->setWindowTitle(QCoreApplication::translate("saddlebackTripWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("saddlebackTripWindow", "College Name", nullptr));
        label_2->setText(QCoreApplication::translate("saddlebackTripWindow", "Menu", nullptr));
        label_3->setText(QCoreApplication::translate("saddlebackTripWindow", "Receipt", nullptr));
        pushButton->setText(QCoreApplication::translate("saddlebackTripWindow", "Purchase", nullptr));
        pushButton_2->setText(QCoreApplication::translate("saddlebackTripWindow", "Next", nullptr));
        pushButton_3->setText(QCoreApplication::translate("saddlebackTripWindow", "Previous", nullptr));
        label_4->setText(QCoreApplication::translate("saddlebackTripWindow", "Select Your Purchase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saddlebackTripWindow: public Ui_saddlebackTripWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SADDLEBACKTRIPWINDOW_H
