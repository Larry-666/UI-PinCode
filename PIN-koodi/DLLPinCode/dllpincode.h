#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLLPinCode_global.h"
#include "pinEngine.h"
#include <QObject>
#include <QDebug>

class DLLPINCODE_EXPORT DLLPinCode:public QObject
{
    Q_OBJECT

public:
    DLLPinCode(QObject * parent=nullptr);
    ~DLLPinCode();
    void signalSend();
    short getPin();

public slots:
    void getSignalFromPinEngine();
    void getSignalFromPinEngineWithParameter(short);

signals:
    void signalToExe();
    void signalToExeWithParameter(short);

private:
    pinEngine * pPinEngine;
};

#endif // DLLPINCODE_H
