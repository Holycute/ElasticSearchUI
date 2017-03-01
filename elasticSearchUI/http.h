#pragma once
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtCore/qstring.h>
#include <QtNetwork/qnetworkrequest.h>
#include <QtNetwork/qnetworkreply.h>
class HTTP: public QObject
{
	Q_OBJECT;
	QString host;
	int port;
	QNetworkAccessManager *qHttp;

private slots:
	void finshedReply(QNetworkReply *);

public:
	HTTP(void);
	HTTP(QString host, int port);
	void get(QString url);
	~HTTP(void);
};

