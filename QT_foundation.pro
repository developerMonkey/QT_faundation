#-------------------------------------------------
#
# Project created by QtCreator 2021-06-23T13:27:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT_foundation
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
        main.cpp \
        mainwindow.cpp \
    mainwindow1.cpp \
    mainwindow2.cpp \
    mainwindow3.cpp \
    mainwindow4.cpp \
    mainwindow5.cpp \
    mainwindow6.cpp \
    mainwindow7.cpp \
    mainwindow8.cpp \
    mainwindow9.cpp \
    mainwindow10.cpp \
    mainwindow11.cpp \
    mainwindow12.cpp \
    mainwindow13.cpp \
    mainwindow14.cpp \
    mainwindow15.cpp \
    mainwindow16.cpp \
    mainwindow17.cpp \
    mainwindow18.cpp \
    mainwindow19.cpp \
    mainwindow20.cpp \
    mainwindow21.cpp

HEADERS += \
        mainwindow.h \
    mainwindow1.h \
    mainwindow2.h \
    mainwindow3.h \
    mainwindow4.h \
    mainwindow5.h \
    mainwindow6.h \
    mainwindow7.h \
    mainwindow8.h \
    mainwindow9.h \
    mainwindow10.h \
    mainwindow11.h \
    mainwindow12.h \
    mainwindow13.h \
    mainwindow14.h \
    mainwindow15.h \
    mainwindow16.h \
    mainwindow17.h \
    mainwindow18.h \
    mainwindow19.h \
    mainwindow20.h \
    mainwindow21.h

FORMS += \
        mainwindow.ui \
    mainwindow1.ui \
    mainwindow2.ui \
    mainwindow3.ui \
    mainwindow4.ui \
    mainwindow5.ui \
    mainwindow6.ui \
    mainwindow7.ui \
    mainwindow8.ui \
    mainwindow9.ui \
    mainwindow10.ui \
    mainwindow11.ui \
    mainwindow12.ui \
    mainwindow13.ui \
    mainwindow14.ui \
    mainwindow15.ui \
    mainwindow16.ui \
    mainwindow17.ui \
    mainwindow18.ui \
    mainwindow19.ui \
    mainwindow20.ui \
    mainwindow21.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    file.qrc

DISTFILES += \
    chemistry.jpg \
    chinese.jpg \
    english.jpg
