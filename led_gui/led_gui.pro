#-------------------------------------------------
#
# Project created by QtCreator 2014-04-20T16:00:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = led_gui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

LIBS    +=-lwiringPi

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
