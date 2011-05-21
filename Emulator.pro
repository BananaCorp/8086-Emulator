#-------------------------------------------------
#
# Project created by QtCreator 2011-05-13T10:35:30
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Emulator
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    cpu.cpp \
    cpu8086.cpp \
    main_test.cpp \
    reg8086.cpp \
    memory.cpp

HEADERS += \
    cpu.h \
    cpu8086.h \
    reg8086.h \
    memory.h
