#ifndef TILITAPAHTUMA_H
#define TILITAPAHTUMA_H

#include <QDialog>

namespace Ui {
class Tilitapahtuma;
}

class Tilitapahtuma : public QDialog
{
    Q_OBJECT

public:
    explicit Tilitapahtuma(QWidget *parent = nullptr);
    ~Tilitapahtuma();

private slots:
    void on_pushButton_tilitakaisin_clicked();

private:
    Ui::Tilitapahtuma *ui;
};

#endif // TILITAPAHTUMA_H
