#include "sisaankirjaus.h"
#include "ui_sisaankirjaus.h"
#include "menu.h"
#include <QMessageBox>
#include "dllpincode.h"

Sisaankirjaus::Sisaankirjaus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sisaankirjaus)

{

    ui->setupUi(this);
    ptr = new DLLPinCode(this);
    connect(ptr,SIGNAL(sendSignalEXE()),
            this,SLOT(recieveDLLSignal()),
            Qt::QueuedConnection);


}


Sisaankirjaus::~Sisaankirjaus()
{
    delete ui;
    delete ptr;
    ptr = nullptr;
}

void Sisaankirjaus::on_pushButton_OK_clicked()
{
    QString tunnus = ui->lineEdit_Tunnus->text();

    if(tunnus == "1234") {

        Menu kir;
        kir.setModal(true);
        kir.exec();

        this->close();
 }

    else {
        QMessageBox::warning(this, "Login", "Tunnus ei ole oikein");
    }
}

void Sisaankirjaus::recieveDLLSignal()
{

}


void Sisaankirjaus::on_pushButton_1_clicked()
{

}

void Sisaankirjaus::on_pushButton_2_clicked()
{

}

void Sisaankirjaus::on_pushButton_3_clicked()
{

}

void Sisaankirjaus::on_pushButton_4_clicked()
{

}

void Sisaankirjaus::on_pushButton_5_clicked()
{

}

void Sisaankirjaus::on_pushButton_6_clicked()
{

}

void Sisaankirjaus::on_pushButton_7_clicked()
{

}

void Sisaankirjaus::on_pushButton_8_clicked()
{

}

void Sisaankirjaus::on_pushButton_9_clicked()
{

}

void Sisaankirjaus::on_pushButton_0_clicked()
{

}

void Sisaankirjaus::on_pushButton_Peruuta_clicked()
{

}


