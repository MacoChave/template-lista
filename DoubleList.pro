#-------------------------------------------------
#
# Project created by QtCreator 2018-02-18T19:46:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DoubleList
TEMPLATE = app


SOURCES += main.cpp\
    GUI/mainwindow.cpp \
    TAD/tadobjeto.cpp \
    TAD/tadperro.cpp

HEADERS  += \
    GUI/mainwindow.h \
    DoubleList/doublenode.h \
    DoubleList/doublelist.h \
    TAD/tadobjeto.h \
    TAD/tadperro.h

FORMS    += GUI/mainwindow.ui
