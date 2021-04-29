#include "talletus.h"
#include "ui_talletus.h"

Talletus::Talletus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Talletus)
{
    ui->setupUi(this);
}

Talletus::~Talletus()
{
    delete ui;
}

void Talletus::on_pushButton_clicked()
{
    this->close();
}
