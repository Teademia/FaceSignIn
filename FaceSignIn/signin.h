#ifndef SIGNIN_H
#define SIGNIN_H


#include <QWidget>
#include<QVector>
#include<ui_signin.h>

#include<QCamera>
#include<QCameraViewfinder>
#include<QCameraImageCapture>
#include<QCameraInfo>
#include<QDebug>

namespace Ui {
class SignIn;
}

class SignIn : public QWidget
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();
signals:
    void OpenCamrea();

private:
    Ui::SignIn *ui;

};

#endif // SIGNIN_H
