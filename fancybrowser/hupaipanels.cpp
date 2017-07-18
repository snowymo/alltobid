#include "hupaipanels.h"
#include "ui_hupaipanels.h"

HupaiPanels::HupaiPanels(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HupaiPanels)
{
    ui->setupUi(this);
}

HupaiPanels::~HupaiPanels()
{
    delete ui;
}
