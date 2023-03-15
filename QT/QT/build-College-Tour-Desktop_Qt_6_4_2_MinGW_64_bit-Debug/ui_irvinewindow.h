/********************************************************************************
** Form generated from reading UI file 'irvinewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRVINEWINDOW_H
#define UI_IRVINEWINDOW_H

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

class Ui_irvinewindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *irvinewindow)
    {
        if (irvinewindow->objectName().isEmpty())
            irvinewindow->setObjectName("irvinewindow");
        irvinewindow->resize(800, 600);
        QFont font;
        font.setBold(true);
        irvinewindow->setFont(font);
        centralwidget = new QWidget(irvinewindow);
        centralwidget->setObjectName("centralwidget");
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(280, 130, 231, 32));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 440, 100, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 110, 171, 16));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        label_4->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 190, 81, 21));
        QFont font2;
        font2.setPointSize(19);
        font2.setBold(true);
        font2.setUnderline(true);
        label_3->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 440, 100, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(420, 220, 256, 192));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 190, 71, 21));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setUnderline(true);
        label_2->setFont(font3);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 771, 41));
        QFont font4;
        font4.setPointSize(30);
        font4.setBold(true);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(230, 440, 100, 32));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(130, 220, 256, 192));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(120, 50, 571, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        irvinewindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(irvinewindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        irvinewindow->setMenuBar(menubar);
        statusbar = new QStatusBar(irvinewindow);
        statusbar->setObjectName("statusbar");
        irvinewindow->setStatusBar(statusbar);

        retranslateUi(irvinewindow);

        QMetaObject::connectSlotsByName(irvinewindow);
    } // setupUi

    void retranslateUi(QMainWindow *irvinewindow)
    {
        irvinewindow->setWindowTitle(QCoreApplication::translate("irvinewindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("irvinewindow", "Next", nullptr));
        label_4->setText(QCoreApplication::translate("irvinewindow", "Select Your Purchase", nullptr));
        label_3->setText(QCoreApplication::translate("irvinewindow", "Receipt", nullptr));
        pushButton->setText(QCoreApplication::translate("irvinewindow", "Purchase", nullptr));
        label_2->setText(QCoreApplication::translate("irvinewindow", "Menu", nullptr));
        label->setText(QCoreApplication::translate("irvinewindow", "College Name", nullptr));
        pushButton_3->setText(QCoreApplication::translate("irvinewindow", "Previous", nullptr));
    } // retranslateUi

};

namespace Ui {
    class irvinewindow: public Ui_irvinewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRVINEWINDOW_H
