#include "custominput.h"
#include "ui_custominput.h"

custominput::custominput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::custominput)
{

       ui->setupUi(this);
       ui->pushButton->setEnabled(false);

       ui->comboBox->addItem("Select College");
       ui->comboBox->setEnabled(true);
       ui->comboBox_2->setEnabled(false);
       ui->comboBox_2->addItem("Select College");

       // Sets database and display all colleges and adds them to the comboBox
       SetDataBase();
       ConnOpen();
       QSqlQuery q;
       q.exec("SELECT * FROM souvenirs ORDER BY College ASC");
       QString name = "";
       while(q.next())
       {
           if(name != q.value(0).toString())
           {
               ui->comboBox->addItem(q.value(0).toString());
           }

           name = q.value(0).toString();
       }

       // Sets text for the custom trip log ui
       QFont font = ui->label->font();
       font.setPointSize(12);
       ui->textBrowser->setFont(font);
       ui->textBrowser->setText("Starting College: ");

       ConnClose();


}

custominput::~custominput()
{
    delete ui;
    delete customWindow;
}

void custominput::on_pushButton_clicked()
{

    customWindow = new customwindow(nullptr, colleges);

    customWindow->show();
    this->close();

}


void custominput::on_pushButton_2_clicked()
{

       // Closes the window
       this->close();

}


void custominput::on_pushButton_3_clicked()
{

    if(ui->comboBox_2->currentIndex() != 0)
       {
           QString college = ui->comboBox_2->currentText();

           ui->textBrowser->setText(ui->textBrowser->toPlainText() + college + "\n\nNext College:\n");

           colleges.push_back(college);

           ui->comboBox_2->removeItem(ui->comboBox_2->currentIndex());

           ui->pushButton->setEnabled(true);
       }

}


void custominput::on_comboBox_currentIndexChanged(int index)
{
        // Select starting college
        // once starting college is selected disable the option to select a starting college
        // and enable the option to select another college
        ui->comboBox->setEnabled(false);
        ui->comboBox_2->setEnabled(true);

        // Adds the college to the trip log ui
        QString college = ui->comboBox->currentText();
        qDebug() << college;

        ui->textBrowser->setText(ui->textBrowser->toPlainText() + college + "\n\nNext College:\n");

        // Adds the college to the vector of colleges
        if(college != "Select College")
        {
            colleges.push_back(college);
        }

        // Adds remaining colleges to the new comboBox
        ConnOpen();
        QSqlQuery q;
        q.exec("SELECT * FROM souvenirs WHERE NOT College = \'" + ui->comboBox->currentText() + "\'ORDER BY College ASC");
        QString name = "";
        while(q.next())
        {
            if(name != q.value(0).toString())
            {
                ui->comboBox_2->addItem(q.value(0).toString());
            }

            name = q.value(0).toString();
        }

        ConnClose();

}

