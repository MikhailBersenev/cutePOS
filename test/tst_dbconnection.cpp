#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class DbConnection : public QObject
{
	Q_OBJECT

public:
	DbConnection();
	~DbConnection();

private slots:
	void initTestCase();
	void cleanupTestCase();
	void test_case1();

};

DbConnection::DbConnection()
{

}

DbConnection::~DbConnection()
{

}

void DbConnection::initTestCase()
{

}

void DbConnection::cleanupTestCase()
{

}

void DbConnection::test_case1()
{

}

QTEST_MAIN(DbConnection)

#include "tst_dbconnection.moc"
