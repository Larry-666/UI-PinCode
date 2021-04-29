#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dllpincode.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void receiveDLLSignal();
    void receiveDLLSignalWithParameter(short);
   // void receiveNumFromRestApi();// Tähän tulee sitten RestApi yhteys

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    DLLPinCode * pDLLPinCode;
    short number;
};
#endif // MAINWINDOW_H
