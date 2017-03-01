#include "http.h"
#include <qdebug.h>
#include <iostream>

HTTP::HTTP(QString host, int port)
{
	this->host = host;
	this->port = port;
}
HTTP::HTTP()
{
	this->qHttp = new QNetworkAccessManager(this);
	connect(this->qHttp, SIGNAL(finished(QNetworkReply*)), this, SLOT(finshedReply(QNetworkReply *)));
}
void HTTP::get(QString url)
{
	this->qHttp->get(QNetworkRequest(QUrl(url)));
}

void HTTP::finshedReply(QNetworkReply * reply){
	if(reply->error() == 0){
		//qDebug()<< "111111111111111" << "\n";
		qDebug()<< reply->readAll().data()<< "\n";
	}else{
		qDebug()<<"2222222222"<< "\n";
		qDebug()<< reply->errorString() << "\n";
	}
	reply->deleteLater();
}

HTTP::~HTTP(void)
{
	delete this->qHttp;
}
