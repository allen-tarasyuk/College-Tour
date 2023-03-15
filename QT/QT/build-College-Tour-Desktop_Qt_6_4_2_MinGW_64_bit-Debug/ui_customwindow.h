/********************************************************************************
** Form generated from reading UI file 'customwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMWINDOW_H
#define UI_CUSTOMWINDOW_H

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

class Ui_customwindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_2;
    QFrame *line;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customwindow)
    {
        if (customwindow->objectName().isEmpty())
            customwindow->setObjectName("customwindow");
        customwindow->resize(800, 600);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        customwindow->setFont(font);
        centralwidget = new QWidget(customwindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 190, 71, 21));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setUnderline(true);
        label_2->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 440, 100, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(290, 130, 231, 32));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(140, 220, 256, 192));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(430, 220, 256, 192));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 440, 100, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(130, 50, 571, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 190, 81, 21));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setUnderline(true);
        label_3->setFont(font2);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 440, 100, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 771, 41));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 110, 171, 16));
        label_4->setFont(font);
        customwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        customwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(customwindow);
        statusbar->setObjectName("statusbar");
        customwindow->setStatusBar(statusbar);

        retranslateUi(customwindow);

        QMetaObject::connectSlotsByName(customwindow);
    } // setupUi

    void retranslateUi(QMainWindow *customwindow)
    {
        customwindow->setWindowTitle(QCoreApplication::translate("customwindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("customwindow", "Menu", nullptr));
        pushButton->setText(QCoreApplication::translate("customwindow", "Purchase", nullptr));
        pushButton_2->setText(QCoreApplication::translate("customwindow", "Next", nullptr));
        label_3->setText(QCoreApplication::translate("customwindow", "Receipt", nullptr));
        pushButton_3->setText(QCoreApplication::translate("customwindow", "Previous", nullptr));
        label->setText(QCoreApplication::translate("customwindow", "College Name", nullptr));
        label_4->setText(QCoreApplication::translate("customwindow", "Select Your Purchase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customwindow: public Ui_customwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMWINDOW_H
