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
#include <QtWidgets/QFrame>
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
    QComboBox *comboBox;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *arizonawindow)
    {
        if (arizonawindow->objectName().isEmpty())
            arizonawindow->setObjectName("arizonawindow");
        arizonawindow->resize(800, 600);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        arizonawindow->setFont(font);
        centralwidget = new QWidget(arizonawindow);
        centralwidget->setObjectName("centralwidget");
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(300, 120, 231, 32));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(440, 210, 256, 192));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 430, 100, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(150, 210, 256, 192));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 100, 171, 16));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_4->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 430, 100, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 0, 771, 41));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 430, 100, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(140, 40, 571, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 180, 71, 21));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setUnderline(true);
        label_2->setFont(font3);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(540, 180, 81, 21));
        QFont font4;
        font4.setPointSize(19);
        font4.setBold(true);
        font4.setUnderline(true);
        label_3->setFont(font4);
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
        pushButton_2->setText(QCoreApplication::translate("arizonawindow", "Next", nullptr));
        label_4->setText(QCoreApplication::translate("arizonawindow", "Select Your Purchase", nullptr));
        pushButton_3->setText(QCoreApplication::translate("arizonawindow", "Previous", nullptr));
        label->setText(QCoreApplication::translate("arizonawindow", "College Name", nullptr));
        pushButton->setText(QCoreApplication::translate("arizonawindow", "Purchase", nullptr));
        label_2->setText(QCoreApplication::translate("arizonawindow", "Menu", nullptr));
        label_3->setText(QCoreApplication::translate("arizonawindow", "Receipt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class arizonawindow: public Ui_arizonawindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARIZONAWINDOW_H
