#include "pageview.h"
#include "ui_pageview.h"
#include <string>

using namespace std;


PageView::PageView(QWidget *parent) :
    QWidget(parent)
{
    par = parent;

    view = new QWebEngineView(par);
    QWebEngineSettings *settings = QWebEngineSettings::globalSettings();
    settings->setAttribute (QWebEngineSettings::PluginsEnabled, true);
    view->load(QUrl("http://moni.51hupai.org"));
}

PageView::~PageView()
{

}

void PageView::loadNewPage(const QUrl &url)
{
    QString sturl= url.toString();
    if(!url.toString().contains("http")){
        sturl = "http://" + sturl;
    }
    view->load(QUrl(sturl));
//    view->show();
//    ui->centralWidget->widget.setView(view);
//    ui->centralWidget->add ->addWidget(view);

}
