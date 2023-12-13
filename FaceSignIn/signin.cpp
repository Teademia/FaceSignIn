#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
    connect(this->ui->Open,&QPushButton::clicked,[=]{emit OpenCamrea();});
}

SignIn::~SignIn()
{
    delete ui;
}

