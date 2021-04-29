#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sisaankirjaus.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_loggin_clicked()
{
   Sisaankirjaus kirjaus;
   kirjaus.setModal(true);
   kirjaus.exec();

}
