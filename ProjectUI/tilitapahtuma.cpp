#include "tilitapahtuma.h"
#include "ui_tilitapahtuma.h"
#include "menu.h"
Tilitapahtuma::Tilitapahtuma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tilitapahtuma)
{
    ui->setupUi(this);
}

Tilitapahtuma::~Tilitapahtuma()
{
    delete ui;
}

void Tilitapahtuma::on_pushButton_tilitakaisin_clicked()
{
    this->close();
}
