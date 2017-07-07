#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTAppGUI.h"
#include "Recognition.h"

class QTAppGUI : public QMainWindow
{
	Q_OBJECT

public:
	QTAppGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::QTAppGUIClass ui;
	Recognition * pRecog;

	// slots
public slots:
	void update();
};
