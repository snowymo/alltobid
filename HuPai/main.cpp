#include "mainwindow.h"
#include <QApplication>

#include <QImage>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.installEventFilter(&w);
    w.show();

//    int x = 0, y = 0, width = 800, h = 800;
//    QRect crop_rect(x, y, width, h);

//    QImage desktop = a.screens().at(0)->grabWindow(QDesktopWidget().winId(),crop_rect.left(),crop_rect.top(),crop_rect.width(),crop_rect.height()).toImage();
//    w.setImage(desktop);



    return a.exec();
}
