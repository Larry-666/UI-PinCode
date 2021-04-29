#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pDLLPinCode = new DLLPinCode(this);
    connect(pDLLPinCode,SIGNAL(signalToExe()),this,SLOT(receiveDLLSignal()));

    connect(pDLLPinCode,SIGNAL(signalToExeWithParameter(short)),this,SLOT(receiveDLLSignalWithParameter(short)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pDLLPinCode;
    pDLLPinCode = nullptr;
}


void MainWindow::receiveDLLSignalWithParameter(short num)
{
    qDebug()<<"Parametri tuli";
    qDebug()<<num;
    ui->lineEdit_2->setText("sain parametrin");
    QString numero;
    numero.setNum(num);
    ui->label->setText(numero);
}

void MainWindow::on_pushButton_clicked()
{
    pDLLPinCode->signalSend();
    QString numero;
    numero.setNum(pDLLPinCode->getPin());
    ui->label_2->setText(numero);
}


void MainWindow::receiveDLLSignal()
{
    ui->lineEdit->setText("Sain signaalin");
}


void MainWindow::on_pushButton_2_clicked()
{
    QString tunnus = ui->lineEdit_Tunnus->text();

    if(tunnus == number) {
    QMessageBox::warning(this, "Login", "Tunnus OK");
    }

    else {
    QMessageBox::warning(this, "Login", "Tunnus ei ole oikein");
    }
}
