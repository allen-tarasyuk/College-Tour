QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arizonainput.cpp \
    arizonawindow.cpp \
    main.cpp \
    mainwindow.cpp \
    plantripwindow.cpp \
    saddlebacktripwindow.cpp \
    summarypage.cpp \
    travelplan.cpp \
    welcomewindow.cpp

HEADERS += \
    arizonainput.h \
    arizonawindow.h \
    mainwindow.h \
    plantripwindow.h \
    saddlebacktripwindow.h \
    summarypage.h \
    travelplan.h \
    welcomewindow.h

FORMS += \
    arizonainput.ui \
    arizonawindow.ui \
    mainwindow.ui \
    plantripwindow.ui \
    saddlebacktripwindow.ui \
    summarypage.ui \
    welcomewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
