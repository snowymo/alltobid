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
    pricePos[1] = QPoint(198,423/*600*/);
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
}

MainWindow::~MainWindow()
{
    delete ui;
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

            QPixmap p2 = widget->grab(QRect(timePos[0]+QPoint(0,40),timePos[0] + timePos[1]+QPoint(0,40)));
            //           p.save(QString("screenshot%1.png").arg(count));
            scTime = new QGraphicsScene;
            scTime->addPixmap(p2);
            ui->gvTime->setScene(scTime);
            ui->gvTime->show();

            QPixmap p3 = widget->grab(QRect(enterPos-QPoint(20,10)+QPoint(0,40),enterPos+QPoint(20,10)+QPoint(0,40)));
            //           p.save(QString("screenshot%1.png").arg(count));
            scMouse = new QGraphicsScene;
            scMouse->addPixmap(p3);
            ui->gvMouse->setScene(scMouse);
            ui->gvMouse->show();
//           count++;
       }
}

void MainWindow::updatePrice()
{
    grabApplication();
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

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
  if (event->type() == QEvent::MouseMove)
  {
    QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
    statusBar()->showMessage(QString("Mouse move (%1,%2)").arg(mouseEvent->pos().x()).arg(mouseEvent->pos().y()));
  }
  return false;
}
