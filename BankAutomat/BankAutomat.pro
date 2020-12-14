QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG +=sdk_no_version_check

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menupage.cpp \
    mysingleton.cpp \
    nostoform.cpp \
    saldoform.cpp \
    signoutform.cpp \
    siirtoform.cpp \
    talletusform.cpp \
    tapahtumatform.cpp

HEADERS += \
    mainwindow.h \
    menupage.h \
    mysingleton.h \
    nostoform.h \
    saldoform.h \
    signoutform.h \
    siirtoform.h \
    talletusform.h \
    tapahtumatform.h

FORMS += \
    mainwindow.ui \
    menupage.ui \
    nostoform.ui \
    saldoform.ui \
    signoutform.ui \
    siirtoform.ui \
    talletusform.ui \
    tapahtumatform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


QT += network
