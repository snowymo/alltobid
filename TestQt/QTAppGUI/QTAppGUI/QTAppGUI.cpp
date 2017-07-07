#include "QTAppGUI.h"

#include<qtimer.h>

QTAppGUI::QTAppGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	pRecog = new Recognition;
	
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	timer->start(10);
}

void QTAppGUI::update() {
	pRecog->imageProcess();
}