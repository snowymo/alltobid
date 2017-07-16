#include "addressbar.h"

AddressBar::AddressBar(QWidget *parent) :
    QWidget(parent)
{
    addressEdit = new QLineEdit(parent);
    addressEdit->setText("http://moni.51hupai.org/");
    goButton = new QPushButton("Go", parent);

    layout = new QHBoxLayout;
    layout->addWidget(addressEdit);
    layout->addWidget(goButton);
    this->setLayout(layout);

    connect(goButton, SIGNAL(clicked()), this, SLOT(goToSite()));
    connect(addressEdit, SIGNAL(returnPressed()), this, SLOT(goToSite()));

    emit goToSite();
}

AddressBar::~AddressBar()
{

}

void AddressBar::goToSite()
{
    QString address = addressEdit->text();
    emit go(QUrl(address));
}
