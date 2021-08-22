QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    feedstudent.cpp \
    feedsub.cpp \
    feedsubmit.cpp \
    feedtwo.cpp \
    main.cpp \
    feed1.cpp \
    rate.cpp \
    teachlogin.cpp

HEADERS += \
    feed1.h \
    feedstudent.h \
    feedsub.h \
    feedsubmit.h \
    feedtwo.h \
    rate.h \
    teachlogin.h

FORMS += \
    feed1.ui \
    feedstudent.ui \
    feedsub.ui \
    feedsubmit.ui \
    feedtwo.ui \
    rate.ui \
    teachlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
