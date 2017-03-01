#include "elasticsearchui.h"

elasticSearchUI::elasticSearchUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->qtext =(QTextEdit_T *)ui.content;
}

elasticSearchUI::~elasticSearchUI()
{

}
