/********************************************************************************
** Form generated from reading UI file 'custominput.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMINPUT_H
#define UI_CUSTOMINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_custominput
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *line;

    void setupUi(QDialog *custominput)
    {
        if (custominput->objectName().isEmpty())
            custominput->setObjectName("custominput");
        custominput->resize(560, 405);
        QFont font;
        font.setBold(true);
        custominput->setFont(font);
        label = new QLabel(custominput);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 201, 31));
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(true);
        label->setFont(font1);
        comboBox = new QComboBox(custominput);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 120, 201, 32));
        comboBox_2 = new QComboBox(custominput);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(10, 190, 201, 32));
        label_2 = new QLabel(custominput);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 90, 111, 16));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setUnderline(false);
        label_2->setFont(font2);
        label_3 = new QLabel(custominput);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 170, 131, 16));
        label_3->setFont(font2);
        textBrowser = new QTextBrowser(custominput);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(230, 100, 291, 201));
        pushButton = new QPushButton(custominput);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 340, 100, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2 = new QPushButton(custominput);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 340, 100, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3 = new QPushButton(custominput);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 230, 111, 41));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(custominput);
        line->setObjectName("line");
        line->setGeometry(QRect(140, 50, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(custominput);

        QMetaObject::connectSlotsByName(custominput);
    } // setupUi

    void retranslateUi(QDialog *custominput)
    {
        custominput->setWindowTitle(QCoreApplication::translate("custominput", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("custominput", "Select Your Route", nullptr));
        label_2->setText(QCoreApplication::translate("custominput", "Starting College", nullptr));
        label_3->setText(QCoreApplication::translate("custominput", "Ending College", nullptr));
        pushButton->setText(QCoreApplication::translate("custominput", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("custominput", "Cancel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("custominput", "Add College", nullptr));
    } // retranslateUi

};

namespace Ui {
    class custominput: public Ui_custominput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMINPUT_H
