/********************************************************************************
** Form generated from reading UI file 'adminselectwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSELECTWINDOW_H
#define UI_ADMINSELECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminSelectWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_header;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_school;
    QComboBox *comboBox_schoolSouvenir;
    QTextEdit *textEdit_souvenir;
    QComboBox *comboBox_souvenirITEM;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_schoolRM;
    QPushButton *pushButton_schoolADD;
    QPushButton *pushButton_souvenirADD;
    QPushButton *pushButton_souvenirRM;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_souvenirEDIT;
    QLineEdit *lineEdit_souvenirPrice;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_souvenirAddName;
    QLabel *label_4;
    QLineEdit *lineEdit_souvenirAddPrice;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminSelectWindow)
    {
        if (adminSelectWindow->objectName().isEmpty())
            adminSelectWindow->setObjectName("adminSelectWindow");
        adminSelectWindow->resize(800, 600);
        centralwidget = new QWidget(adminSelectWindow);
        centralwidget->setObjectName("centralwidget");
        label_header = new QLabel(centralwidget);
        label_header->setObjectName("label_header");
        label_header->setGeometry(QRect(250, 12, 331, 61));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(250, 80, 331, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(179, 99, 151, 81));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 100, 201, 71));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 180, 511, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_school = new QComboBox(layoutWidget);
        comboBox_school->setObjectName("comboBox_school");

        horizontalLayout->addWidget(comboBox_school);

        comboBox_schoolSouvenir = new QComboBox(layoutWidget);
        comboBox_schoolSouvenir->setObjectName("comboBox_schoolSouvenir");

        horizontalLayout->addWidget(comboBox_schoolSouvenir);

        textEdit_souvenir = new QTextEdit(centralwidget);
        textEdit_souvenir->setObjectName("textEdit_souvenir");
        textEdit_souvenir->setGeometry(QRect(399, 219, 241, 81));
        comboBox_souvenirITEM = new QComboBox(centralwidget);
        comboBox_souvenirITEM->setObjectName("comboBox_souvenirITEM");
        comboBox_souvenirITEM->setGeometry(QRect(399, 309, 241, 32));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(141, 222, 251, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_schoolRM = new QPushButton(layoutWidget1);
        pushButton_schoolRM->setObjectName("pushButton_schoolRM");

        horizontalLayout_2->addWidget(pushButton_schoolRM);

        pushButton_schoolADD = new QPushButton(layoutWidget1);
        pushButton_schoolADD->setObjectName("pushButton_schoolADD");

        horizontalLayout_2->addWidget(pushButton_schoolADD);

        pushButton_souvenirADD = new QPushButton(centralwidget);
        pushButton_souvenirADD->setObjectName("pushButton_souvenirADD");
        pushButton_souvenirADD->setGeometry(QRect(539, 429, 101, 32));
        pushButton_souvenirRM = new QPushButton(centralwidget);
        pushButton_souvenirRM->setObjectName("pushButton_souvenirRM");
        pushButton_souvenirRM->setGeometry(QRect(440, 510, 141, 32));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(399, 349, 234, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_souvenirEDIT = new QPushButton(layoutWidget2);
        pushButton_souvenirEDIT->setObjectName("pushButton_souvenirEDIT");

        horizontalLayout_3->addWidget(pushButton_souvenirEDIT);

        lineEdit_souvenirPrice = new QLineEdit(layoutWidget2);
        lineEdit_souvenirPrice->setObjectName("lineEdit_souvenirPrice");

        horizontalLayout_3->addWidget(lineEdit_souvenirPrice);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(399, 389, 127, 102));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_souvenirAddName = new QLineEdit(layoutWidget3);
        lineEdit_souvenirAddName->setObjectName("lineEdit_souvenirAddName");

        verticalLayout->addWidget(lineEdit_souvenirAddName);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        lineEdit_souvenirAddPrice = new QLineEdit(layoutWidget3);
        lineEdit_souvenirAddPrice->setObjectName("lineEdit_souvenirAddPrice");

        verticalLayout->addWidget(lineEdit_souvenirAddPrice);

        adminSelectWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminSelectWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        adminSelectWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminSelectWindow);
        statusbar->setObjectName("statusbar");
        adminSelectWindow->setStatusBar(statusbar);

        retranslateUi(adminSelectWindow);

        QMetaObject::connectSlotsByName(adminSelectWindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminSelectWindow)
    {
        adminSelectWindow->setWindowTitle(QCoreApplication::translate("adminSelectWindow", "MainWindow", nullptr));
        label_header->setText(QCoreApplication::translate("adminSelectWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Maintenance</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("adminSelectWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">College </span></p><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Add/Remove</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("adminSelectWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Souvenir</span></p><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Add/Remove/Edit</span></p></body></html>", nullptr));
        pushButton_schoolRM->setText(QCoreApplication::translate("adminSelectWindow", "Remove", nullptr));
        pushButton_schoolADD->setText(QCoreApplication::translate("adminSelectWindow", "Add", nullptr));
        pushButton_souvenirADD->setText(QCoreApplication::translate("adminSelectWindow", "Add Souvenir", nullptr));
        pushButton_souvenirRM->setText(QCoreApplication::translate("adminSelectWindow", "Remove Souvenir", nullptr));
        pushButton_souvenirEDIT->setText(QCoreApplication::translate("adminSelectWindow", "Edit Price", nullptr));
        label_3->setText(QCoreApplication::translate("adminSelectWindow", "Souvenir Name:", nullptr));
        label_4->setText(QCoreApplication::translate("adminSelectWindow", "Souvenir Price:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminSelectWindow: public Ui_adminSelectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSELECTWINDOW_H
