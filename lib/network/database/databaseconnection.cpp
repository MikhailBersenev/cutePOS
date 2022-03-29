#include "databaseconnection.h"

DatabaseConnection::DatabaseConnection()
{

}

void DatabaseConnection::addConnectionParams(DbConnectionParams *dbConnectionParams)
{
	dbConectionParamsPool.push(dbConnectionParams);
}

bool DatabaseConnection::openConnection()
{
	dataBase = new QSqlDatabase;
	if(!createConnection())
	{
		delete dataBase;
		return false;
	}
	return true;
}

void DatabaseConnection::closeConnection()
{
	dataBase->close();
	delete dataBase;
}

bool DatabaseConnection::createConnection()
{
	DbConnectionParams *dbConnectionParams = dbConectionParamsPool.pop();
	if(dataBase == nullptr || dbConnectionParams == nullptr)
	{
		qCritical() << __FUNCTION__ << "dataBase object is not initialized or connection parametres pool is clear";
		return false;
	}
	*dataBase = QSqlDatabase::addDatabase("QPSQL");
	dataBase->setHostName(*dbConnectionParams->getHostName());
	dataBase->setDatabaseName(*dbConnectionParams->getDatabaseName());
	dataBase->setPort(*dbConnectionParams->getPort());
	dataBase->setUserName(*dbConnectionParams->getUserName());
	dataBase->setPassword(*dbConnectionParams->getPassword());
	if(!dataBase->open())
	{
		qCritical() << __FUNCTION__ << dataBase->lastError().text();
		return false;
	}
	return true;
}
