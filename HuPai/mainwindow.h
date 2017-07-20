#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtWidgets>
#include<QImage>

#include "addressbar.h"

class QWebView;
QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//    void setImage(QImage img);
    bool eventFilter(QObject *obj, QEvent *event);

private:
    void grabApplication();

public slots:
    void updatePrice();
    void updatePriceMouseX(int);
    void updatePriceMouseY(int);
    void updateTimeMouseX(int);
    void updateTimeMouseY(int);
    void updateEnterMouseX(int);
    void updateEnterMouseY(int);

private:
    Ui::MainWindow *ui;

    QWebView *view;

    AddressBar * addressBar;

    QTimer *timer;

    QImage qImgDesktop;
    QGraphicsScene *scTime, *scPrice, *scMouse;
    QPoint pricePos[2];
    QPoint timePos[2];
    QPoint enterPos;
};

#endif // MAINWINDOW_H
