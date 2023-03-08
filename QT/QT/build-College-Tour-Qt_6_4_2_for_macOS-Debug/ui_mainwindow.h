/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 100, 81, 16));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(290, 320, 241, 21));
        label_2->setFont(font1);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(220, 120, 361, 32));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(220, 350, 361, 32));
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 10, 581, 41));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(270, 160, 281, 131));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(270, 390, 281, 131));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(690, 510, 100, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(130, 50, 541, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Souvenirs", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Distances From Saddleback", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "College Tour!", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Plan a Trip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
