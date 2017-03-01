#include "elasticsearchui.h"
#include <QtWidgets/QApplication>
#include "http.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HTTP http = HTTP();
	http.get("http://127.0.0.1");
	elasticSearchUI w;
	w.show();
	return a.exec();
}
