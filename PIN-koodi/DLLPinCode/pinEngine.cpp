#include "pinEngine.h"

pinEngine::pinEngine(QObject * parent):QObject(parent)
{
    qDebug()<<"Luodaan DLL:n pinEnginessä";
}

pinEngine::~pinEngine()
{
    qDebug()<<"Tuhotaan DLL:n pinEnginessä";
}

void pinEngine::insertPin()
{
    number=1234;
    emit signalToDLLPinCode();
    qDebug()<<"pinEngine lähetti signaalin DLLPinCodeen";
    emit signalToDLLPinCodeWithParameter(number);
}

short pinEngine::returnValueToInterface()
{
    return number;
}

