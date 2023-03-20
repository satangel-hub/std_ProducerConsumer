TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        firstclass.cpp \
        main.cpp \
        secondclass.cpp

HEADERS += \
    firstclass.h \
    secondclass.h \
    type.h
LIBS += -lpthread
TARGET = app_uart
