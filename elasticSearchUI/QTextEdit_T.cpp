#include "QTextEdit_T.h"
#include <qdebug.h>

QTextEdit_T::QTextEdit_T(void)
{
}


QTextEdit_T::~QTextEdit_T(void)
{
}

void QTextEdit::resizeEvent(QResizeEvent *event){
	qDebug()<< "333333333333";
//return QTextEdit::resizeEvent(event);
}

void QTextEdit::mouseMoveEvent(QMouseEvent *e){
	qDebug()<< "3333333333334";
//return QTextEdit::resizeEvent(event);
}
