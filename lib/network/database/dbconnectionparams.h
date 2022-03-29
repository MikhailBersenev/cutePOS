#ifndef DBCONNECTIONPARAMS_H
#define DBCONNECTIONPARAMS_H

#include <QString>
//Class provides a database connection settings container
class DbConnectionParams
{
public:
	DbConnectionParams();
	const QString *getHostName() const;
	const QString *getDatabaseName() const;
	const uint8_t *getPort() const;
	const QString *getUserName() const;
	const QString *getPassword() const;
	void setHostName(QString hostName);
	void setDatabaseName(QString databaseName);
	void setPort(uint8_t port);
	void setUserName(QString userName);
	void setPassword(QString password);
private:
	QString hostName;
	QString databaseName;
	uint8_t port;
	QString userName;
	QString password;
};

#endif // DBCONNECTIONPARAMS_H
