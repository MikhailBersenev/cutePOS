#include "lib/gui/mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <lib/network/database/databaseconnection.h>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QTranslator translator;
	const QStringList uiLanguages = QLocale::system().uiLanguages();
	for (const QString &locale : uiLanguages) {
		const QString baseName = "cutePOS_" + QLocale(locale).name();
		if (translator.load(":/i18n/" + baseName)) {
			a.installTranslator(&translator);
			break;
		}
	}
	DatabaseConnection* connection = new DatabaseConnection();
	DbConnectionParams *params = new DbConnectionParams();
	params->setHostName("127.0.0.1");
	params->setDatabaseName("postgres");
	params->setPort(32);
	params->setUserName("postgres");
	params->setPassword("123456");
	connection->addConnectionParams(params);
	connection->openConnection();
	MainWindow w;
	w.show();
	return a.exec();
}
