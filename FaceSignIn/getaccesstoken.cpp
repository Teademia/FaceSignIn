#include "getaccesstoken.h"


GetAccessToken::GetAccessToken(QObject *parent)
    : QObject{parent}
{
    SendHttp();
}

QString GetAccessToken::GiveMeAccess()
{
    return AcessToken;
}

void GetAccessToken::SendHttp()
{
    QNetworkAccessManager  * Manager=new QNetworkAccessManager();
    QNetworkRequest Rst;


    //下面是构造http头
    Rst.setUrl(QUrl("https://aip.baidubce.com/oauth/2.0/token"));
    Rst.setHeader(QNetworkRequest::ContentTypeHeader, "Content-Type: application/json");


    //下面是构造http的Body
    QString append1("grant_type=client_credentials&");
    QString append2("client_id=2myssl2664qqYWosyuNgB1s4&");
    QString append3("client_secret=NDCUk76CAHKiFDkrzC5ClnQUGHCIL3Ff&");
    QString append=append1+append2+append3;
    QByteArray buf(append.toUtf8());
    qDebug()<<"Send Http Request";
    QNetworkReply * Rpl=Manager->post(Rst,buf);
    qDebug()<<"Send Http Request Compelet";

    connect(Rpl,&QNetworkReply::readyRead,
    [=]{
    QByteArray JsonData=Rpl->readAll();
    JSO=QJsonDocument::fromJson(JsonData).object();   
    AcessToken=JSO.value("access_token").toString();
    });

    qDebug()<<"Loop Begin";
    QEventLoop loop;
    QObject::connect(Rpl, &QNetworkReply::readyRead, &loop, &QEventLoop::quit);
    loop.exec();
    qDebug()<<"Loop Exit";

}

