#ifndef QFACESEARCHR_H
#define QFACESEARCHR_H

#include <QObject>

#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QNetworkRequest>
#include<QJsonDocument>
#include<QJsonObject>
#include<QDebug>
#include<QBuffer>
#include<QImage>
#include<QMessageBox>
#include<QJsonArray>
#include<QEventLoop>
#include"getaccesstoken.h"
class QFaceSearchR : public QObject
{
    Q_OBJECT
public:
    explicit QFaceSearchR(QObject *parent = nullptr);

    void SetImage(QImage);


    void SendRequest();
private:
    GetAccessToken TokenGet;
    QNetworkAccessManager * Manager;
    QNetworkReply * Reply;
    QNetworkRequest Request;

    QJsonDocument JSDocToSend;
    QJsonObject jsob1;

    QString AcessToken="24.c14aad029e8ad6d02cc7aa9b37232485.2592000.1705067871.282335-39923179";
    QString ImageBase64;
    QString StudenetName();
    QString group_id_list="Student";
signals:


private slots:
    void On_Ready_Read();


};

#endif // QFACESEARCHR_H
