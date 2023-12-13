QT       += core gui network multimedia multimediawidgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    board.cpp \
    getaccesstoken.cpp \
    main.cpp \
    qfacesearchr.cpp \
    signin.cpp \
    sql.cpp \
    widget.cpp

HEADERS += \
    board.h \
    getaccesstoken.h \
    qfacesearchr.h \
    signin.h \
    sql.h \
    widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

FORMS += \
    board.ui \
    login.ui \
    signin.ui

RESOURCES += \
    pic.qrc \
    qss.qrc
