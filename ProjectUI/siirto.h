#ifndef SIIRTO_H
#define SIIRTO_H

#include <QDialog>

namespace Ui {
class Siirto;
}

class Siirto : public QDialog
{
    Q_OBJECT

public:
    explicit Siirto(QWidget *parent = nullptr);
    ~Siirto();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_0s_clicked();

    void on_pushButton_1s_clicked();

    void on_pushButton_2s_clicked();

    void on_pushButton_3s_clicked();

    void on_pushButton_4s_clicked();

    void on_pushButton_5s_clicked();

    void on_pushButton_6s_clicked();

    void on_pushButton_7s_clicked();

    void on_pushButton_8s_clicked();

    void on_pushButton_9s_clicked();

    void on_pushButton_piste_clicked();

    void on_pushButton_pilkku_clicked();

    void on_pushButton_SiirtoS_clicked();

    void on_pushButton_Takaisin_clicked();

private:
    Ui::Siirto *ui;
};

#endif // SIIRTO_H
