#include "qfacesearchr.h"

QFaceSearchR::QFaceSearchR(QObject *parent)
    : QObject{parent}
{

    AcessToken=TokenGet.GiveMeAccess();
}

void QFaceSearchR::SetImage(QImage Img)
{
    qDebug()<<"Image Setted";
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    Img.save(&buffer,"jpg");
    ImageBase64=QString::fromUtf8(byteArray.toBase64().data());
}


void QFaceSearchR::SendRequest()
{
    qDebug()<<"Send Image to Baidu";
    Manager=new QNetworkAccessManager();
    Request.setUrl(QUrl(tr("https://aip.baidubce.com/rest/2.0/face/v3/search?access_token=%1").arg(AcessToken)));
    Request.setHeader(QNetworkRequest::ContentTypeHeader, "Content-Type: application/json");

    jsob1.insert("group_id_list",group_id_list);
    jsob1.insert("image", ImageBase64);
    jsob1.insert("image_type","BASE64");

    qDebug()<<"Sending Request";
    Reply=Manager->post(Request,QJsonDocument(jsob1).toJson());
    qDebug()<<"Sending Request Done";
    connect(Reply,&QNetworkReply::readyRead,this,&QFaceSearchR::On_Ready_Read);
    QEventLoop loop;
    QObject::connect(Reply, &QNetworkReply::readyRead, &loop, &QEventLoop::quit);
    loop.exec();

}

void QFaceSearchR::On_Ready_Read()
{
    QByteArray JsonData=Reply->readAll();
    QJsonObject obj=QJsonDocument::fromJson(JsonData).object();
    qDebug()<<obj.value("error_msg").toString();
    QJsonObject obj2=obj.value("result").toObject();
    qDebug()<<obj.value("face_token").toString()<<"    result success";
    QJsonArray ary=obj2.value("user_list").toArray();
    QString name=ary[0].toObject().value("user_id").toString();
    QMessageBox Box;
    Box.setText(tr("Hello  %1,You have finished sign in").arg(name));
    Box.exec();
}
