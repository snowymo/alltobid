#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtWidgets>
#include<QImage>

#include "addressbar.h"

#include "digitrecognition.h"
#include "pricerecognition.h"
#include "timerecognition.h"
#include "strategy.h"

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
    void checkStrategies();

public slots:
    void updatePrice();
    void updatePriceMouseX(int);
    void updatePriceMouseY(int);
    void updateTimeMouseX(int);
    void updateTimeMouseY(int);
    void updateEnterMouseX(int);
    void updateEnterMouseY(int);

    void updateStg1Hour(int);
    void updateStg1Min(int);
    void updateStg1Sec(int);
    void updateStg1AP(int);
    void updateStg1PP(int);
    void updateStg1PT(int);

    void updateStg2Hour(int);
    void updateStg2Min(int);
    void updateStg2Sec(int);
    void updateStg2AP(int);
    void updateStg2PP(int);
    void updateStg2PT(int);

    void updateStg3Hour(int);
    void updateStg3Min(int);
    void updateStg3Sec(int);
    void updateStg3AP(int);
    void updateStg3PP(int);
    void updateStg3PT(int);


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

//    DigitRecognition* pRecog;
    PriceRecognition* pPriceRecog;
    TimeRecognition* pTimeRecog;

    Strategy* strategies;
};

#endif // MAINWINDOW_H
