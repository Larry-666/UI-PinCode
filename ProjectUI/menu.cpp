#include "menu.h"
#include "ui_menu.h"
#include "tilitapahtuma.h"
#include "nosto.h"
#include "saldo.h"
#include "talletus.h"
#include "siirto.h"
#include "mainwindow.h"
#include "sisaankirjaus.h"

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_tili_clicked()
{
    Tilitapahtuma tilit;
    tilit.setModal(true);
    tilit.exec();
}


void Menu::on_pushButton_nosto_clicked()
{
    Nosto nosto;
    nosto.setModal(true);
    nosto.exec();

}

void Menu::on_pushButton_saldo_clicked()
{
    Saldo saldo;
    saldo.setModal(true);
    saldo.exec();
}

void Menu::on_pushButton_siirto_clicked()
{
    Siirto siirto;
    siirto.setModal(true);
    siirto.exec();
}


void Menu::on_pushButton_talletus_clicked()
{
    Talletus talletus;
    talletus.setModal(true);
    talletus.exec();
}



void Menu::on_pushButton_ulos_clicked()
{
    this->close();
}
