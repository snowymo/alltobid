#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //testEngine(parent);

    bar = new AddressBar;
    ui->addressLayout-> addWidget(bar);// (bar, 0, 0, 1, 10);

    view = new PageView(parent);
    ui->pageLayout->addWidget(view->view);

    //straWidgets = new StrategyWidget;
    //uistra = new Ui::StrategyWidget;
    //for(int i = 0; i < 4; i++){
        //straWidgets[i] = *(new StrategyWidget;
    //uistra->setupUi(this);
        //ui->strategyLayout->addWidget(uistra);
    //}


    QObject::connect(bar, SIGNAL(go(QUrl)), view, SLOT(loadNewPage(QUrl)));

    // set fixed size
    //ui->centralWidget->setFixedSize(1024,720);
//    ui->hLayout->SetFixedSize();// ->setFixedSize(1024,720);
//    ui->controlLayout->setFixedSize(1024,720);
//    ui->strategyLayout->setFixedSize(1024,720);
//    ui->priceLayout->setFixedSize(1024,720);
//    ui->timeLayout->setFixedSize(1024,720);
//    ui->mouseLayout->setFixedSize(1024,720);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testEngine(QWidget *parent)
{
    QWebEngineView* view = new QWebEngineView(parent);
    QWebEngineSettings *settings = QWebEngineSettings::globalSettings();
    settings->setAttribute (QWebEngineSettings::PluginsEnabled, true);
    view->load(QUrl("http://51hupai.org/moni/"));
//    view->show();
//    ui->centralWidget->widget.setView(view);
//    ui->centralWidget->add ->addWidget(view);
    //ui->hLayout->addWidget(view);

}
