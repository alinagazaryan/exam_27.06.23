QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_unit_test.cpp \
    ../project/singlton.cpp

HEADERS += \
    ../project/singlton.h
