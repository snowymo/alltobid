#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWidgets>
#include <QtNetwork>
#include <QtWebKitWidgets>
#include <QGraphicsScene>
#include <QPixmap>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // fake as safari
    QCoreApplication::setApplicationName(QLatin1String("version"));
    QCoreApplication::setApplicationVersion(QLatin1String("0.1"));

    // load default page
    view = new QWebView(this);
//    QUrl url = QUrl("Https://test.alltobid.com");
    QUrl url = QUrl("Http://moni.51hupai.org");
    view->load(url);

    // connection between address and webpage, enter for trigger
    addressBar = new AddressBar(view,ui->addressBar);
    // enable plugin
    view->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
    ui->pageView->addWidget(view);

    // refresh for opencv
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updatePrice()));
    timer->start(5000);

    // load screenshot window
    scPrice = new QGraphicsScene(this);
    scTime = new QGraphicsScene(this);
    scMouse = new QGraphicsScene(this);
    ui->gvTime->setScene(scTime);
    ui->gvTime->show();
    ui->gvPrice->setScene(scPrice);
    ui->gvPrice->show();
    ui->gvMouse->setScene(scMouse);
    ui->gvMouse->show();

    // assign default mouse positions
    pricePos[0] = QPoint(ui->sbPriceMouseX->value(), ui->sbPriceMouseY->value());// QPoint(156,408);
    // delta 42, 15
    pricePos[1] = QPoint(282,438/*198,423*//*600*/);
    pricePos[1] = QPoint(42, 15);
    //priceSize = QSize(42,-15);

    timePos[0] = QPoint(ui->sbTimeMouseX->value(), ui->sbTimeMouseY->value());//QPoint(128,394);
    timePos[1] = QPoint(195,406/*600*/);
    timePos[1] = QPoint(67, 12);
//    timeSize = QSize(67,-20);

    enterPos = QPoint(ui->sbEnterMouseX->value(), ui->sbEnterMouseY->value());//QPoint(555,501);

    connect(ui->sbPriceMouseX, SIGNAL(valueChanged(int)),this, SLOT(updatePriceMouseX(int)));
    connect(ui->sbPriceMouseY, SIGNAL(valueChanged(int)),this, SLOT(updatePriceMouseY(int)));
    connect(ui->sbTimeMouseX, SIGNAL(valueChanged(int)),this, SLOT(updateTimeMouseX(int)));
    connect(ui->sbTimeMouseY, SIGNAL(valueChanged(int)),this, SLOT(updateTimeMouseY(int)));
    connect(ui->sbEnterMouseX, SIGNAL(valueChanged(int)),this, SLOT(updateEnterMouseX(int)));
    connect(ui->sbEnterMouseY, SIGNAL(valueChanged(int)),this, SLOT(updateEnterMouseY(int)));

//    pRecog = new DigitRecognition;
    pPriceRecog = new PriceRecognition;
    pTimeRecog = new TimeRecognition;

    strategies = new Strategy[3];

    connect(ui->strategy1_add, SIGNAL(valueChanged(int)),this, SLOT(updateStg1AP(int)));
    connect(ui->strategy1_hour, SIGNAL(valueChanged(int)),this, SLOT(updateStg1Hour(int)));
    connect(ui->strategy1_min, SIGNAL(valueChanged(int)),this, SLOT(updateStg1Min(int)));
    connect(ui->strategy1_preprice, SIGNAL(valueChanged(int)),this, SLOT(updateStg1PP(int)));
    connect(ui->strategy1_presec, SIGNAL(valueChanged(int)),this, SLOT(updateStg1PT(int)));
    connect(ui->strategy1_sec, SIGNAL(valueChanged(int)),this, SLOT(updateStg1Sec(int)));

    connect(ui->strategy2_add, SIGNAL(valueChanged(int)),this, SLOT(updateStg2AP(int)));
    connect(ui->strategy2_hour, SIGNAL(valueChanged(int)),this, SLOT(updateStg2Hour(int)));
    connect(ui->strategy2_min, SIGNAL(valueChanged(int)),this, SLOT(updateStg2Min(int)));
    connect(ui->strategy2_preprice, SIGNAL(valueChanged(int)),this, SLOT(updateStg2PP(int)));
    connect(ui->strategy2_presec, SIGNAL(valueChanged(int)),this, SLOT(updateStg2PT(int)));
    connect(ui->strategy2_sec, SIGNAL(valueChanged(int)),this, SLOT(updateStg1Sec(int)));

    connect(ui->strategy3_add, SIGNAL(valueChanged(int)),this, SLOT(updateStg3AP(int)));
    connect(ui->strategy3_hour, SIGNAL(valueChanged(int)),this, SLOT(updateStg3Hour(int)));
    connect(ui->strategy3_min, SIGNAL(valueChanged(int)),this, SLOT(updateStg3Min(int)));
    connect(ui->strategy3_preprice, SIGNAL(valueChanged(int)),this, SLOT(updateStg3PP(int)));
    connect(ui->strategy3_presec, SIGNAL(valueChanged(int)),this, SLOT(updateStg3PT(int)));
    connect(ui->strategy3_sec, SIGNAL(valueChanged(int)),this, SLOT(updateStg3Sec(int)));
}

