#-------------------------------------------------
#
# Project created by QtCreator 2017-08-03T11:01:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = jiwaka
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    niourkdialog.cpp \
    JiwakaHomeWidget.cpp

HEADERS  += mainwindow.h \
    niourkdialog.h \
    JiwakaHomeWidget.h

FORMS    += mainwindow.ui \
    niourkdialog.ui

RESOURCES += \
    image.qrc
