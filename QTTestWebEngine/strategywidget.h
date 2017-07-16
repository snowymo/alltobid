#ifndef STRATEGYWIDGET_H
#define STRATEGYWIDGET_H

#include <QWidget>

namespace Ui {
class StrategyWidget;
}

class StrategyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StrategyWidget(QWidget *parent = 0);
    ~StrategyWidget();

private:
    Ui::StrategyWidget *ui;
};

#endif // STRATEGYWIDGET_H
