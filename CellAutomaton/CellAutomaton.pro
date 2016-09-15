#-------------------------------------------------
#
# Project created by QtCreator 2016-04-16T17:26:26
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -static-libgcc -static-libstdc++

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CellAutomaton
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewidget.cpp \
    field.cpp \
    neighboorhood.cpp \
    rule.cpp

HEADERS  += mainwindow.h \
    gamewidget.h \
    field.h \
    neighboorhood.h \
    rule.h

FORMS    += mainwindow.ui
