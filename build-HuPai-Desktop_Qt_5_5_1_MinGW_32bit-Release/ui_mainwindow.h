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
    QSpinBox *strategy1_sec;
    QSpinBox *strategy1_add;
    QSpinBox *strategy1_presec;
    QSpinBox *strategy1_preprice;
    QTextBrowser *textBrowser;
    QTextBrowser *strategy1_value;
    QWidget *stragety2widget;
    QSpinBox *strategy2_hour;
    QSpinBox *strategy2_min;
    QSpinBox *strategy2_sec;
    QSpinBox *strategy2_add;
    QSpinBox *strategy2_presec;
    QSpinBox *strategy2_preprice;
    QTextBrowser *textBrowser_2;
    QTextBrowser *strategy2_value;
    QWidget *stragety3widget;
    QSpinBox *strategy3_hour;
    QSpinBox *strategy3_min;
    QSpinBox *strategy3_sec;
    QSpinBox *strategy3_add;
    QSpinBox *strategy3_presec;
    QSpinBox *strategy3_preprice;
    QTextBrowser *textBrowser_3;
    QTextBrowser *strategy3_value;
    QWidget *pricePanel;
    QTextBrowser *textBrowser_4;
    QTextBrowser *currentPrice;
    QGraphicsView *gvPrice;
    QSpinBox *sbPriceMouseX;
    QSpinBox *sbPriceMouseY;
    QTextBrowser *textBrowser_7;
    QWidget *timePanel;
    QTextBrowser *textBrowser_5;
    QTextBrowser *currentTime;
    QGraphicsView *gvTime;
    QTextBrowser *textBrowser_8;
    QSpinBox *sbTimeMouseY;
    QSpinBox *sbTimeMouseX;
    QWidget *mousePanel;
    QTextBrowser *textBrowser_6;
    QGraphicsView *gvMouse;
    QSpinBox *sbEnterMouseY;
    QSpinBox *sbEnterMouseX;
    QTextBrowser *textBrowser_9;
    QWidget *layoutWidget;
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
        strategy1_sec = new QSpinBox(stragety1widget);
        strategy1_sec->setObjectName(QStringLiteral("strategy1_sec"));
        strategy1_sec->setGeometry(QRect(80, 0, 31, 22));
        strategy1_sec->setFrame(false);
        strategy1_sec->setMaximum(59);
        strategy1_sec->setValue(30);
        strategy1_add = new QSpinBox(stragety1widget);
        strategy1_add->setObjectName(QStringLiteral("strategy1_add"));
        strategy1_add->setGeometry(QRect(130, 0, 51, 22));
        strategy1_add->setFrame(false);
        strategy1_add->setMaximum(5000);
        strategy1_add->setSingleStep(100);
        strategy1_add->setValue(100);
        strategy1_presec = new QSpinBox(stragety1widget);
        strategy1_presec->setObjectName(QStringLiteral("strategy1_presec"));
        strategy1_presec->setGeometry(QRect(230, 0, 41, 22));
        strategy1_presec->setFrame(false);
        strategy1_presec->setMaximum(59);
        strategy1_presec->setValue(5);
        strategy1_preprice = new QSpinBox(stragety1widget);
        strategy1_preprice->setObjectName(QStringLiteral("strategy1_preprice"));
        strategy1_preprice->setGeometry(QRect(304, 0, 51, 22));
        strategy1_preprice->setFrame(false);
        strategy1_preprice->setMaximum(5000);
        strategy1_preprice->setSingleStep(100);
        strategy1_preprice->setValue(100);
        textBrowser = new QTextBrowser(stragety1widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 501, 22));
        textBrowser->setMaximumSize(QSize(16777215, 22));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        strategy1_value = new QTextBrowser(stragety1widget);
        strategy1_value->setObjectName(QStringLiteral("strategy1_value"));
        strategy1_value->setGeometry(QRect(443, 0, 40, 21));
        strategy1_value->setFrameShape(QFrame::NoFrame);
        strategy1_value->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->raise();
        strategy1_hour->raise();
        strategy1_min->raise();
        strategy1_sec->raise();
        strategy1_add->raise();
        strategy1_presec->raise();
        strategy1_preprice->raise();
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
        strategy2_min = new QSpinBox(stragety2widget);
        strategy2_min->setObjectName(QStringLiteral("strategy2_min"));
        strategy2_min->setGeometry(QRect(40, 0, 31, 22));
        strategy2_min->setFrame(false);
        strategy2_min->setMaximum(30);
        strategy2_min->setValue(29);
        strategy2_sec = new QSpinBox(stragety2widget);
        strategy2_sec->setObjectName(QStringLiteral("strategy2_sec"));
        strategy2_sec->setGeometry(QRect(80, 0, 31, 22));
        strategy2_sec->setFrame(false);
        strategy2_sec->setMaximum(59);
        strategy2_sec->setValue(30);
        strategy2_add = new QSpinBox(stragety2widget);
        strategy2_add->setObjectName(QStringLiteral("strategy2_add"));
        strategy2_add->setGeometry(QRect(130, 0, 51, 22));
        strategy2_add->setFrame(false);
        strategy2_add->setMaximum(5000);
        strategy2_add->setSingleStep(100);
        strategy2_add->setValue(100);
        strategy2_presec = new QSpinBox(stragety2widget);
        strategy2_presec->setObjectName(QStringLiteral("strategy2_presec"));
        strategy2_presec->setGeometry(QRect(230, 0, 41, 22));
        strategy2_presec->setFrame(false);
        strategy2_presec->setMaximum(59);
        strategy2_presec->setValue(5);
        strategy2_preprice = new QSpinBox(stragety2widget);
        strategy2_preprice->setObjectName(QStringLiteral("strategy2_preprice"));
        strategy2_preprice->setGeometry(QRect(304, 0, 51, 22));
        strategy2_preprice->setFrame(false);
        strategy2_preprice->setMaximum(5000);
        strategy2_preprice->setSingleStep(100);
        strategy2_preprice->setValue(100);
        textBrowser_2 = new QTextBrowser(stragety2widget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 501, 22));
        textBrowser_2->setMaximumSize(QSize(16777215, 22));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        strategy2_value = new QTextBrowser(stragety2widget);
        strategy2_value->setObjectName(QStringLiteral("strategy2_value"));
        strategy2_value->setGeometry(QRect(443, 0, 40, 21));
        strategy2_value->setFrameShape(QFrame::NoFrame);
        strategy2_value->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_2->raise();
        strategy2_hour->raise();
        strategy2_min->raise();
        strategy2_sec->raise();
        strategy2_add->raise();
        strategy2_presec->raise();
        strategy2_preprice->raise();
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
        strategy3_min = new QSpinBox(stragety3widget);
        strategy3_min->setObjectName(QStringLiteral("strategy3_min"));
        strategy3_min->setGeometry(QRect(40, 0, 31, 22));
        strategy3_min->setFrame(false);
        strategy3_min->setMaximum(30);
        strategy3_min->setValue(29);
        strategy3_sec = new QSpinBox(stragety3widget);
        strategy3_sec->setObjectName(QStringLiteral("strategy3_sec"));
        strategy3_sec->setGeometry(QRect(80, 0, 31, 22));
        strategy3_sec->setFrame(false);
        strategy3_sec->setMaximum(59);
        strategy3_sec->setValue(30);
        strategy3_add = new QSpinBox(stragety3widget);
        strategy3_add->setObjectName(QStringLiteral("strategy3_add"));
        strategy3_add->setGeometry(QRect(130, 0, 51, 22));
        strategy3_add->setFrame(false);
        strategy3_add->setMaximum(5000);
        strategy3_add->setSingleStep(100);
        strategy3_add->setValue(100);
        strategy3_presec = new QSpinBox(stragety3widget);
        strategy3_presec->setObjectName(QStringLiteral("strategy3_presec"));
        strategy3_presec->setGeometry(QRect(230, 0, 41, 22));
        strategy3_presec->setFrame(false);
        strategy3_presec->setMaximum(59);
        strategy3_presec->setValue(5);
        strategy3_preprice = new QSpinBox(stragety3widget);
        strategy3_preprice->setObjectName(QStringLiteral("strategy3_preprice"));
        strategy3_preprice->setGeometry(QRect(304, 0, 51, 22));
        strategy3_preprice->setFrame(false);
        strategy3_preprice->setMaximum(5000);
        strategy3_preprice->setSingleStep(100);
        strategy3_preprice->setValue(100);
        textBrowser_3 = new QTextBrowser(stragety3widget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 501, 22));
        textBrowser_3->setMaximumSize(QSize(16777215, 22));
        textBrowser_3->setFrameShape(QFrame::NoFrame);
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        strategy3_value = new QTextBrowser(stragety3widget);
        strategy3_value->setObjectName(QStringLiteral("strategy3_value"));
        strategy3_value->setGeometry(QRect(443, 0, 40, 21));
        strategy3_value->setFrameShape(QFrame::NoFrame);
        strategy3_value->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3->raise();
        strategy3_hour->raise();
        strategy3_min->raise();
        strategy3_sec->raise();
        strategy3_add->raise();
        strategy3_presec->raise();
        strategy3_preprice->raise();
        strategy3_value->raise();

        verticalLayout_2->addWidget(stragety3widget);


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
        currentPrice->setGeometry(QRect(10, 84, 460, 31));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(currentPrice->sizePolicy().hasHeightForWidth());
        currentPrice->setSizePolicy(sizePolicy2);
        currentPrice->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        currentPrice->setFont(font1);
        currentPrice->setFrameShape(QFrame::NoFrame);
        gvPrice = new QGraphicsView(pricePanel);
        gvPrice->setObjectName(QStringLiteral("gvPrice"));
        gvPrice->setGeometry(QRect(10, 119, 460, 60));
        gvPrice->setSceneRect(QRectF(0, 0, 70, 20));
        sbPriceMouseX = new QSpinBox(pricePanel);
        sbPriceMouseX->setObjectName(QStringLiteral("sbPriceMouseX"));
        sbPriceMouseX->setGeometry(QRect(120, 50, 42, 22));
        sbPriceMouseX->setMaximum(1000);
        sbPriceMouseX->setValue(282);
        sbPriceMouseY = new QSpinBox(pricePanel);
        sbPriceMouseY->setObjectName(QStringLiteral("sbPriceMouseY"));
        sbPriceMouseY->setGeometry(QRect(180, 50, 42, 22));
        sbPriceMouseY->setMaximum(1000);
        sbPriceMouseY->setValue(438);
        textBrowser_7 = new QTextBrowser(pricePanel);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(10, 50, 241, 35));
        textBrowser_7->setFrameShape(QFrame::NoFrame);
        textBrowser_7->raise();
        textBrowser_4->raise();
        currentPrice->raise();
        gvPrice->raise();
        sbPriceMouseX->raise();
        sbPriceMouseY->raise();

        verticalLayout->addWidget(pricePanel);

        timePanel = new QWidget(verticalLayoutWidget);
        timePanel->setObjectName(QStringLiteral("timePanel"));
        textBrowser_5 = new QTextBrowser(timePanel);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(0, 0, 485, 35));
        sizePolicy2.setHeightForWidth(textBrowser_5->sizePolicy().hasHeightForWidth());
        textBrowser_5->setSizePolicy(sizePolicy2);
        textBrowser_5->setMaximumSize(QSize(16777215, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        textBrowser_5->setFont(font2);
        textBrowser_5->setFrameShape(QFrame::NoFrame);
        currentTime = new QTextBrowser(timePanel);
        currentTime->setObjectName(QStringLiteral("currentTime"));
        currentTime->setGeometry(QRect(0, 80, 485, 41));
        currentTime->setFont(font1);
        currentTime->setFrameShape(QFrame::NoFrame);
        gvTime = new QGraphicsView(timePanel);
        gvTime->setObjectName(QStringLiteral("gvTime"));
        gvTime->setGeometry(QRect(10, 120, 460, 60));
        textBrowser_8 = new QTextBrowser(timePanel);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(10, 40, 241, 35));
        textBrowser_8->setFrameShape(QFrame::NoFrame);
        sbTimeMouseY = new QSpinBox(timePanel);
        sbTimeMouseY->setObjectName(QStringLiteral("sbTimeMouseY"));
        sbTimeMouseY->setGeometry(QRect(180, 40, 42, 22));
        sbTimeMouseY->setMaximum(1000);
        sbTimeMouseY->setValue(394);
        sbTimeMouseX = new QSpinBox(timePanel);
        sbTimeMouseX->setObjectName(QStringLiteral("sbTimeMouseX"));
        sbTimeMouseX->setGeometry(QRect(120, 40, 42, 22));
        sbTimeMouseX->setMaximum(1000);
        sbTimeMouseX->setValue(128);

        verticalLayout->addWidget(timePanel);

        mousePanel = new QWidget(verticalLayoutWidget);
        mousePanel->setObjectName(QStringLiteral("mousePanel"));
        textBrowser_6 = new QTextBrowser(mousePanel);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 0, 485, 35));
        QFont font3;
        font3.setPointSize(14);
        textBrowser_6->setFont(font3);
        textBrowser_6->setFrameShape(QFrame::NoFrame);
        gvMouse = new QGraphicsView(mousePanel);
        gvMouse->setObjectName(QStringLiteral("gvMouse"));
        gvMouse->setGeometry(QRect(20, 100, 460, 60));
        sbEnterMouseY = new QSpinBox(mousePanel);
        sbEnterMouseY->setObjectName(QStringLiteral("sbEnterMouseY"));
        sbEnterMouseY->setGeometry(QRect(190, 50, 42, 22));
        sbEnterMouseY->setMaximum(1000);
        sbEnterMouseY->setValue(501);
        sbEnterMouseX = new QSpinBox(mousePanel);
        sbEnterMouseX->setObjectName(QStringLiteral("sbEnterMouseX"));
        sbEnterMouseX->setGeometry(QRect(130, 50, 42, 22));
        sbEnterMouseX->setMaximum(1000);
        sbEnterMouseX->setValue(555);
        textBrowser_9 = new QTextBrowser(mousePanel);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(20, 50, 241, 35));
        textBrowser_9->setFrameShape(QFrame::NoFrame);
        textBrowser_9->raise();
        textBrowser_6->raise();
        gvMouse->raise();
        sbEnterMouseY->raise();
        sbEnterMouseX->raise();

        verticalLayout->addWidget(mousePanel);

        layoutWidget = new QWidget(horizontalWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 1, 911, 751));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">       \357\274\232        \357\274\232          +               \345\205\203 \346\217\220\345\211\215            \347\247\222\346\210\226              \345\205\203 \350\257\245\347\255\226\347\225\245\345\207\272\344\273\267</span></p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">       \357\274\232        \357\274\232          +               \345\205\203 \346\217\220\345\211\215            \347\247\222\346\210\226              \345\205\203 \350\257\245\347\255\226\347\225\245\345\207\272\344\273\267</span></p></body></html>", 0));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">       \357\274\232        \357\274\232          +               \345\205\203 \346\217\220\345\211\215            \347\247\222\346\210\226              \345\205\203 \350\257\245\347\255\226\347\225\245\345\207\272\344\273\267</span></p></body></html>", 0));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:600;\">\345\275\223\345\211\215\346\210\220\344\272\244\344\273\267</span></p></body></html>", 0));
        currentPrice->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>", 0));
        textBrowser_7->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\346\240\207\345\256\232\345\267\246\344\270\212\350\247\222(x,y)=(            ,             )</span></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">\345\275\223\345\211\215\346\227\266\351\227\264</span></p></body></html>", 0));
        currentTime->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", 0));
        textBrowser_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\346\240\207\345\256\232\345\267\246\344\270\212\350\247\222(x,y)=(            ,             )</span></p></body></html>", 0));
        textBrowser_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\346\240\207\345\256\232\351\274\240\346\240\207</span></p></body></html>", 0));
        textBrowser_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\346\240\207\345\256\232\345\267\246\344\270\212\350\247\222(x,y)=(            ,             )</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
