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
    connect(ui->btn_login,SIGNAL(clicked()),this,SLOT(Move_To_Sign()));
    connect(NewSignInUI->Open,SIGNAL(clicked(bool)),this,SLOT(OpenCamera()));


    Camera=new QCamera(CList.at(0));
    ViewFinder=new QCameraViewfinder;
    ViewFinder->setParent(NewSignInWidget);
    Camera->setViewfinder(ViewFinder);


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
//    this->hide();
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

    ViewFinder->setGeometry(700,50,900,650);
    Camera->start();
}

