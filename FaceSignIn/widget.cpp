#include "widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    GetAccessToken * a=new GetAccessToken;
    qDebug()<<a->GiveMeAccess();
    QFaceSearchR * b=new QFaceSearchR;
    b->SetImage(QImage("C:/Users/HP/Desktop/Image/capture.jpg"));
    b->SendRequest();
}

Widget::~Widget()
{
}

