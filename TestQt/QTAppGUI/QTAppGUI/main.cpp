#include "QTAppGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTAppGUI w;
	w.show();
	return a.exec();
}
