/********************************************************************************
** Form generated from reading UI file 'summarypage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMARYPAGE_H
#define UI_SUMMARYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_summarypage
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QFrame *line;

    void setupUi(QDialog *summarypage)
    {
        if (summarypage->objectName().isEmpty())
            summarypage->setObjectName("summarypage");
        summarypage->resize(800, 600);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        summarypage->setFont(font);
        textBrowser = new QTextBrowser(summarypage);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(280, 130, 256, 261));
        textBrowser_2 = new QTextBrowser(summarypage);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(280, 450, 256, 31));
        label = new QLabel(summarypage);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 100, 111, 21));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setUnderline(true);
        label->setFont(font1);
        label_2 = new QLabel(summarypage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 410, 121, 31));
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setUnderline(true);
        label_2->setFont(font2);
        label_3 = new QLabel(summarypage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 10, 281, 51));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        label_3->setFont(font3);
        pushButton = new QPushButton(summarypage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 540, 100, 32));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(summarypage);
        line->setObjectName("line");
        line->setGeometry(QRect(200, 60, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(summarypage);

        QMetaObject::connectSlotsByName(summarypage);
    } // setupUi

    void retranslateUi(QDialog *summarypage)
    {
        summarypage->setWindowTitle(QCoreApplication::translate("summarypage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("summarypage", "Final Receipt", nullptr));
        label_2->setText(QCoreApplication::translate("summarypage", "Total Distance", nullptr));
        label_3->setText(QCoreApplication::translate("summarypage", "Your Trip is Over", nullptr));
        pushButton->setText(QCoreApplication::translate("summarypage", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class summarypage: public Ui_summarypage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMARYPAGE_H
