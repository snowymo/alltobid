#ifndef HUPAIPANELS_H
#define HUPAIPANELS_H

#include <QWidget>

namespace Ui {
class HupaiPanels;
}

class HupaiPanels : public QWidget
{
    Q_OBJECT

public:
    explicit HupaiPanels(QWidget *parent = 0);
    ~HupaiPanels();

private:
    Ui::HupaiPanels *ui;
};

#endif // HUPAIPANELS_H
