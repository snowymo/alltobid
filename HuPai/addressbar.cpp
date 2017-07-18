#include "addressbar.h"

AddressBar::AddressBar(QWebView* v, QVBoxLayout* bl, QWidget *parent) : QWidget(parent)
{
    view = v;

    locationEdit = new QLineEdit(this);
    locationEdit->setSizePolicy(QSizePolicy::Expanding, locationEdit->sizePolicy().verticalPolicy());
    bl->addWidget(locationEdit);

    connect(locationEdit, SIGNAL(returnPressed()), SLOT(changeLocation()));
    connect(view, SIGNAL(loadFinished(bool)), SLOT(adjustLocation()));
}

void AddressBar::setWebView(QWebView *v)
{
    view = v;
}

void AddressBar::changeLocation()
{
    QUrl url = QUrl::fromUserInput(locationEdit->text());
    view->load(url);
    view->setFocus();
}

void AddressBar::adjustLocation()
{
    locationEdit->setText(view->url().toString());
}
