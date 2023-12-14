#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
    connect(this->ui->Open,&QPushButton::clicked,[=]{emit OpenCamrea();});
    connect(this->ui->Check,&QPushButton::clicked,[=]{emit CheckStatus();});
}

SignIn::~SignIn()
{
    delete ui;
}

