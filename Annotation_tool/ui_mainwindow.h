/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTableWidget *Images_table;
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_6;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QTableWidget *Images_table_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QTextEdit *textEdit_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QGroupBox *groupBox_4;
    QLabel *label_4;
    QSplitter *splitter;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QSplitter *splitter_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1464, 734);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 417, 261));
        Images_table = new QTableWidget(groupBox);
        if (Images_table->columnCount() < 2)
            Images_table->setColumnCount(2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(198, 198, 198));
        Images_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setBackground(QColor(198, 198, 198));
        __qtablewidgetitem1->setForeground(brush);
        Images_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (Images_table->rowCount() < 10)
            Images_table->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        Images_table->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Images_table->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Images_table->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        Images_table->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        Images_table->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        Images_table->setItem(2, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        Images_table->setItem(2, 1, __qtablewidgetitem17);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFont(font1);
        Images_table->setItem(3, 0, __qtablewidgetitem18);
        Images_table->setObjectName(QString::fromUtf8("Images_table"));
        Images_table->setEnabled(true);
        Images_table->setGeometry(QRect(10, 10, 397, 171));
        Images_table->setMinimumSize(QSize(397, 0));
        Images_table->setMaximumSize(QSize(397, 16777215));
        Images_table->setTabletTracking(false);
        Images_table->setFocusPolicy(Qt::StrongFocus);
        Images_table->setContextMenuPolicy(Qt::DefaultContextMenu);
        Images_table->setLayoutDirection(Qt::LeftToRight);
        Images_table->setAutoFillBackground(false);
        Images_table->setFrameShape(QFrame::StyledPanel);
        Images_table->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Images_table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        Images_table->setAlternatingRowColors(false);
        Images_table->setShowGrid(true);
        Images_table->setGridStyle(Qt::NoPen);
        Images_table->setSortingEnabled(true);
        Images_table->setWordWrap(true);
        Images_table->setCornerButtonEnabled(true);
        Images_table->setRowCount(10);
        Images_table->horizontalHeader()->setVisible(true);
        Images_table->horizontalHeader()->setCascadingSectionResizes(false);
        Images_table->horizontalHeader()->setDefaultSectionSize(100);
        Images_table->horizontalHeader()->setHighlightSections(false);
        Images_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Images_table->horizontalHeader()->setStretchLastSection(false);
        Images_table->verticalHeader()->setVisible(false);
        Images_table->verticalHeader()->setDefaultSectionSize(30);
        Images_table->verticalHeader()->setHighlightSections(false);
        Images_table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        Images_table->verticalHeader()->setStretchLastSection(false);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 190, 401, 23));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 220, 391, 31));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textEdit);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 10, 121, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 101, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 300, 101, 16));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 320, 417, 271));
        Images_table_2 = new QTableWidget(groupBox_3);
        if (Images_table_2->columnCount() < 1)
            Images_table_2->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFont(font);
        __qtablewidgetitem19->setBackground(QColor(198, 198, 198));
        Images_table_2->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        if (Images_table_2->rowCount() < 10)
            Images_table_2->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(8, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        Images_table_2->setVerticalHeaderItem(9, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        Images_table_2->setItem(0, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        Images_table_2->setItem(1, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        Images_table_2->setItem(2, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFont(font1);
        Images_table_2->setItem(3, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        Images_table_2->setItem(4, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        Images_table_2->setItem(5, 0, __qtablewidgetitem35);
        Images_table_2->setObjectName(QString::fromUtf8("Images_table_2"));
        Images_table_2->setEnabled(true);
        Images_table_2->setGeometry(QRect(10, 10, 397, 181));
        Images_table_2->setMinimumSize(QSize(397, 0));
        Images_table_2->setMaximumSize(QSize(397, 16777215));
        Images_table_2->setTabletTracking(false);
        Images_table_2->setFocusPolicy(Qt::StrongFocus);
        Images_table_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        Images_table_2->setLayoutDirection(Qt::LeftToRight);
        Images_table_2->setAutoFillBackground(false);
        Images_table_2->setFrameShape(QFrame::StyledPanel);
        Images_table_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        Images_table_2->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        Images_table_2->setAlternatingRowColors(false);
        Images_table_2->setShowGrid(true);
        Images_table_2->setGridStyle(Qt::NoPen);
        Images_table_2->setSortingEnabled(true);
        Images_table_2->setWordWrap(true);
        Images_table_2->setCornerButtonEnabled(true);
        Images_table_2->setRowCount(10);
        Images_table_2->horizontalHeader()->setVisible(true);
        Images_table_2->horizontalHeader()->setCascadingSectionResizes(false);
        Images_table_2->horizontalHeader()->setDefaultSectionSize(100);
        Images_table_2->horizontalHeader()->setHighlightSections(false);
        Images_table_2->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Images_table_2->horizontalHeader()->setStretchLastSection(false);
        Images_table_2->verticalHeader()->setVisible(false);
        Images_table_2->verticalHeader()->setDefaultSectionSize(30);
        Images_table_2->verticalHeader()->setHighlightSections(false);
        Images_table_2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        Images_table_2->verticalHeader()->setStretchLastSection(false);
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 240, 401, 31));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, textEdit_2);

        widget1 = new QWidget(groupBox_3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(12, 202, 391, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(460, 50, 771, 551));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(450, 40, 791, 571));
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(1270, 490, 151, 121));
        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(1270, 360, 151, 121));
        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(1270, 230, 151, 121));
        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(1270, 100, 151, 121));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(1250, 70, 191, 561));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1300, 40, 101, 16));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(450, 640, 375, 23));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_8 = new QPushButton(splitter);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        splitter->addWidget(pushButton_8);
        pushButton_9 = new QPushButton(splitter);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        splitter->addWidget(pushButton_9);
        pushButton_7 = new QPushButton(splitter);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        splitter->addWidget(pushButton_7);
        pushButton_10 = new QPushButton(splitter);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        splitter->addWidget(pushButton_10);
        pushButton_11 = new QPushButton(splitter);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        splitter->addWidget(pushButton_11);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(1060, 640, 150, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_12 = new QPushButton(splitter_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        splitter_2->addWidget(pushButton_12);
        pushButton_13 = new QPushButton(splitter_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        splitter_2->addWidget(pushButton_13);
        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(70, 640, 331, 25));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        MainWindow->setCentralWidget(centralwidget);
        groupBox_3->raise();
        groupBox->raise();
        layoutWidget->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        graphicsView->raise();
        groupBox_2->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        pushButton_12->raise();
        pushButton_13->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_17->raise();
        pushButton_18->raise();
        pushButton_19->raise();
        pushButton_20->raise();
        groupBox_4->raise();
        label_4->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1464, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = Images_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Image Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Images_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Image Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Images_table->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Images_table->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Images_table->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Images_table->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Images_table->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Images_table->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Images_table->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Images_table->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = Images_table->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = Images_table->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));

        const bool __sortingEnabled = Images_table->isSortingEnabled();
        Images_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = Images_table->item(0, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Holiday on Bahamas", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = Images_table->item(0, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "2020", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = Images_table->item(1, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "School trip", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = Images_table->item(1, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "2019", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = Images_table->item(2, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Accidental Fall", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = Images_table->item(2, 1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "2030", nullptr));
        Images_table->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("MainWindow", "Load Images", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Search:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Image in use", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Loaded Images", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Loaded Classes", nullptr));
        groupBox_3->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem18 = Images_table_2->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Class Names", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = Images_table_2->verticalHeaderItem(0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = Images_table_2->verticalHeaderItem(1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = Images_table_2->verticalHeaderItem(2);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = Images_table_2->verticalHeaderItem(3);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = Images_table_2->verticalHeaderItem(4);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = Images_table_2->verticalHeaderItem(5);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = Images_table_2->verticalHeaderItem(6);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = Images_table_2->verticalHeaderItem(7);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = Images_table_2->verticalHeaderItem(8);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = Images_table_2->verticalHeaderItem(9);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "New Row", nullptr));

        const bool __sortingEnabled1 = Images_table_2->isSortingEnabled();
        Images_table_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem29 = Images_table_2->item(0, 0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "Car", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = Images_table_2->item(1, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "Person", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = Images_table_2->item(2, 0);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "Sexy Babe", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = Images_table_2->item(3, 0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "Lingerie", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = Images_table_2->item(4, 0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "Madness", nullptr));
        Images_table_2->setSortingEnabled(__sortingEnabled1);

        label_7->setText(QCoreApplication::translate("MainWindow", "Search:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Add a Class", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Delete a Class", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Load Classes", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Polygon", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "Trapezium", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        groupBox_4->setTitle(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Annotation Forms", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Load Annotations", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Save Annotations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
