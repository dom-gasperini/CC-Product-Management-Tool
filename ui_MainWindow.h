/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDark_Mode;
    QAction *actionAbout;
    QAction *actionSelect_Database;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *productClassLbl;
    QComboBox *productClassCmbx;
    QLabel *productTyepLbl;
    QComboBox *productTypeCmbx;
    QLabel *productStatusLbl;
    QComboBox *productStatusCmbx;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *buildDateLbl;
    QDateTimeEdit *buildDateDTBx;
    QLabel *inventoryDateLbl;
    QDateTimeEdit *inventoryDateDTBx;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QSpinBox *serialNumberSbx;
    QLabel *serialNumberLbl;
    QLabel *articleNumberLbl;
    QLabel *productRevisionLbl;
    QLineEdit *locationBx;
    QLineEdit *articleLineBx;
    QTextEdit *commentsTbx;
    QLabel *locationLbl;
    QLineEdit *productVariantBx;
    QLineEdit *accountLineBx;
    QSpacerItem *horizontalSpacer;
    QLabel *commentsLbl;
    QLabel *productVarientLbl;
    QDoubleSpinBox *productRevisionSbx;
    QLabel *accountLbl;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_4;
    QLabel *productImageLbl;
    QGroupBox *groupBox_5;
    QPushButton *addProductBtn;
    QPushButton *clearBtn;
    QWidget *tab_2;
    QWidget *tab_3;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *buildDateLbl_2;
    QLabel *lastUpdateLbl_2;
    QDateTimeEdit *lastUpdatedDTBx_2;
    QLabel *daysSinceLastUpdateLbl_2;
    QSpinBox *daysSinceLastUpdateSbx_2;
    QDateTimeEdit *buildDateDTBx_2;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_5;
    QLabel *productClassLbl_2;
    QComboBox *comboBox_4;
    QLabel *productTyepLbl_2;
    QComboBox *comboBox_5;
    QLabel *productStatusLbl_2;
    QComboBox *comboBox_6;
    QGroupBox *groupBox_8;
    QLabel *productImageLbl_2;
    QGroupBox *groupBox_9;
    QPushButton *searchBtn;
    QPushButton *clearSearchBtn;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_6;
    QSpinBox *serialNumberSbx_2;
    QLabel *serialNumberLbl_2;
    QLabel *articleNumberLbl_2;
    QLabel *productRevisionLbl_2;
    QLineEdit *locationBx_2;
    QLineEdit *articleLineBx_2;
    QTextEdit *commentsTbx_2;
    QLabel *locationLbl_2;
    QLineEdit *productVariantBx_2;
    QLineEdit *accountLineBx_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *commentsLbl_2;
    QLabel *productVarientLbl_2;
    QDoubleSpinBox *productRevisionSbx_2;
    QLabel *accountLbl_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_4;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(812, 615);
        actionDark_Mode = new QAction(MainWindow);
        actionDark_Mode->setObjectName(QString::fromUtf8("actionDark_Mode"));
        actionDark_Mode->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSelect_Database = new QAction(MainWindow);
        actionSelect_Database->setObjectName(QString::fromUtf8("actionSelect_Database"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 781, 561));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 251, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 231, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        productClassLbl = new QLabel(layoutWidget);
        productClassLbl->setObjectName(QString::fromUtf8("productClassLbl"));

        gridLayout->addWidget(productClassLbl, 0, 0, 1, 1);

        productClassCmbx = new QComboBox(layoutWidget);
        productClassCmbx->addItem(QString());
        productClassCmbx->addItem(QString());
        productClassCmbx->setObjectName(QString::fromUtf8("productClassCmbx"));

        gridLayout->addWidget(productClassCmbx, 0, 1, 1, 1);

        productTyepLbl = new QLabel(layoutWidget);
        productTyepLbl->setObjectName(QString::fromUtf8("productTyepLbl"));

        gridLayout->addWidget(productTyepLbl, 1, 0, 1, 1);

        productTypeCmbx = new QComboBox(layoutWidget);
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->addItem(QString());
        productTypeCmbx->setObjectName(QString::fromUtf8("productTypeCmbx"));

        gridLayout->addWidget(productTypeCmbx, 1, 1, 1, 1);

        productStatusLbl = new QLabel(layoutWidget);
        productStatusLbl->setObjectName(QString::fromUtf8("productStatusLbl"));

        gridLayout->addWidget(productStatusLbl, 2, 0, 1, 1);

        productStatusCmbx = new QComboBox(layoutWidget);
        productStatusCmbx->addItem(QString());
        productStatusCmbx->addItem(QString());
        productStatusCmbx->addItem(QString());
        productStatusCmbx->setObjectName(QString::fromUtf8("productStatusCmbx"));

        gridLayout->addWidget(productStatusCmbx, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab_1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 10, 271, 151));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 251, 121));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        buildDateLbl = new QLabel(widget);
        buildDateLbl->setObjectName(QString::fromUtf8("buildDateLbl"));

        gridLayout_2->addWidget(buildDateLbl, 0, 0, 1, 1);

        buildDateDTBx = new QDateTimeEdit(widget);
        buildDateDTBx->setObjectName(QString::fromUtf8("buildDateDTBx"));

        gridLayout_2->addWidget(buildDateDTBx, 0, 1, 1, 2);

        inventoryDateLbl = new QLabel(widget);
        inventoryDateLbl->setObjectName(QString::fromUtf8("inventoryDateLbl"));

        gridLayout_2->addWidget(inventoryDateLbl, 1, 0, 1, 2);

        inventoryDateDTBx = new QDateTimeEdit(widget);
        inventoryDateDTBx->setObjectName(QString::fromUtf8("inventoryDateDTBx"));
        inventoryDateDTBx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(inventoryDateDTBx, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(tab_1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 170, 381, 351));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 361, 321));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        serialNumberSbx = new QSpinBox(layoutWidget1);
        serialNumberSbx->setObjectName(QString::fromUtf8("serialNumberSbx"));
        serialNumberSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serialNumberSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_3->addWidget(serialNumberSbx, 0, 1, 1, 1);

        serialNumberLbl = new QLabel(layoutWidget1);
        serialNumberLbl->setObjectName(QString::fromUtf8("serialNumberLbl"));

        gridLayout_3->addWidget(serialNumberLbl, 0, 0, 1, 1);

        articleNumberLbl = new QLabel(layoutWidget1);
        articleNumberLbl->setObjectName(QString::fromUtf8("articleNumberLbl"));

        gridLayout_3->addWidget(articleNumberLbl, 4, 0, 1, 1);

        productRevisionLbl = new QLabel(layoutWidget1);
        productRevisionLbl->setObjectName(QString::fromUtf8("productRevisionLbl"));

        gridLayout_3->addWidget(productRevisionLbl, 1, 0, 1, 1);

        locationBx = new QLineEdit(layoutWidget1);
        locationBx->setObjectName(QString::fromUtf8("locationBx"));
        locationBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(locationBx, 5, 1, 1, 1);

        articleLineBx = new QLineEdit(layoutWidget1);
        articleLineBx->setObjectName(QString::fromUtf8("articleLineBx"));
        articleLineBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(articleLineBx, 4, 1, 1, 1);

        commentsTbx = new QTextEdit(layoutWidget1);
        commentsTbx->setObjectName(QString::fromUtf8("commentsTbx"));
        commentsTbx->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(commentsTbx, 8, 0, 1, 2);

        locationLbl = new QLabel(layoutWidget1);
        locationLbl->setObjectName(QString::fromUtf8("locationLbl"));

        gridLayout_3->addWidget(locationLbl, 5, 0, 1, 1);

        productVariantBx = new QLineEdit(layoutWidget1);
        productVariantBx->setObjectName(QString::fromUtf8("productVariantBx"));
        productVariantBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(productVariantBx, 3, 1, 1, 1);

        accountLineBx = new QLineEdit(layoutWidget1);
        accountLineBx->setObjectName(QString::fromUtf8("accountLineBx"));
        accountLineBx->setMaximumSize(QSize(75, 16777215));

        gridLayout_3->addWidget(accountLineBx, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 7, 1, 1, 1);

        commentsLbl = new QLabel(layoutWidget1);
        commentsLbl->setObjectName(QString::fromUtf8("commentsLbl"));
        commentsLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(commentsLbl, 7, 0, 1, 1);

        productVarientLbl = new QLabel(layoutWidget1);
        productVarientLbl->setObjectName(QString::fromUtf8("productVarientLbl"));

        gridLayout_3->addWidget(productVarientLbl, 3, 0, 1, 1);

        productRevisionSbx = new QDoubleSpinBox(layoutWidget1);
        productRevisionSbx->setObjectName(QString::fromUtf8("productRevisionSbx"));
        productRevisionSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        productRevisionSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionSbx->setDecimals(1);

        gridLayout_3->addWidget(productRevisionSbx, 1, 1, 1, 1);

        accountLbl = new QLabel(layoutWidget1);
        accountLbl->setObjectName(QString::fromUtf8("accountLbl"));

        gridLayout_3->addWidget(accountLbl, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 6, 1, 1, 1);

        groupBox_4 = new QGroupBox(tab_1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(410, 170, 350, 350));
        groupBox_4->setMinimumSize(QSize(350, 350));
        groupBox_4->setMaximumSize(QSize(350, 350));
        productImageLbl = new QLabel(groupBox_4);
        productImageLbl->setObjectName(QString::fromUtf8("productImageLbl"));
        productImageLbl->setGeometry(QRect(120, 180, 111, 16));
        groupBox_5 = new QGroupBox(tab_1);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(570, 10, 191, 151));
        addProductBtn = new QPushButton(groupBox_5);
        addProductBtn->setObjectName(QString::fromUtf8("addProductBtn"));
        addProductBtn->setGeometry(QRect(10, 30, 171, 41));
        clearBtn = new QPushButton(groupBox_5);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        clearBtn->setGeometry(QRect(10, 100, 171, 41));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(280, 10, 251, 151));
        layoutWidget_2 = new QWidget(groupBox_6);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(11, 30, 238, 111));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        buildDateLbl_2 = new QLabel(layoutWidget_2);
        buildDateLbl_2->setObjectName(QString::fromUtf8("buildDateLbl_2"));

        gridLayout_4->addWidget(buildDateLbl_2, 0, 0, 1, 1);

        lastUpdateLbl_2 = new QLabel(layoutWidget_2);
        lastUpdateLbl_2->setObjectName(QString::fromUtf8("lastUpdateLbl_2"));

        gridLayout_4->addWidget(lastUpdateLbl_2, 1, 0, 1, 2);

        lastUpdatedDTBx_2 = new QDateTimeEdit(layoutWidget_2);
        lastUpdatedDTBx_2->setObjectName(QString::fromUtf8("lastUpdatedDTBx_2"));
        lastUpdatedDTBx_2->setReadOnly(true);
        lastUpdatedDTBx_2->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(lastUpdatedDTBx_2, 1, 2, 1, 2);

        daysSinceLastUpdateLbl_2 = new QLabel(layoutWidget_2);
        daysSinceLastUpdateLbl_2->setObjectName(QString::fromUtf8("daysSinceLastUpdateLbl_2"));

        gridLayout_4->addWidget(daysSinceLastUpdateLbl_2, 2, 0, 1, 3);

        daysSinceLastUpdateSbx_2 = new QSpinBox(layoutWidget_2);
        daysSinceLastUpdateSbx_2->setObjectName(QString::fromUtf8("daysSinceLastUpdateSbx_2"));
        daysSinceLastUpdateSbx_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        daysSinceLastUpdateSbx_2->setReadOnly(true);
        daysSinceLastUpdateSbx_2->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(daysSinceLastUpdateSbx_2, 2, 3, 1, 1);

        buildDateDTBx_2 = new QDateTimeEdit(layoutWidget_2);
        buildDateDTBx_2->setObjectName(QString::fromUtf8("buildDateDTBx_2"));

        gridLayout_4->addWidget(buildDateDTBx_2, 0, 1, 1, 3);

        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 251, 151));
        layoutWidget_3 = new QWidget(groupBox_7);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 231, 121));
        gridLayout_5 = new QGridLayout(layoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        productClassLbl_2 = new QLabel(layoutWidget_3);
        productClassLbl_2->setObjectName(QString::fromUtf8("productClassLbl_2"));

        gridLayout_5->addWidget(productClassLbl_2, 0, 0, 1, 1);

        comboBox_4 = new QComboBox(layoutWidget_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_5->addWidget(comboBox_4, 0, 1, 1, 1);

        productTyepLbl_2 = new QLabel(layoutWidget_3);
        productTyepLbl_2->setObjectName(QString::fromUtf8("productTyepLbl_2"));

        gridLayout_5->addWidget(productTyepLbl_2, 1, 0, 1, 1);

        comboBox_5 = new QComboBox(layoutWidget_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_5->addWidget(comboBox_5, 1, 1, 1, 1);

        productStatusLbl_2 = new QLabel(layoutWidget_3);
        productStatusLbl_2->setObjectName(QString::fromUtf8("productStatusLbl_2"));

        gridLayout_5->addWidget(productStatusLbl_2, 2, 0, 1, 1);

        comboBox_6 = new QComboBox(layoutWidget_3);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_5->addWidget(comboBox_6, 2, 1, 1, 1);

        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(410, 170, 350, 350));
        groupBox_8->setMinimumSize(QSize(350, 350));
        groupBox_8->setMaximumSize(QSize(350, 350));
        productImageLbl_2 = new QLabel(groupBox_8);
        productImageLbl_2->setObjectName(QString::fromUtf8("productImageLbl_2"));
        productImageLbl_2->setGeometry(QRect(120, 180, 111, 16));
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(550, 10, 211, 151));
        searchBtn = new QPushButton(groupBox_9);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(10, 30, 191, 41));
        clearSearchBtn = new QPushButton(groupBox_9);
        clearSearchBtn->setObjectName(QString::fromUtf8("clearSearchBtn"));
        clearSearchBtn->setGeometry(QRect(10, 100, 191, 41));
        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 170, 381, 351));
        layoutWidget_4 = new QWidget(groupBox_10);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 361, 321));
        gridLayout_6 = new QGridLayout(layoutWidget_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        serialNumberSbx_2 = new QSpinBox(layoutWidget_4);
        serialNumberSbx_2->setObjectName(QString::fromUtf8("serialNumberSbx_2"));
        serialNumberSbx_2->setMaximumSize(QSize(75, 16777215));
        serialNumberSbx_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serialNumberSbx_2->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_6->addWidget(serialNumberSbx_2, 0, 1, 1, 1);

        serialNumberLbl_2 = new QLabel(layoutWidget_4);
        serialNumberLbl_2->setObjectName(QString::fromUtf8("serialNumberLbl_2"));

        gridLayout_6->addWidget(serialNumberLbl_2, 0, 0, 1, 1);

        articleNumberLbl_2 = new QLabel(layoutWidget_4);
        articleNumberLbl_2->setObjectName(QString::fromUtf8("articleNumberLbl_2"));

        gridLayout_6->addWidget(articleNumberLbl_2, 4, 0, 1, 1);

        productRevisionLbl_2 = new QLabel(layoutWidget_4);
        productRevisionLbl_2->setObjectName(QString::fromUtf8("productRevisionLbl_2"));

        gridLayout_6->addWidget(productRevisionLbl_2, 1, 0, 1, 1);

        locationBx_2 = new QLineEdit(layoutWidget_4);
        locationBx_2->setObjectName(QString::fromUtf8("locationBx_2"));
        locationBx_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(locationBx_2, 5, 1, 1, 1);

        articleLineBx_2 = new QLineEdit(layoutWidget_4);
        articleLineBx_2->setObjectName(QString::fromUtf8("articleLineBx_2"));
        articleLineBx_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(articleLineBx_2, 4, 1, 1, 1);

        commentsTbx_2 = new QTextEdit(layoutWidget_4);
        commentsTbx_2->setObjectName(QString::fromUtf8("commentsTbx_2"));
        commentsTbx_2->setMaximumSize(QSize(16777215, 100));

        gridLayout_6->addWidget(commentsTbx_2, 8, 0, 1, 2);

        locationLbl_2 = new QLabel(layoutWidget_4);
        locationLbl_2->setObjectName(QString::fromUtf8("locationLbl_2"));

        gridLayout_6->addWidget(locationLbl_2, 5, 0, 1, 1);

        productVariantBx_2 = new QLineEdit(layoutWidget_4);
        productVariantBx_2->setObjectName(QString::fromUtf8("productVariantBx_2"));
        productVariantBx_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(productVariantBx_2, 3, 1, 1, 1);

        accountLineBx_2 = new QLineEdit(layoutWidget_4);
        accountLineBx_2->setObjectName(QString::fromUtf8("accountLineBx_2"));
        accountLineBx_2->setMaximumSize(QSize(75, 16777215));

        gridLayout_6->addWidget(accountLineBx_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 7, 1, 1, 1);

        commentsLbl_2 = new QLabel(layoutWidget_4);
        commentsLbl_2->setObjectName(QString::fromUtf8("commentsLbl_2"));
        commentsLbl_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_6->addWidget(commentsLbl_2, 7, 0, 1, 1);

        productVarientLbl_2 = new QLabel(layoutWidget_4);
        productVarientLbl_2->setObjectName(QString::fromUtf8("productVarientLbl_2"));

        gridLayout_6->addWidget(productVarientLbl_2, 3, 0, 1, 1);

        productRevisionSbx_2 = new QDoubleSpinBox(layoutWidget_4);
        productRevisionSbx_2->setObjectName(QString::fromUtf8("productRevisionSbx_2"));
        productRevisionSbx_2->setMaximumSize(QSize(75, 16777215));
        productRevisionSbx_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        productRevisionSbx_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionSbx_2->setDecimals(1);

        gridLayout_6->addWidget(productRevisionSbx_2, 1, 1, 1, 1);

        accountLbl_2 = new QLabel(layoutWidget_4);
        accountLbl_2->setObjectName(QString::fromUtf8("accountLbl_2"));

        gridLayout_6->addWidget(accountLbl_2, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 6, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 812, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionDark_Mode);
        menuOptions->addSeparator();
        menuOptions->addAction(actionAbout);
        menuOptions->addAction(actionSelect_Database);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDark_Mode->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionSelect_Database->setText(QCoreApplication::translate("MainWindow", "Select Database", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "General Information", nullptr));
        productClassLbl->setText(QCoreApplication::translate("MainWindow", "Product Class:", nullptr));
        productClassCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "Display", nullptr));
        productClassCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "Cable", nullptr));

        productTyepLbl->setText(QCoreApplication::translate("MainWindow", "Product Type:", nullptr));
        productTypeCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "VI-2", nullptr));
        productTypeCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "VS", nullptr));
        productTypeCmbx->setItemText(2, QCoreApplication::translate("MainWindow", "V510", nullptr));
        productTypeCmbx->setItemText(3, QCoreApplication::translate("MainWindow", "V700", nullptr));
        productTypeCmbx->setItemText(4, QCoreApplication::translate("MainWindow", "V710", nullptr));
        productTypeCmbx->setItemText(5, QCoreApplication::translate("MainWindow", "V1000", nullptr));
        productTypeCmbx->setItemText(6, QCoreApplication::translate("MainWindow", "V1200", nullptr));
        productTypeCmbx->setItemText(7, QCoreApplication::translate("MainWindow", "X900", nullptr));
        productTypeCmbx->setItemText(8, QCoreApplication::translate("MainWindow", "X1200", nullptr));
        productTypeCmbx->setItemText(9, QCoreApplication::translate("MainWindow", "X1400", nullptr));

        productStatusLbl->setText(QCoreApplication::translate("MainWindow", "Product Status:", nullptr));
        productStatusCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "In-Stock", nullptr));
        productStatusCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "On-Loan", nullptr));
        productStatusCmbx->setItemText(2, QCoreApplication::translate("MainWindow", "FAE Unit", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Tracking and Updates", nullptr));
        buildDateLbl->setText(QCoreApplication::translate("MainWindow", "Build Date: ", nullptr));
        inventoryDateLbl->setText(QCoreApplication::translate("MainWindow", "Inventory Date:  ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Product Details", nullptr));
        serialNumberLbl->setText(QCoreApplication::translate("MainWindow", "Serial Number:", nullptr));
        articleNumberLbl->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        productRevisionLbl->setText(QCoreApplication::translate("MainWindow", "Product Revision: ", nullptr));
        locationBx->setText(QString());
        locationBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Burlington, VT", nullptr));
        articleLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "FAE", nullptr));
        locationLbl->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        productVariantBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Standard", nullptr));
        accountLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "C137", nullptr));
        commentsLbl->setText(QCoreApplication::translate("MainWindow", "Comments:", nullptr));
        productVarientLbl->setText(QCoreApplication::translate("MainWindow", "Product Varient: ", nullptr));
        accountLbl->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        productImageLbl->setText(QCoreApplication::translate("MainWindow", "Product Image", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        addProductBtn->setText(QCoreApplication::translate("MainWindow", "Add Product to Inventory", nullptr));
        clearBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Add Product", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Remove Product", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Tracking and Updates", nullptr));
        buildDateLbl_2->setText(QCoreApplication::translate("MainWindow", "Build Date: ", nullptr));
        lastUpdateLbl_2->setText(QCoreApplication::translate("MainWindow", "Last Updated: ", nullptr));
        daysSinceLastUpdateLbl_2->setText(QCoreApplication::translate("MainWindow", "Days Since Last Update: ", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "General Information", nullptr));
        productClassLbl_2->setText(QCoreApplication::translate("MainWindow", "Product Class:", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "Display", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "Cable", nullptr));

        productTyepLbl_2->setText(QCoreApplication::translate("MainWindow", "Product Type:", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "VI-2", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "VS", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "V510", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("MainWindow", "V700", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("MainWindow", "V710", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("MainWindow", "V1000", nullptr));
        comboBox_5->setItemText(6, QCoreApplication::translate("MainWindow", "V1200", nullptr));
        comboBox_5->setItemText(7, QCoreApplication::translate("MainWindow", "X900", nullptr));
        comboBox_5->setItemText(8, QCoreApplication::translate("MainWindow", "X1200", nullptr));
        comboBox_5->setItemText(9, QCoreApplication::translate("MainWindow", "X1400", nullptr));

        productStatusLbl_2->setText(QCoreApplication::translate("MainWindow", "Product Status:", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "In-Stock", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("MainWindow", "On-Loan", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("MainWindow", "FAE Unit", nullptr));

        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        productImageLbl_2->setText(QCoreApplication::translate("MainWindow", "Product Image", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        searchBtn->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        clearSearchBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "Product Details", nullptr));
        serialNumberLbl_2->setText(QCoreApplication::translate("MainWindow", "Serial Number:", nullptr));
        articleNumberLbl_2->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        productRevisionLbl_2->setText(QCoreApplication::translate("MainWindow", "Product Revision: ", nullptr));
        locationLbl_2->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        commentsLbl_2->setText(QCoreApplication::translate("MainWindow", "Comments:", nullptr));
        productVarientLbl_2->setText(QCoreApplication::translate("MainWindow", "Product Varient: ", nullptr));
        accountLbl_2->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Find Product", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Show All Products", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
