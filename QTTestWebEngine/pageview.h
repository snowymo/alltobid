#ifndef PAGEVIEW_H
#define PAGEVIEW_H

#include <QWidget>

#include <QWebEngineView>
#include <QWebEngineSettings>


class PageView : public QWidget
{
    Q_OBJECT

public:
    explicit PageView(QWidget *parent = 0);
    ~PageView();

public slots:
    void loadNewPage(const QUrl &url);

private:
    QWidget* par;

public:
    QWebEngineView* view;
};

#endif // PAGEVIEW_H
