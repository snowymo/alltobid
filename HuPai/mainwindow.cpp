#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWidgets>
#include <QtNetwork>
#include <QtWebKitWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QCoreApplication::setApplicationName(QLatin1String("version"));
    QCoreApplication::setApplicationVersion(QLatin1String("0.1"));

    view = new QWebView(this);
    QUrl url = QUrl("Https://test.alltobid.com");
    view->load(url);

    addressBar = new AddressBar(view,ui->addressBar);
//    ui->addressBar->addWidget(addressBar->locationEdit);
//    addressBar->setWebView(view);

//    QWebView* webViewChild = new QWebView;
    view->settings()->setAttribute(QWebSettings::PluginsEnabled, true);
    ui->pageView->addWidget(view);
//    this->setCentralWidget(view);
}

MainWindow::~MainWindow()
{
    delete ui;
}
