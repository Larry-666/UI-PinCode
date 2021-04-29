#include "dllpincode.h"


DLLPinCode::DLLPinCode(QObject * parent):QObject(parent)
{
    pPinEngine = new pinEngine(this);
    qDebug()<<"pinEngine luotu";
    connect(pPinEngine,SIGNAL(signalToDLLPinCode()),this,SLOT(getSignalFromPinEngine()));
    qDebug()<<"Yhdistettiin pinEnginen SIGNAL DLLPinCoden SLOT:iin";

    connect(pPinEngine,SIGNAL(signalToDLLPinCodeWithParameter(short)),this,SLOT(getSignalFromPinEngineWithParameter(short)));
}

DLLPinCode::~DLLPinCode()
{
    delete pPinEngine;
    pPinEngine = nullptr;
    qDebug()<<"pinEngine tuhottu";
}

void DLLPinCode::signalSend()
{
    pPinEngine->signalToDLLPinCode();
    qDebug()<<"Käsketään pinEngine lähettää signaali";
}

short DLLPinCode::getPin()
{
    return pPinEngine->returnValueToInterface();
}

void DLLPinCode::getSignalFromPinEngine()
{
    qDebug()<<"Vastaanotettiin pinEnginen signaali";
    emit signalToExe();
    qDebug()<<"Lähetetään signaali EXE:lle";
}

void DLLPinCode::getSignalFromPinEngineWithParameter(short num)
{
    emit signalToExeWithParameter(num);
}
