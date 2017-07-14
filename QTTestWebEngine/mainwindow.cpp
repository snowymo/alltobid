#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QWebEngineView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testEngine(parent);

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
    view->load(QUrl("http://51hupai.org/moni/"));
//    view->show();
//    ui->centralWidget->widget.setView(view);
//    ui->centralWidget->add ->addWidget(view);
    ui->hLayout->addWidget(view);

}
