//
// Created by Yjy09 on 2024/7/10.
//

#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QtSql/qsqlquery.h>
#include <QSqlQueryModel>
#include <QtSql/qsqlerror.h>

class DBManager {
public:
    static DBManager &instance();

    QSqlDatabase database() const;

private:
    DBManager();

    QSqlDatabase db;

    // 防止拷贝和赋值
    DBManager(const DBManager &) = delete;

    DBManager &operator=(const DBManager &) = delete;
};


#endif //DBMANAGER_H
