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

class QFaceSearchR : public QObject
{
    Q_OBJECT
public:
    explicit QFaceSearchR(QObject *parent = nullptr);

    void SetImage(QImage);        //这个函数要吧传入的QImage写到这个类的ImageBase64里备用
    void SetToken();        //这个是用来设置SetToken;


    void SendRequest();
private:
    QNetworkAccessManager * Manager;
    QNetworkReply * Reply;
    QNetworkRequest Request;

    QJsonDocument JSDocToSend;
    QJsonObject jsob1;

    const QString AcessToken="24.97aea7f047412ad8b7d1a6f5ce4e43a2.2592000.1698292037.282335-39923179";
    QString ImageBase64;
    QString StudenetName();
    QString group_id_list="Student";
signals:


private slots:
    void On_Ready_Read();


};

#endif // QFACESEARCHR_H
