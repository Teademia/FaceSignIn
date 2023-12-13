#include "sql.h"

SQL::SQL()
{
    db=new QSqlDatabase;

    db->addDatabase("QODBC");
    db->setHostName("127.0.0.1");
    db->setPort(3306);
    db->setDatabaseName("qt");
    db->setUserName("root");
    db->setPassword("2233");
    if (!db->open()) {
        qDebug() << "Error: connection with database fail";
    } else {
        qDebug() << "Database: connection ok";
    }
}

bool SQL::UpdateData(const QString &tableName, const QMap<QString, QVariant> &data, const QString &condition)
{
    QSqlQuery query(*db);
    QString sql = "UPDATE " + tableName + " SET ";


    for(auto iter = data.begin(); iter != data.end(); ++iter) {
        sql += iter.key() + "= :" + iter.key() + ",";
        query.bindValue(":" + iter.key(), iter.value());
    }

    if(!condition.isEmpty()) {
        sql += " WHERE " + condition;
    }
    query.prepare(sql);

    if(!query.exec()) {
        qDebug() << "updateData error: " << query.lastError();
        return false;
    }
}
