QT       += core gui network multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    getaccesstoken.cpp \
    main.cpp \
    qfacesearchr.cpp \
    signin.cpp \
    widget.cpp

HEADERS += \
    getaccesstoken.h \
    qfacesearchr.h \
    signin.h \
    widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

FORMS += \
    login.ui \
    signin.ui

RESOURCES += \
    pic.qrc \
    qss.qrc
