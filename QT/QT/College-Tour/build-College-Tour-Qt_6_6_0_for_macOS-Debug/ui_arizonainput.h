/********************************************************************************
** Form generated from reading UI file 'arizonainput.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARIZONAINPUT_H
#define UI_ARIZONAINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_arizonainput
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *arizonainput)
    {
        if (arizonainput->objectName().isEmpty())
            arizonainput->setObjectName("arizonainput");
        arizonainput->resize(354, 162);
        label = new QLabel(arizonainput);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 291, 20));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        lineEdit = new QLineEdit(arizonainput);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 60, 191, 31));
        buttonBox = new QDialogButtonBox(arizonainput);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(100, 100, 152, 32));
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(arizonainput);

        QMetaObject::connectSlotsByName(arizonainput);
    } // setupUi

    void retranslateUi(QDialog *arizonainput)
    {
        arizonainput->setWindowTitle(QCoreApplication::translate("arizonainput", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("arizonainput", "Enter how many Colleges to visit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class arizonainput: public Ui_arizonainput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARIZONAINPUT_H
