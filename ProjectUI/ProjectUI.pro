QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    nosto.cpp \
    saldo.cpp \
    siirto.cpp \
    sisaankirjaus.cpp \
    talletus.cpp \
    tilitapahtuma.cpp

HEADERS += \
    mainwindow.h \
    menu.h \
    nosto.h \
    saldo.h \
    siirto.h \
    sisaankirjaus.h \
    talletus.h \
    tilitapahtuma.h

FORMS += \
    mainwindow.ui \
    menu.ui \
    nosto.ui \
    saldo.ui \
    siirto.ui \
    sisaankirjaus.ui \
    talletus.ui \
    tilitapahtuma.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../../OneDrive/Tiedostot/PIN-koodi/build-DLLPinCode-Desktop_Qt_5_15_0_MinGW_32_bit-Debug/debug/ -lDLLPinCode

INCLUDEPATH += $$PWD/../../OneDrive/Tiedostot/PIN-koodi/DLLPinCode
DEPENDPATH += $$PWD/../../OneDrive/Tiedostot/PIN-koodi/DLLPinCode

win32: LIBS += -L$$PWD/../../OneDrive/Tiedostot/build-DLLPinCode-Desktop_Qt_5_15_0_MinGW_64_bit-Debug/debug/ -lDLLPinCode

INCLUDEPATH += $$PWD/../../OneDrive/Tiedostot/DLLPinCode
DEPENDPATH += $$PWD/../../OneDrive/Tiedostot/DLLPinCode
