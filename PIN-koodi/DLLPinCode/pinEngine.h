#ifndef PINENGINE_H
#define PINENGINE_H
#include <QObject>
#include <QDebug>
#include <QJsonDocument>

class pinEngine:public QObject
{
    Q_OBJECT

public:
    pinEngine(QObject * parent = nullptr);
    ~pinEngine();
    void insertPin();
    short returnValueToInterface();


private:
    int number;

signals:
    void signalToDLLPinCode();
    void signalToDLLPinCodeWithParameter(short);
};

#endif // PINENGINE_H
