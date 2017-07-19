/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *strategyPanel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *strategy;
    QWidget *stragety1widget;
    QSpinBox *strategy1_hour;
    QSpinBox *strategy1_min;
    QSpinBox *stragety1_sec;
    QSpinBox *stragety1_add;
    QSpinBox *stragety1_presec;
    QSpinBox *stragety1_preprice;
    QTextBrowser *textBrowser;
    QTextBrowser *strategy1_value;
    QWidget *stragety2widget;
    QSpinBox *strategy2_hour;
    QSpinBox *stragety2_min;
    QSpinBox *stragety2_sec;
    QSpinBox *stragety2_add;
    QSpinBox *stragety2_presec;
    QSpinBox *stragety2_preprice;
    QTextBrowser *textBrowser_2;
    QTextBrowser *strategy2_value;
    QWidget *stragety3widget;
    QSpinBox *strategy3_hour;
    QSpinBox *stragety3_min;
    QSpinBox *stragety3_sec;
    QSpinBox *stragety3_add;
    QSpinBox *stragety3_presec;
    QSpinBox *stragety3_preprice;
    QTextBrowser *textBrowser_3;
    QTextBrowser *strategy3_value;
    QWidget *pricePanel;
    QTextBrowser *textBrowser_4;
    QTextBrowser *currentPrice;
    QGraphicsView *gvPrice;
    QWidget *timePanel;
    QTextBrowser *textBrowser_5;
    QTextBrowser *currentTime;
    QGraphicsView *gvTime;
    QWidget *mousePanel;
    QTextBrowser *textBrowser_6;
    QGraphicsView *gvMouse;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *addressBar;
    QVBoxLayout *pageView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1411, 807);
        MainWindow->setMaximumSize(QSize(2000, 16777215));
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(2000, 800));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        horizontalWidget = new QWidget(centralWidget);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(-1, -1, 1421, 751));
        horizontalWidget->setMaximumSize(QSize(2000, 800));
        horizontalWidget->setAutoFillBackground(false);
        verticalLayoutWidget = new QWidget(horizontalWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(919, -1, 491, 751));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 0, 0);
        strategyPanel = new QWidget(verticalLayoutWidget);
        strategyPanel->setObjectName(QStringLiteral("strategyPanel"));
        verticalLayoutWidget_2 = new QWidget(strategyPanel);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(-1, -1, 501, 161));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        strategy = new QTextBrowser(verticalLayoutWidget_2);
        strategy->setObjectName(QStringLiteral("strategy"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(strategy->sizePolicy().hasHeightForWidth());
        strategy->setSizePolicy(sizePolicy);
        strategy->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        strategy->setFont(font);
        strategy->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(strategy);

        stragety1widget = new QWidget(verticalLayoutWidget_2);
        stragety1widget->setObjectName(QStringLiteral("stragety1widget"));
        strategy1_hour = new QSpinBox(stragety1widget);
        strategy1_hour->setObjectName(QStringLiteral("strategy1_hour"));
        strategy1_hour->setEnabled(true);
        strategy1_hour->setGeometry(QRect(0, 0, 31, 22));
        strategy1_hour->setFrame(false);
        strategy1_hour->setMinimum(10);
        strategy1_hour->setMaximum(11);
        strategy1_hour->setValue(11);
        strategy1_min = new QSpinBox(stragety1widget);
        strategy1_min->setObjectName(QStringLiteral("strategy1_min"));
        strategy1_min->setGeometry(QRect(40, 0, 31, 22));
        strategy1_min->setFrame(false);
        strategy1_min->setMaximum(30);
        strategy1_min->setValue(29);
        stragety1_sec = new QSpinBox(stragety1widget);
        stragety1_sec->setObjectName(QStringLiteral("stragety1_sec"));
        stragety1_sec->setGeometry(QRect(80, 0, 31, 22));
        stragety1_sec->setFrame(false);
        stragety1_sec->setMaximum(59);
        stragety1_sec->setValue(30);
        stragety1_add = new QSpinBox(stragety1widget);
        stragety1_add->setObjectName(QStringLiteral("stragety1_add"));
        stragety1_add->setGeometry(QRect(130, 0, 51, 22));
        stragety1_add->setFrame(false);
        stragety1_add->setMaximum(5000);
        stragety1_add->setSingleStep(100);
        stragety1_add->setValue(100);
        stragety1_presec = new QSpinBox(stragety1widget);
        stragety1_presec->setObjectName(QStringLiteral("stragety1_presec"));
        stragety1_presec->setGeometry(QRect(240, 0, 41, 22));
        stragety1_presec->setFrame(false);
        stragety1_presec->setMaximum(59);
        stragety1_presec->setValue(5);
        stragety1_preprice = new QSpinBox(stragety1widget);
        stragety1_preprice->setObjectName(QStringLiteral("stragety1_preprice"));
        stragety1_preprice->setGeometry(QRect(310, 0, 51, 22));
        stragety1_preprice->setFrame(false);
        stragety1_preprice->setMaximum(5000);
        stragety1_preprice->setSingleStep(100);
        stragety1_preprice->setValue(100);
        textBrowser = new QTextBrowser(stragety1widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 501, 22));
        textBrowser->setMaximumSize(QSize(16777215, 22));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        strategy1_value = new QTextBrowser(stragety1widget);
        strategy1_value->setObjectName(QStringLiteral("strategy1_value"));
        strategy1_value->setGeometry(QRect(450, 0, 51, 21));
        strategy1_value->setFrameShape(QFrame::NoFrame);
        strategy1_value->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->raise();
        strategy1_hour->raise();
        strategy1_min->raise();
        stragety1_sec->raise();
        stragety1_add->raise();
        stragety1_presec->raise();
        stragety1_preprice->raise();
        strategy1_value->raise();

        verticalLayout_2->addWidget(stragety1widget);

        stragety2widget = new QWidget(verticalLayoutWidget_2);
        stragety2widget->setObjectName(QStringLiteral("stragety2widget"));
        strategy2_hour = new QSpinBox(stragety2widget);
        strategy2_hour->setObjectName(QStringLiteral("strategy2_hour"));
        strategy2_hour->setEnabled(true);
        strategy2_hour->setGeometry(QRect(0, 0, 31, 22));
        strategy2_hour->setFrame(false);
        strategy2_hour->setMinimum(10);
        strategy2_hour->setMaximum(11);
        strategy2_hour->setValue(11);
        stragety2_min = new QSpinBox(stragety2widget);
        stragety2_min->setObjectName(QStringLiteral("stragety2_min"));
        stragety2_min->setGeometry(QRect(40, 0, 31, 22));
        stragety2_min->setFrame(false);
        stragety2_min->setMaximum(30);
        stragety2_min->setValue(29);
        stragety2_sec = new QSpinBox(stragety2widget);
        stragety2_sec->setObjectName(QStringLiteral("stragety2_sec"));
        stragety2_sec->setGeometry(QRect(80, 0, 31, 22));
        stragety2_sec->setFrame(false);
        stragety2_sec->setMaximum(59);
        stragety2_sec->setValue(30);
        stragety2_add = new QSpinBox(stragety2widget);
        stragety2_add->setObjectName(QStringLiteral("stragety2_add"));
        stragety2_add->setGeometry(QRect(130, 0, 51, 22));
        stragety2_add->setFrame(false);
        stragety2_add->setMaximum(5000);
        stragety2_add->setSingleStep(100);
        stragety2_add->setValue(100);
        stragety2_presec = new QSpinBox(stragety2widget);
        stragety2_presec->setObjectName(QStringLiteral("stragety2_presec"));
        stragety2_presec->setGeometry(QRect(240, 0, 41, 22));
        stragety2_presec->setFrame(false);
        stragety2_presec->setMaximum(59);
        stragety2_presec->setValue(5);
        stragety2_preprice = new QSpinBox(stragety2widget);
        stragety2_preprice->setObjectName(QStringLiteral("stragety2_preprice"));
        stragety2_preprice->setGeometry(QRect(310, 0, 51, 22));
        stragety2_preprice->setFrame(false);
        stragety2_preprice->setMaximum(5000);
        stragety2_preprice->setSingleStep(100);
        stragety2_preprice->setValue(100);
        textBrowser_2 = new QTextBrowser(stragety2widget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 501, 22));
        textBrowser_2->setMaximumSize(QSize(16777215, 22));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        strategy2_value = new QTextBrowser(stragety2widget);
        strategy2_value->setObjectName(QStringLiteral("strategy2_value"));
        strategy2_value->setGeometry(QRect(450, 0, 51, 21));
        strategy2_value->setFrameShape(QFrame::NoFrame);
        strategy2_value->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->raise();
        strategy2_hour->raise();
        stragety2_min->raise();
        stragety2_sec->raise();
        stragety2_add->raise();
        stragety2_presec->raise();
        stragety2_preprice->raise();
        strategy2_value->raise();

        verticalLayout_2->addWidget(stragety2widget);

        stragety3widget = new QWidget(verticalLayoutWidget_2);
        stragety3widget->setObjectName(QStringLiteral("stragety3widget"));
        strategy3_hour = new QSpinBox(stragety3widget);
        strategy3_hour->setObjectName(QStringLiteral("strategy3_hour"));
        strategy3_hour->setEnabled(true);
        strategy3_hour->setGeometry(QRect(0, 0, 31, 22));
        strategy3_hour->setFrame(false);
        strategy3_hour->setMinimum(10);
        strategy3_hour->setMaximum(11);
        strategy3_hour->setValue(11);
        stragety3_min = new QSpinBox(stragety3widget);
        stragety3_min->setObjectName(QStringLiteral("stragety3_min"));
        stragety3_min->setGeometry(QRect(40, 0, 31, 22));
        stragety3_min->setFrame(false);
        stragety3_min->setMaximum(30);
        stragety3_min->setValue(29);
        stragety3_sec = new QSpinBox(stragety3widget);
        stragety3_sec->setObjectName(QStringLiteral("stragety3_sec"));
        stragety3_sec->setGeometry(QRect(80, 0, 31, 22));
        stragety3_sec->setFrame(false);
        stragety3_sec->setMaximum(59);
        stragety3_sec->setValue(30);
        stragety3_add = new QSpinBox(stragety3widget);
        stragety3_add->setObjectName(QStringLiteral("stragety3_add"));
        stragety3_add->setGeometry(QRect(130, 0, 51, 22));
        stragety3_add->setFrame(false);
        stragety3_add->setMaximum(5000);
        stragety3_add->setSingleStep(100);
        stragety3_add->setValue(100);
        stragety3_presec = new QSpinBox(stragety3widget);
        stragety3_presec->setObjectName(QStringLiteral("stragety3_presec"));
        stragety3_presec->setGeometry(QRect(240, 0, 41, 22));
        stragety3_presec->setFrame(false);
        stragety3_presec->setMaximum(59);
        stragety3_presec->setValue(5);
        stragety3_preprice = new QSpinBox(stragety3widget);
        stragety3_preprice->setObjectName(QStringLiteral("stragety3_preprice"));
        stragety3_preprice->setGeometry(QRect(310, 0, 51, 22));
        stragety3_preprice->setFrame(false);
        stragety3_preprice->setMaximum(5000);
        stragety3_preprice->setSingleStep(100);
        stragety3_preprice->setValue(100);
        textBrowser_3 = new QTextBrowser(stragety3widget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 501, 22));
        textBrowser_3->setMaximumSize(QSize(16777215, 22));
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        strategy3_value = new QTextBrowser(stragety3widget);
        strategy3_value->setObjectName(QStringLiteral("strategy3_value"));
        strategy3_value->setGeometry(QRect(450, 0, 51, 21));
        strategy3_value->setFrameShape(QFrame::NoFrame);
        strategy3_value->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3->raise();
        strategy3_hour->raise();
        stragety3_min->raise();
        stragety3_sec->raise();
        stragety3_add->raise();
        stragety3_presec->raise();
        stragety3_preprice->raise();
        strategy3_value->raise();

        verticalLayout_2->addWidget(stragety3widget);

        verticalLayoutWidget_2->raise();

        verticalLayout->addWidget(strategyPanel);

        pricePanel = new QWidget(verticalLayoutWidget);
        pricePanel->setObjectName(QStringLiteral("pricePanel"));
        textBrowser_4 = new QTextBrowser(pricePanel);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 0, 485, 35));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser_4->sizePolicy().hasHeightForWidth());
        textBrowser_4->setSizePolicy(sizePolicy1);
        textBrowser_4->setMaximumSize(QSize(16777215, 35));
        textBrowser_4->setFont(font);
        textBrowser_4->setFrameShape(QFrame::NoFrame);
        currentPrice = new QTextBrowser(pricePanel);
        currentPrice->setObjectName(QStringLiteral("currentPrice"));
        currentPrice->setGeometry(QRect(0, 40, 485, 35));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(currentPrice->sizePolicy().hasHeightForWidth());
        currentPrice->setSizePolicy(sizePolicy2);
        currentPrice->setMaximumSize(QSize(16777215, 35));
        currentPrice->setFrameShape(QFrame::NoFrame);
        gvPrice = new QGraphicsView(pricePanel);
        gvPrice->setObjectName(QStringLiteral("gvPrice"));
        gvPrice->setGeometry(QRect(10, 100, 461, 60));
        gvPrice->setSceneRect(QRectF(0, 0, 70, 20));

        verticalLayout->addWidget(pricePanel);

        timePanel = new QWidget(verticalLayoutWidget);
        timePanel->setObjectName(QStringLiteral("timePanel"));
        textBrowser_5 = new QTextBrowser(timePanel);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(0, 0, 485, 35));
        sizePolicy2.setHeightForWidth(textBrowser_5->sizePolicy().hasHeightForWidth());
        textBrowser_5->setSizePolicy(sizePolicy2);
        textBrowser_5->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        textBrowser_5->setFont(font1);
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        currentTime = new QTextBrowser(timePanel);
        currentTime->setObjectName(QStringLiteral("currentTime"));
        currentTime->setGeometry(QRect(0, 40, 485, 35));
        currentTime->setFont(font1);
        currentTime->setFrameShape(QFrame::NoFrame);
        gvTime = new QGraphicsView(timePanel);
        gvTime->setObjectName(QStringLiteral("gvTime"));
        gvTime->setGeometry(QRect(10, 100, 461, 61));

        verticalLayout->addWidget(timePanel);

        mousePanel = new QWidget(verticalLayoutWidget);
        mousePanel->setObjectName(QStringLiteral("mousePanel"));
        textBrowser_6 = new QTextBrowser(mousePanel);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 0, 485, 35));
        QFont font2;
        font2.setPointSize(14);
        textBrowser_6->setFont(font2);
        textBrowser_6->setFrameShape(QFrame::NoFrame);
        gvMouse = new QGraphicsView(mousePanel);
        gvMouse->setObjectName(QStringLiteral("gvMouse"));
        gvMouse->setGeometry(QRect(20, 81, 451, 91));

        verticalLayout->addWidget(mousePanel);

        widget = new QWidget(horizontalWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1, 1, 911, 751));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        addressBar = new QVBoxLayout();
        addressBar->setSpacing(6);
        addressBar->setObjectName(QStringLiteral("addressBar"));
        addressBar->setSizeConstraint(QLayout::SetDefaultConstraint);

        verticalLayout_3->addLayout(addressBar);

        pageView = new QVBoxLayout();
        pageView->setSpacing(6);
        pageView->setObjectName(QStringLiteral("pageView"));
        pageView->setSizeConstraint(QLayout::SetDefaultConstraint);

        verticalLayout_3->addLayout(pageView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1411, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        strategy->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\">\347\255\226\347\225\245</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">(xx:xx:xx\346\227\266 +y\345\205\203 \346\217\220\345\211\215z\347\247\222\346\210\226w\345\205\203\345\207\272\344\273\267)</span></p></body></html>", 0));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">       \357\274\232        \357\274\232          +                 \345\205\203 \346\217\220\345\211\215            \347\247\222\346\210\226             \345\205\203 \350\257\245\347\255\226\347\225\245\345\207\272\344\273\267</span></p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">       \357\274\232        \357\274\232          +                 \345\205\203 \346\217\220\345\211\215            \347\247\222\346\210\226             \345\205\203 \350\257\245\347\255\226\347\225\245\345\207\272\344\273\267</span></p></body></html>", 0));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">       \357\274\232        \357\274\232          +                 \345\205\203 \346\217\220\345\211\215            \347\247\222\346\210\226             \345\205\203 \350\257\245\347\255\226\347\225\245\345\207\272\344\273\267</span></p></body></html>", 0));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\">\345\275\223\345\211\215\346\210\220\344\272\244\344\273\267</span></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">\345\275\223\345\211\215\346\227\266\351\227\264</span></p></body></html>", 0));
        textBrowser_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\346\240\207\345\256\232\351\274\240\346\240\207</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
