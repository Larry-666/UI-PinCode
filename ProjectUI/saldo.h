#ifndef SALDO_H
#define SALDO_H

#include <QDialog>

namespace Ui {
class Saldo;
}

class Saldo : public QDialog
{
    Q_OBJECT

public:
    explicit Saldo(QWidget *parent = nullptr);
    ~Saldo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Saldo *ui;
};

#endif // SALDO_H
