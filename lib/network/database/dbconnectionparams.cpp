#include "dbconnectionparams.h"

DbConnectionParams::DbConnectionParams()
{

}

const QString *DbConnectionParams::getHostName() const
{
	return &hostName;
}

const QString *DbConnectionParams::getDatabaseName() const
{
	return &databaseName;
}

const uint8_t *DbConnectionParams::getPort() const
{
	return &port;
}

const QString *DbConnectionParams::getUserName() const
{
	return &userName;
}

const QString *DbConnectionParams::getPassword() const
{
	return &password;
}

void DbConnectionParams::setHostName(QString hostName)
{
	this->hostName = hostName;
}

void DbConnectionParams::setDatabaseName(QString databaseName)
{
	this->databaseName = databaseName;
}

void DbConnectionParams::setPort(uint8_t port)
{
	this->port = port;
}

void DbConnectionParams::setUserName(QString userName)
{
	this->userName = userName;
}

void DbConnectionParams::setPassword(QString password)
{
	this->password = password;
}
