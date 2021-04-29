#ifndef TALLETUS_H
#define TALLETUS_H

#include <QDialog>

namespace Ui {
class Talletus;
}

class Talletus : public QDialog
{
    Q_OBJECT

public:
    explicit Talletus(QWidget *parent = nullptr);
    ~Talletus();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Talletus *ui;
};

#endif // TALLETUS_H
