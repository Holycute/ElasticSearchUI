#ifndef ELASTICSEARCHUI_H
#define ELASTICSEARCHUI_H

#include <QtWidgets/QMainWindow>
#include "ui_elasticsearchui.h"
#include "QTextEdit_T.h"

class elasticSearchUI : public QMainWindow
{
	Q_OBJECT

public:
	elasticSearchUI(QWidget *parent = 0);
	~elasticSearchUI();

private:
	Ui::elasticSearchUIClass ui;
	QTextEdit_T * qtext;
};

#endif // ELASTICSEARCHUI_H