MainWindow::~MainWindow()
{
    delete ui;

    delete pPriceRecog;
    pPriceRecog = 0;

    delete pTimeRecog;
    pTimeRecog = 0;

    delete [] strategies;
}

//void MainWindow::setImage(QImage img)
//{
//    qImgDesktop = QImage(img);


//    //QGraphicsView view(&scene);
//    QPixmap item = QPixmap::fromImage(img);
//    img.save("test.jpg");


//    scene->addPixmap(item);


//}

void MainWindow::grabApplication()
{
    QWidget *widget = QApplication::activeWindow();
   if(widget) {
        //           static int count = 0;
        QPixmap p1 = widget->grab(QRect(pricePos[0]+QPoint(-0,40),pricePos[0] + pricePos[1] + +QPoint(-0,40)));
        //           p.save(QString("screenshot%1.png").arg(count));
        scPrice = new QGraphicsScene;
        scPrice->addPixmap(p1);
        ui->gvPrice->setScene(scPrice);
        ui->gvPrice->show();
        //
        pPriceRecog->setSource(p1.toImage());
        pPriceRecog->recognize();
        ui->currentPrice->setText(QString::number(pPriceRecog->getResult()));
        ui->currentPrice->setAlignment(Qt::AlignCenter);


        QPixmap p2 = widget->grab(QRect(timePos[0]+QPoint(0,40),timePos[0] + timePos[1]+QPoint(0,40)));
        //           p.save(QString("screenshot%1.png").arg(count));
        scTime = new QGraphicsScene;
        scTime->addPixmap(p2);
        ui->gvTime->setScene(scTime);
        ui->gvTime->show();
        pTimeRecog->setSource(p2.toImage());
        pTimeRecog->recognize();
//        int* retTime = pTimeRecog->getRetTime();
//        QString stime = QString::number(retTime[0]) + ":" + QString::number(retTime[1]) + ":" + QString::number(retTime[2]);
        ui->currentTime->setText(/*stime + "\n" + */pTimeRecog->getTime().toString());
        ui->currentTime->setAlignment(Qt::AlignCenter);

        QPixmap p3 = widget->grab(QRect(enterPos-QPoint(20,10)+QPoint(0,40),enterPos+QPoint(20,10)+QPoint(0,40)));
        //           p.save(QString("screenshot%1.png").arg(count));
        scMouse = new QGraphicsScene;
        scMouse->addPixmap(p3);
        ui->gvMouse->setScene(scMouse);
        ui->gvMouse->show();
//           count++;
   }
}

void MainWindow::checkStrategies()
{
    // based on detail of strageties, update the value
    for(int i = 0; i < 3; i++){
        strategies[i].updateStrategy(pTimeRecog->getTime(),pPriceRecog->getResult());
    }
    ui->strategy1_value->setText(QString::number(strategies[0].getFinalPrice()));
    ui->strategy2_value->setText(QString::number(strategies[1].getFinalPrice()));
    ui->strategy3_value->setText(QString::number(strategies[2].getFinalPrice()));
}

void MainWindow::updatePrice()
{
    grabApplication();
    checkStrategies();
    if(strategies[0].triggerMouse(pTimeRecog->getTime(),pPriceRecog->getResult())){
        QMouseEvent* mEvnPress, *mEvnRelease;
        mEvnPress = new QMouseEvent(QEvent::MouseButtonPress, enterPos,Qt::LeftButton,Qt::LeftButton,Qt::NoModifier);
        QApplication::sendEvent(QWidget::focusWidget(), mEvnPress);
        mEvnRelease = new QMouseEvent(QEvent::MouseButtonRelease, enterPos,Qt::LeftButton,Qt::LeftButton,Qt::NoModifier);
        QApplication::sendEvent(QWidget::focusWidget(),mEvnRelease);
    }
    timer->start(100);
}

