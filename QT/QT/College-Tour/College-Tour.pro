QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminwindow.cpp \
    arizonainput.cpp \
    arizonawindow.cpp \
    env.cpp \
    main.cpp \
    mainwindow.cpp \
    plantripwindow.cpp \
    saddlebacktripwindow.cpp \
    summarypage.cpp \
    travelplan.cpp \
    welcomewindow.cpp

HEADERS += \
    adminwindow.h \
    arizonainput.h \
    arizonawindow.h \
    env.h \
    mainwindow.h \
    plantripwindow.h \
    saddlebacktripwindow.h \
    summarypage.h \
    travelplan.h \
    welcomewindow.h

FORMS += \
    adminwindow.ui \
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
