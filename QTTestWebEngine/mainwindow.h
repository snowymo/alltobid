#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addressbar.h"
#include "pageview.h"
#include "strategywidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void testEngine(QWidget *parent);

private:
    Ui::MainWindow *ui;
    AddressBar *bar;
    PageView * view;
    StrategyWidget* straWidgets;
    Ui::StrategyWidget* uistra;
};

#endif // MAINWINDOW_H
