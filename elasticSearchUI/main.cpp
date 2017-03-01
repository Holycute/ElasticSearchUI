#include "elasticsearchui.h"
#include <QtWidgets/QApplication>
#include "http.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HTTP http = HTTP();
	http.get("http://10.187.101.154:9200/_template/*");
	elasticSearchUI w;
	w.show();
	return a.exec();
}
