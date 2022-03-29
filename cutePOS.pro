QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    lib/gui/mainwindow.cpp \
    lib/network/database/databaseconnection.cpp \
    lib/network/database/dbconnectionparams.cpp \
    lib/pos/poscore.cpp \
    lib/utils/abstractstatemachine.cpp \
    main.cpp \


HEADERS += \
    lib/gui/mainwindow.h \
    lib/network/database/databaseconnection.h \
    lib/network/database/dbconnectionparams.h \
    lib/pos/poscore.h \
    lib/utils/abstractstatemachine.h

FORMS += \
    lib/gui/mainwindow.ui


TRANSLATIONS += \
    cutePOS_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
