#ifndef SQL_H
#define SQL_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>


class SQL: public QObject
{
    Q_OBJECT
private:
    QSqlDatabase * db;
public:
    SQL();
    bool UpdateData(const QString &tableName, const QMap<QString, QVariant> &data, const QString &condition);
};

#endif // SQL_H
