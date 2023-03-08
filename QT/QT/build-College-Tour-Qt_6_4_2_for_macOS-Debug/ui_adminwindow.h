/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_login;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QMenuBar *menubar;
    QMenu *menuAdmin_Login;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName("adminWindow");
        adminWindow->resize(236, 196);
        centralwidget = new QWidget(adminWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 251, 181));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(70, 80, 100, 32));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 40, 193, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_password = new QLabel(layoutWidget);
        label_password->setObjectName("label_password");

        horizontalLayout->addWidget(label_password);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");

        horizontalLayout->addWidget(lineEdit_password);

        adminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 236, 24));
        menuAdmin_Login = new QMenu(menubar);
        menuAdmin_Login->setObjectName("menuAdmin_Login");
        adminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminWindow);
        statusbar->setObjectName("statusbar");
        adminWindow->setStatusBar(statusbar);

        menubar->addAction(menuAdmin_Login->menuAction());

        retranslateUi(adminWindow);

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton_login->setText(QCoreApplication::translate("adminWindow", "Login", nullptr));
        label_password->setText(QCoreApplication::translate("adminWindow", "Password", nullptr));
        menuAdmin_Login->setTitle(QCoreApplication::translate("adminWindow", "Admin Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
