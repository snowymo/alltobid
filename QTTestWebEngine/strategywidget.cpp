#include "strategywidget.h"
#include "ui_strategywidget.h"

StrategyWidget::StrategyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StrategyWidget)
{
    ui->setupUi(this);
}

StrategyWidget::~StrategyWidget()
{
    delete ui;
}
