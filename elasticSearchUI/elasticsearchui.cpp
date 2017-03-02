#include "elasticsearchui.h"

elasticSearchUI::elasticSearchUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->qtext = ui.content;
}

elasticSearchUI::~elasticSearchUI()
{

}
