#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QObject>
#include <QtSql>
#include "dbconnectionparams.h"

//Class provides PostgreSQL connection tools
class DatabaseConnection
{
public:
	DatabaseConnection();
	void addConnectionParams(DbConnectionParams *dbConnectionParams);
	bool openConnection();
	void closeConnection();


private:
	QSqlDatabase *dataBase;
	QStack <DbConnectionParams*> dbConectionParamsPool;
	bool createConnection();

};

#endif // DATABASECONNECTION_H
