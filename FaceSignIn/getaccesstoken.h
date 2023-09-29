#ifndef GETACCESSTOKEN_H
#define GETACCESSTOKEN_H

//本类提供两个接口
//1.GiveMeAccess 返回一个QString，代表的是从百度获得的AccessToken

#include <QObject>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QNetworkRequest>
#include<QJsonDocument>
#include<QJsonObject>
#include<QDebug>
#include<QEventLoop>

class GetAccessToken : public QObject
{
    Q_OBJECT
public:
    explicit GetAccessToken(QObject *parent = nullptr);


    QString GiveMeAccess();
    void SendHttp();

signals:


private slots:


private:
    QNetworkReply * Rpl;
    QNetworkAccessManager  * Manager;
    QNetworkRequest Rst;


    QJsonDocument JSD;
    QJsonObject JSO;

    QString AcessToken;

};

#endif // GETACCESSTOKEN_H
