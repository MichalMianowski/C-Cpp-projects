#-------------------------------------------------
#
# Project created by QtCreator 2019-06-07T03:30:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = proj3a
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        backend/SysAlarm.cpp \
        backend/SysOchronne.cpp \
        backend/SysPpoz.cpp \
        backend/SysZraszaczy.cpp \
        dodaj_alarm.cpp \
        dodaj_ppoz.cpp \
        dodaj_wybor.cpp \
        dodaj_zrasz.cpp \
        main.cpp \
        mainwindow.cpp \
        przeglag.cpp

HEADERS += \
        backend/SysAlarm.h \
        backend/SysOchronne.h \
        backend/SysPpoz.h \
        backend/SysZraszaczy.h \
        dodaj_alarm.h \
        dodaj_ppoz.h \
        dodaj_wybor.h \
        dodaj_zrasz.h \
        mainwindow.h \
        przeglag.h

FORMS += \
        dodaj_alarm.ui \
        dodaj_ppoz.ui \
        dodaj_wybor.ui \
        dodaj_zrasz.ui \
        mainwindow.ui \
        przeglag.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    foto.qrc
