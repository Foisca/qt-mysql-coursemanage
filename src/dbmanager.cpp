//
// Created by Yjy09 on 2024/7/10.
//

#include "../include/dbmanager.h"

DBManager::DBManager() {
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("schoolmanager");
    db.setUserName("foisca");
    db.setPassword("yejkyu");
    db.setConnectOptions("MYSQL_OPT_RECONNECT=1;SET NAMES 'utf8'");

    // 2. 数据库的连接测试
    if (!db.open()) {
        qDebug() << "DBManager: Failed to connect to database:" << db.lastError().text();
    } else {
        qDebug() << "DBManager: Database connected successfully";
    }
}

DBManager &DBManager::instance() {
    static DBManager instance;
    return instance;
}

QSqlDatabase DBManager::database() const {
    return db;
}