void MainWindow::updatePriceMouseX(int x)
{
    // assign default mouse positions
    pricePos[0].setX(x);
}

void MainWindow::updatePriceMouseY(int y)
{
    pricePos[0].setY(y);
}

void MainWindow::updateTimeMouseX(int x)
{
    timePos[0].setX(x);
}

void MainWindow::updateTimeMouseY(int y)
{
    timePos[0].setY(y);
}

void MainWindow::updateEnterMouseX(int x)
{
    enterPos.setX(x);
}

void MainWindow::updateEnterMouseY(int y)
{
    enterPos.setY(y);
}

void MainWindow::updateStg1Hour(int)
{
    strategies[0].setBTime(ui->strategy1_hour->value(),ui->strategy1_min->value(),ui->strategy1_sec->value());
    strategies[0].resetLocked();
}

void MainWindow::updateStg1Min(int)
{
    strategies[0].setBTime(ui->strategy1_hour->value(),ui->strategy1_min->value(),ui->strategy1_sec->value());
    strategies[0].resetLocked();
}

void MainWindow::updateStg1Sec(int)
{
    strategies[0].setBTime(ui->strategy1_hour->value(),ui->strategy1_min->value(),ui->strategy1_sec->value());
    strategies[0].resetLocked();
}

void MainWindow::updateStg1AP(int ap)
{
    strategies[0].setAddPrice(ap);
//    strategies[0].resetLocked();
}

void MainWindow::updateStg1PP(int pp)
{
    strategies[0].setPrePrice(pp);
//    strategies[0].resetLocked();
}

void MainWindow::updateStg1PT(int pt)
{
    strategies[0].setPreTime(pt);
//    strategies[0].resetLocked();
}


void MainWindow::updateStg2Hour(int)
{
    strategies[1].setBTime(ui->strategy2_hour->value(),ui->strategy2_min->value(),ui->strategy2_sec->value());
    strategies[1].resetLocked();
}

void MainWindow::updateStg2Min(int)
{
    strategies[1].setBTime(ui->strategy2_hour->value(),ui->strategy2_min->value(),ui->strategy2_sec->value());
    strategies[1].resetLocked();
}

void MainWindow::updateStg2Sec(int)
{
    strategies[1].setBTime(ui->strategy2_hour->value(),ui->strategy2_min->value(),ui->strategy2_sec->value());
    strategies[1].resetLocked();
}

void MainWindow::updateStg2AP(int ap)
{
    strategies[1].setAddPrice(ap);
//    strategies[1].resetLocked();
}

void MainWindow::updateStg2PP(int pp)
{
    strategies[1].setPrePrice(pp);
//    strategies[1].resetLocked();
}

void MainWindow::updateStg2PT(int pt)
{
    strategies[1].setPreTime(pt);
//    strategies[1].resetLocked();
}



void MainWindow::updateStg3Hour(int)
{
    strategies[2].setBTime(ui->strategy3_hour->value(),ui->strategy3_min->value(),ui->strategy3_sec->value());
    strategies[2].resetLocked();
}

void MainWindow::updateStg3Min(int)
{
    strategies[2].setBTime(ui->strategy3_hour->value(),ui->strategy3_min->value(),ui->strategy3_sec->value());
    strategies[2].resetLocked();
}

void MainWindow::updateStg3Sec(int)
{
    strategies[2].setBTime(ui->strategy3_hour->value(),ui->strategy3_min->value(),ui->strategy3_sec->value());
    strategies[2].resetLocked();
}

void MainWindow::updateStg3AP(int ap)
{
    strategies[2].setAddPrice(ap);
//    strategies[2].resetLocked();
}

void MainWindow::updateStg3PP(int pp)
{
    strategies[2].setPrePrice(pp);
//    strategies[2].resetLocked();
}

void MainWindow::updateStg3PT(int pt)
{
    strategies[2].setPreTime(pt);
//    strategies[2].resetLocked();
}
bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
  if (event->type() == QEvent::MouseMove)
  {
    QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
    statusBar()->showMessage(QString("Mouse move (%1,%2)").arg(mouseEvent->pos().x()).arg(mouseEvent->pos().y()));
  }
  return false;
}
