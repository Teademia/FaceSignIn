#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"ui_signin.h"
#include"ui_login.h"
#include<QFile>
#include<QTextStream>
#include<QCamera>
#include<QCameraViewfinder>
#include<QCameraImageCapture>
#include<QCameraInfo>
#include<QDebug>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


    QWidget * NewSignInWidget;
    void set_style();


private slots:
    void Move_To_Sign();
    void OpenCamera();


private:
    Ui::Widget * ui;
    Ui::SignIn * NewSignInUI;


    QCamera * Camera;
    QCameraViewfinder * ViewFinder;
    QCameraImageCapture * Capture;

    QList<QCameraInfo> CList;
};
#endif // WIDGET_H
