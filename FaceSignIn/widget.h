#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QMainWindow>
#include"ui_signin.h"
#include"ui_login.h"
#include"ui_board.h"4
#include"sql.h"
#include"qfacesearchr.h"
#include<QFile>
#include<QTextStream>
#include<QCamera>
#include<QCameraViewfinder>
#include<QCameraImageCapture>
#include<QCameraInfo>
#include<QDebug>
#include<QMessageBox>
#include<QEventLoop>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


    QWidget * NewSignInWidget;
    QMainWindow * NewBoardWidget;
    void set_style();
    SQL * SQLManager;

private slots:
    void Move_To_Sign();
    void OpenCamera();
    void CaptureCamera();
    void On_Image_Captured(int a,QImage b);

    void Back_To_Main();
    void CheckStatus();

private:
    Ui::Widget * ui;
    Ui::SignIn * NewSignInUI;
    Ui::Board * NewBoardUI;
    QFaceSearchR Search;
    QCamera * Camera;
    QCameraViewfinder * ViewFinder;
    QCameraImageCapture * Capture;

    QList<QCameraInfo> CList;
};
#endif // WIDGET_H
