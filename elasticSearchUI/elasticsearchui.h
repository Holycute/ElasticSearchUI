#ifndef ELASTICSEARCHUI_H
#define ELASTICSEARCHUI_H

#include <QtWidgets/QMainWindow>
#include "ui_elasticsearchui.h"

class elasticSearchUI : public QMainWindow
{
	Q_OBJECT

public:
	elasticSearchUI(QWidget *parent = 0);
	~elasticSearchUI();

private:
	Ui::elasticSearchUIClass ui;
};

#endif // ELASTICSEARCHUI_H
