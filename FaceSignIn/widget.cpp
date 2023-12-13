#include "widget.h"



Widget::Widget(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //this->set_style();

    NewSignInWidget=new QWidget();
    NewSignInUI=new Ui::SignIn;
    NewSignInUI->setupUi(NewSignInWidget);

    CList=QCameraInfo::availableCameras();


    Camera=new QCamera(CList.at(0));
    Capture=new QCameraImageCapture(Camera);
    ViewFinder=new QCameraViewfinder;
    ViewFinder->setParent(NewSignInWidget);
    Camera->setViewfinder(ViewFinder);


    connect(ui->btn_login,SIGNAL(clicked()),this,SLOT(Move_To_Sign()));
    connect(NewSignInUI->Open,SIGNAL(clicked(bool)),this,SLOT(OpenCamera()));
    connect(NewSignInUI->Sign,&QPushButton::clicked,this,&Widget::CaptureCamera);
    connect(Capture,SIGNAL(imageCaptured(int,QImage)),this,SLOT(On_Image_Captured(int,QImage)));
    connect(NewSignInUI->Back,&QPushButton::clicked,this,&Widget::Back_To_Main);
}

Widget::~Widget()
{

}


void Widget::set_style()
{

    QFile file(":/res/qss/style-1.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    this->setStyleSheet(stylesheet);
    file.close();
}

void Widget::Move_To_Sign()
{
    this->hide();
    NewSignInWidget->show();
}

void Widget::OpenCamera()
{
    qDebug()<<"OpenCamera";
//    Camera=new QCamera(CList.at(0));
//    ViewFinder=new QCameraViewfinder(NewSignInWidget);
//    Camera->setViewfinder(ViewFinder);
//    ViewFinder->resize(500,500);
//    Camera->start();
//    qDebug()<<ViewFinder->parent();
//    qDebug()<<ViewFinder->geometry();

    ViewFinder->setGeometry(700,50,500,600);
    Camera->start();
}

void Widget::CaptureCamera()
{

    Capture->setCaptureDestination(QCameraImageCapture::CaptureToBuffer);
    if(Capture->isReadyForCapture())
    {
         Capture->capture();
    }
    else
    {
         QMessageBox::information(NewSignInWidget,"Warning","Camera is not ready");
    }
}

void Widget::On_Image_Captured(int,QImage m_Image)
{
    QMessageBox::information(NewSignInWidget,"Check","照片拍摄成功");
    QWidget b;
    QPushButton Check(&b);
    Check.setText("Yes");
    Check.setGeometry(500,0,100,100);
    b.setGeometry(0,0,600,600);
    b.resize(600,600);
    b.show();
    QLabel a(&b);
    a.setGeometry(0,0,500,600);
    a.setPixmap(QPixmap::fromImage(m_Image).scaled(500,600));
    a.show();
    Search.SetImage(m_Image);
    Search.SendRequest();
    QEventLoop e;
    connect(&Check,&QPushButton::clicked,&e,&QEventLoop::exit);
    e.exec();
}

void Widget::Back_To_Main()
{
    NewSignInWidget->hide();
    this->show();
}



