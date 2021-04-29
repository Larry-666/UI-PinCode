#ifndef SISAANKIRJAUS_H
#define SISAANKIRJAUS_H
#include <QDialog>
#include "dllpincode.h"


namespace Ui {
class Sisaankirjaus ;
}

class Sisaankirjaus : public QDialog
{
    Q_OBJECT

public:
    explicit Sisaankirjaus(QWidget *parent = nullptr);
    ~Sisaankirjaus();

private slots:
    void on_pushButton_clicked();


    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Peruuta_clicked();

    void on_pushButton_OK_clicked();

private:
    Ui::Sisaankirjaus *ui;
    DLLPinCode * ptr;

public slots:
    void recieveDLLSignal();
 };

#endif // SISAANKIRJAUS_H
