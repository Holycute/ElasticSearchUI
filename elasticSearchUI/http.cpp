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
	QUrl qu = QUrl(url);
	QNetworkRequest qr = QNetworkRequest(qu);
	this->qHttp->get(qr);
	qDebug()<<&qu<<"a11111111url";
	qDebug()<<&qr<<"a11111111req";
}

void HTTP::finshedReply(QNetworkReply * reply){
	if(reply->error() == 0){
		//qDebug()<< "111111111111111" << "\n";
		qDebug()<< reply->readAll().data()<< "\n";
	}else{
		qDebug()<<"2222222222"<< "\n";
		qDebug()<< reply->errorString() << "\n";
	}
	qDebug()<<&reply->url()<<"a11111111url";
	qDebug()<<&reply->request()<<"a11111111req";
	reply->deleteLater();
}

HTTP::~HTTP(void)
{
	delete this->qHttp;
}
