#-------------------------------------------------
#
# Project created by QtCreator 2014-01-14T10:20:18
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = autoTicketBuy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    httpTool.cpp \
    businessTool.cpp \
    global.cpp

HEADERS  += mainwindow.h \
    httpTool.h \
    businessTool.h \
    global.h

FORMS    += mainwindow.ui
