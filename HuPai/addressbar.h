#ifndef ADDRESSBAR_H
#define ADDRESSBAR_H

#include <QObject>
#include <QWidget>
#include <QVBoxLayout>

#include <QtWidgets>
#include <QtWebKitWidgets>

class QWebView;
QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

class AddressBar : public QWidget
{
    Q_OBJECT
public:
    explicit AddressBar(QWebView* v, QVBoxLayout* bl, QWidget *parent = 0);
    void setWebView(QWebView* v);

signals:

public slots:
    void changeLocation();
    void adjustLocation();

public:
    QLineEdit * locationEdit;
    QWebView * view;
};

#endif // ADDRESSBAR_H
