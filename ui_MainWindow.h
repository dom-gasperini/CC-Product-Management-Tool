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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *buildDateLbl;
    QDateTimeEdit *buildDateDTBx;
    QLabel *inventoryDateLbl;
    QDateTimeEdit *inventoryDateDTBx;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
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
    QLabel *productVariantLbl;
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
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_5;
    QLabel *productClassSearchLbl;
    QComboBox *productClassSearchCbx;
    QLabel *productTyepSearchLbl;
    QComboBox *typeSearchCbx;
    QLabel *productStatusSearchLbl;
    QComboBox *statusSearchCbx;
    QGroupBox *groupBox_9;
    QPushButton *searchBtn;
    QPushButton *clearSearchBtn;
    QPushButton *resetFiltersSearchBtn;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_6;
    QLabel *productRevisionSearchLbl;
    QLineEdit *articleSearchLineBx;
    QDoubleSpinBox *productRevisionSearchSbx;
    QLabel *serialNumberSearchLbl;
    QLineEdit *locationSearchBx;
    QSpinBox *serialNumberSearchSbx;
    QLabel *articleNumberSearchLbl;
    QLabel *productVarientSearchLbl;
    QLabel *locationSearchLbl;
    QLineEdit *accountSearchLineBx;
    QLineEdit *productVariantSearchBx;
    QLabel *accountSearchLbl;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QCheckBox *typeSearchCb;
    QCheckBox *statusSearchCb;
    QCheckBox *serialNumberSearchCb;
    QCheckBox *revisionSearchCb;
    QCheckBox *accountSearchCb;
    QCheckBox *varientSearchCb;
    QCheckBox *articleNumberSearchCb;
    QCheckBox *locationSearchCb;
    QGroupBox *groupBox_6;
    QListWidget *searchResultsList;
    QPushButton *openItemSearchBtn;
    QWidget *tab_4;
    QGroupBox *groupBox_11;
    QListWidget *allProductsList;
    QPushButton *openItemAllBtn;
    QComboBox *allProductsClassCmbx;
    QLabel *productClassAllLbl;
    QPushButton *refreshAllBtn;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(810, 620);
        MainWindow->setMinimumSize(QSize(810, 620));
        MainWindow->setMaximumSize(QSize(810, 620));
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
        tabWidget->setGeometry(QRect(10, 10, 791, 561));
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
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 253, 121));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        buildDateLbl = new QLabel(layoutWidget1);
        buildDateLbl->setObjectName(QString::fromUtf8("buildDateLbl"));

        gridLayout_2->addWidget(buildDateLbl, 0, 0, 1, 1);

        buildDateDTBx = new QDateTimeEdit(layoutWidget1);
        buildDateDTBx->setObjectName(QString::fromUtf8("buildDateDTBx"));

        gridLayout_2->addWidget(buildDateDTBx, 0, 1, 1, 2);

        inventoryDateLbl = new QLabel(layoutWidget1);
        inventoryDateLbl->setObjectName(QString::fromUtf8("inventoryDateLbl"));

        gridLayout_2->addWidget(inventoryDateLbl, 1, 0, 1, 2);

        inventoryDateDTBx = new QDateTimeEdit(layoutWidget1);
        inventoryDateDTBx->setObjectName(QString::fromUtf8("inventoryDateDTBx"));
        inventoryDateDTBx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(inventoryDateDTBx, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(tab_1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 170, 441, 351));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 421, 321));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        serialNumberSbx = new QSpinBox(layoutWidget2);
        serialNumberSbx->setObjectName(QString::fromUtf8("serialNumberSbx"));
        serialNumberSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serialNumberSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_3->addWidget(serialNumberSbx, 0, 1, 1, 1);

        serialNumberLbl = new QLabel(layoutWidget2);
        serialNumberLbl->setObjectName(QString::fromUtf8("serialNumberLbl"));

        gridLayout_3->addWidget(serialNumberLbl, 0, 0, 1, 1);

        articleNumberLbl = new QLabel(layoutWidget2);
        articleNumberLbl->setObjectName(QString::fromUtf8("articleNumberLbl"));

        gridLayout_3->addWidget(articleNumberLbl, 4, 0, 1, 1);

        productRevisionLbl = new QLabel(layoutWidget2);
        productRevisionLbl->setObjectName(QString::fromUtf8("productRevisionLbl"));

        gridLayout_3->addWidget(productRevisionLbl, 1, 0, 1, 1);

        locationBx = new QLineEdit(layoutWidget2);
        locationBx->setObjectName(QString::fromUtf8("locationBx"));
        locationBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(locationBx, 5, 1, 1, 1);

        articleLineBx = new QLineEdit(layoutWidget2);
        articleLineBx->setObjectName(QString::fromUtf8("articleLineBx"));
        articleLineBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(articleLineBx, 4, 1, 1, 1);

        commentsTbx = new QTextEdit(layoutWidget2);
        commentsTbx->setObjectName(QString::fromUtf8("commentsTbx"));
        commentsTbx->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(commentsTbx, 8, 0, 1, 2);

        locationLbl = new QLabel(layoutWidget2);
        locationLbl->setObjectName(QString::fromUtf8("locationLbl"));

        gridLayout_3->addWidget(locationLbl, 5, 0, 1, 1);

        productVariantBx = new QLineEdit(layoutWidget2);
        productVariantBx->setObjectName(QString::fromUtf8("productVariantBx"));
        productVariantBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(productVariantBx, 3, 1, 1, 1);

        accountLineBx = new QLineEdit(layoutWidget2);
        accountLineBx->setObjectName(QString::fromUtf8("accountLineBx"));
        accountLineBx->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(accountLineBx, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 7, 1, 1, 1);

        commentsLbl = new QLabel(layoutWidget2);
        commentsLbl->setObjectName(QString::fromUtf8("commentsLbl"));
        commentsLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(commentsLbl, 7, 0, 1, 1);

        productVariantLbl = new QLabel(layoutWidget2);
        productVariantLbl->setObjectName(QString::fromUtf8("productVariantLbl"));

        gridLayout_3->addWidget(productVariantLbl, 3, 0, 1, 1);

        productRevisionSbx = new QDoubleSpinBox(layoutWidget2);
        productRevisionSbx->setObjectName(QString::fromUtf8("productRevisionSbx"));
        productRevisionSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        productRevisionSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionSbx->setDecimals(1);

        gridLayout_3->addWidget(productRevisionSbx, 1, 1, 1, 1);

        accountLbl = new QLabel(layoutWidget2);
        accountLbl->setObjectName(QString::fromUtf8("accountLbl"));

        gridLayout_3->addWidget(accountLbl, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 6, 1, 1, 1);

        groupBox_4 = new QGroupBox(tab_1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(470, 220, 300, 300));
        groupBox_4->setMinimumSize(QSize(300, 300));
        groupBox_4->setMaximumSize(QSize(300, 300));
        productImageLbl = new QLabel(groupBox_4);
        productImageLbl->setObjectName(QString::fromUtf8("productImageLbl"));
        productImageLbl->setGeometry(QRect(120, 180, 111, 16));
        groupBox_5 = new QGroupBox(tab_1);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(570, 10, 191, 201));
        addProductBtn = new QPushButton(groupBox_5);
        addProductBtn->setObjectName(QString::fromUtf8("addProductBtn"));
        addProductBtn->setGeometry(QRect(10, 30, 171, 61));
        clearBtn = new QPushButton(groupBox_5);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        clearBtn->setGeometry(QRect(10, 120, 171, 61));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 251, 181));
        layoutWidget_3 = new QWidget(groupBox_7);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 20, 231, 151));
        gridLayout_5 = new QGridLayout(layoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        productClassSearchLbl = new QLabel(layoutWidget_3);
        productClassSearchLbl->setObjectName(QString::fromUtf8("productClassSearchLbl"));

        gridLayout_5->addWidget(productClassSearchLbl, 0, 0, 1, 1);

        productClassSearchCbx = new QComboBox(layoutWidget_3);
        productClassSearchCbx->addItem(QString());
        productClassSearchCbx->addItem(QString());
        productClassSearchCbx->setObjectName(QString::fromUtf8("productClassSearchCbx"));

        gridLayout_5->addWidget(productClassSearchCbx, 0, 1, 1, 1);

        productTyepSearchLbl = new QLabel(layoutWidget_3);
        productTyepSearchLbl->setObjectName(QString::fromUtf8("productTyepSearchLbl"));

        gridLayout_5->addWidget(productTyepSearchLbl, 1, 0, 1, 1);

        typeSearchCbx = new QComboBox(layoutWidget_3);
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->addItem(QString());
        typeSearchCbx->setObjectName(QString::fromUtf8("typeSearchCbx"));

        gridLayout_5->addWidget(typeSearchCbx, 1, 1, 1, 1);

        productStatusSearchLbl = new QLabel(layoutWidget_3);
        productStatusSearchLbl->setObjectName(QString::fromUtf8("productStatusSearchLbl"));

        gridLayout_5->addWidget(productStatusSearchLbl, 2, 0, 1, 1);

        statusSearchCbx = new QComboBox(layoutWidget_3);
        statusSearchCbx->addItem(QString());
        statusSearchCbx->addItem(QString());
        statusSearchCbx->addItem(QString());
        statusSearchCbx->setObjectName(QString::fromUtf8("statusSearchCbx"));

        gridLayout_5->addWidget(statusSearchCbx, 2, 1, 1, 1);

        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(530, 320, 251, 201));
        searchBtn = new QPushButton(groupBox_9);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(10, 30, 231, 71));
        clearSearchBtn = new QPushButton(groupBox_9);
        clearSearchBtn->setObjectName(QString::fromUtf8("clearSearchBtn"));
        clearSearchBtn->setGeometry(QRect(10, 110, 111, 81));
        resetFiltersSearchBtn = new QPushButton(groupBox_9);
        resetFiltersSearchBtn->setObjectName(QString::fromUtf8("resetFiltersSearchBtn"));
        resetFiltersSearchBtn->setGeometry(QRect(130, 110, 111, 81));
        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 200, 351, 321));
        layoutWidget_4 = new QWidget(groupBox_10);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 331, 291));
        gridLayout_6 = new QGridLayout(layoutWidget_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        productRevisionSearchLbl = new QLabel(layoutWidget_4);
        productRevisionSearchLbl->setObjectName(QString::fromUtf8("productRevisionSearchLbl"));

        gridLayout_6->addWidget(productRevisionSearchLbl, 1, 0, 1, 1);

        articleSearchLineBx = new QLineEdit(layoutWidget_4);
        articleSearchLineBx->setObjectName(QString::fromUtf8("articleSearchLineBx"));
        articleSearchLineBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(articleSearchLineBx, 4, 1, 1, 1);

        productRevisionSearchSbx = new QDoubleSpinBox(layoutWidget_4);
        productRevisionSearchSbx->setObjectName(QString::fromUtf8("productRevisionSearchSbx"));
        productRevisionSearchSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionSearchSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        productRevisionSearchSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionSearchSbx->setDecimals(1);

        gridLayout_6->addWidget(productRevisionSearchSbx, 1, 1, 1, 1);

        serialNumberSearchLbl = new QLabel(layoutWidget_4);
        serialNumberSearchLbl->setObjectName(QString::fromUtf8("serialNumberSearchLbl"));

        gridLayout_6->addWidget(serialNumberSearchLbl, 0, 0, 1, 1);

        locationSearchBx = new QLineEdit(layoutWidget_4);
        locationSearchBx->setObjectName(QString::fromUtf8("locationSearchBx"));
        locationSearchBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(locationSearchBx, 5, 1, 1, 1);

        serialNumberSearchSbx = new QSpinBox(layoutWidget_4);
        serialNumberSearchSbx->setObjectName(QString::fromUtf8("serialNumberSearchSbx"));
        serialNumberSearchSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberSearchSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serialNumberSearchSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_6->addWidget(serialNumberSearchSbx, 0, 1, 1, 1);

        articleNumberSearchLbl = new QLabel(layoutWidget_4);
        articleNumberSearchLbl->setObjectName(QString::fromUtf8("articleNumberSearchLbl"));

        gridLayout_6->addWidget(articleNumberSearchLbl, 4, 0, 1, 1);

        productVarientSearchLbl = new QLabel(layoutWidget_4);
        productVarientSearchLbl->setObjectName(QString::fromUtf8("productVarientSearchLbl"));

        gridLayout_6->addWidget(productVarientSearchLbl, 3, 0, 1, 1);

        locationSearchLbl = new QLabel(layoutWidget_4);
        locationSearchLbl->setObjectName(QString::fromUtf8("locationSearchLbl"));

        gridLayout_6->addWidget(locationSearchLbl, 5, 0, 1, 1);

        accountSearchLineBx = new QLineEdit(layoutWidget_4);
        accountSearchLineBx->setObjectName(QString::fromUtf8("accountSearchLineBx"));
        accountSearchLineBx->setMaximumSize(QSize(75, 16777215));

        gridLayout_6->addWidget(accountSearchLineBx, 2, 1, 1, 1);

        productVariantSearchBx = new QLineEdit(layoutWidget_4);
        productVariantSearchBx->setObjectName(QString::fromUtf8("productVariantSearchBx"));
        productVariantSearchBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(productVariantSearchBx, 3, 1, 1, 1);

        accountSearchLbl = new QLabel(layoutWidget_4);
        accountSearchLbl->setObjectName(QString::fromUtf8("accountSearchLbl"));

        gridLayout_6->addWidget(accountSearchLbl, 2, 0, 1, 1);

        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(370, 200, 151, 321));
        layoutWidget3 = new QWidget(groupBox_8);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 131, 281));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        typeSearchCb = new QCheckBox(layoutWidget3);
        typeSearchCb->setObjectName(QString::fromUtf8("typeSearchCb"));

        verticalLayout->addWidget(typeSearchCb);

        statusSearchCb = new QCheckBox(layoutWidget3);
        statusSearchCb->setObjectName(QString::fromUtf8("statusSearchCb"));

        verticalLayout->addWidget(statusSearchCb);

        serialNumberSearchCb = new QCheckBox(layoutWidget3);
        serialNumberSearchCb->setObjectName(QString::fromUtf8("serialNumberSearchCb"));

        verticalLayout->addWidget(serialNumberSearchCb);

        revisionSearchCb = new QCheckBox(layoutWidget3);
        revisionSearchCb->setObjectName(QString::fromUtf8("revisionSearchCb"));

        verticalLayout->addWidget(revisionSearchCb);

        accountSearchCb = new QCheckBox(layoutWidget3);
        accountSearchCb->setObjectName(QString::fromUtf8("accountSearchCb"));

        verticalLayout->addWidget(accountSearchCb);

        varientSearchCb = new QCheckBox(layoutWidget3);
        varientSearchCb->setObjectName(QString::fromUtf8("varientSearchCb"));

        verticalLayout->addWidget(varientSearchCb);

        articleNumberSearchCb = new QCheckBox(layoutWidget3);
        articleNumberSearchCb->setObjectName(QString::fromUtf8("articleNumberSearchCb"));

        verticalLayout->addWidget(articleNumberSearchCb);

        locationSearchCb = new QCheckBox(layoutWidget3);
        locationSearchCb->setObjectName(QString::fromUtf8("locationSearchCb"));

        verticalLayout->addWidget(locationSearchCb);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(270, 10, 511, 181));
        searchResultsList = new QListWidget(groupBox_6);
        searchResultsList->setObjectName(QString::fromUtf8("searchResultsList"));
        searchResultsList->setGeometry(QRect(10, 30, 491, 141));
        searchResultsList->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Fira Mono\";"));
        openItemSearchBtn = new QPushButton(tab_3);
        openItemSearchBtn->setObjectName(QString::fromUtf8("openItemSearchBtn"));
        openItemSearchBtn->setGeometry(QRect(550, 220, 211, 81));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox_11 = new QGroupBox(tab_4);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 10, 771, 461));
        allProductsList = new QListWidget(groupBox_11);
        allProductsList->setObjectName(QString::fromUtf8("allProductsList"));
        allProductsList->setGeometry(QRect(10, 30, 751, 421));
        allProductsList->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Fira Mono\";"));
        openItemAllBtn = new QPushButton(tab_4);
        openItemAllBtn->setObjectName(QString::fromUtf8("openItemAllBtn"));
        openItemAllBtn->setGeometry(QRect(610, 480, 171, 41));
        allProductsClassCmbx = new QComboBox(tab_4);
        allProductsClassCmbx->addItem(QString());
        allProductsClassCmbx->addItem(QString());
        allProductsClassCmbx->setObjectName(QString::fromUtf8("allProductsClassCmbx"));
        allProductsClassCmbx->setGeometry(QRect(160, 480, 111, 41));
        productClassAllLbl = new QLabel(tab_4);
        productClassAllLbl->setObjectName(QString::fromUtf8("productClassAllLbl"));
        productClassAllLbl->setGeometry(QRect(10, 490, 141, 16));
        refreshAllBtn = new QPushButton(tab_4);
        refreshAllBtn->setObjectName(QString::fromUtf8("refreshAllBtn"));
        refreshAllBtn->setGeometry(QRect(420, 480, 171, 41));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 810, 21));
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

        tabWidget->setCurrentIndex(3);


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
        productVariantLbl->setText(QCoreApplication::translate("MainWindow", "Product Variant: ", nullptr));
        accountLbl->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        productImageLbl->setText(QCoreApplication::translate("MainWindow", "Product Image", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        addProductBtn->setText(QCoreApplication::translate("MainWindow", "Add Product to Inventory", nullptr));
        clearBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Add Product", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Remove Product", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "General Information", nullptr));
        productClassSearchLbl->setText(QCoreApplication::translate("MainWindow", "Product Class:", nullptr));
        productClassSearchCbx->setItemText(0, QCoreApplication::translate("MainWindow", "Displays", nullptr));
        productClassSearchCbx->setItemText(1, QCoreApplication::translate("MainWindow", "Cables", nullptr));

        productTyepSearchLbl->setText(QCoreApplication::translate("MainWindow", "Product Type:", nullptr));
        typeSearchCbx->setItemText(0, QCoreApplication::translate("MainWindow", "VI-2", nullptr));
        typeSearchCbx->setItemText(1, QCoreApplication::translate("MainWindow", "VS", nullptr));
        typeSearchCbx->setItemText(2, QCoreApplication::translate("MainWindow", "V510", nullptr));
        typeSearchCbx->setItemText(3, QCoreApplication::translate("MainWindow", "V700", nullptr));
        typeSearchCbx->setItemText(4, QCoreApplication::translate("MainWindow", "V710", nullptr));
        typeSearchCbx->setItemText(5, QCoreApplication::translate("MainWindow", "V1000", nullptr));
        typeSearchCbx->setItemText(6, QCoreApplication::translate("MainWindow", "V1200", nullptr));
        typeSearchCbx->setItemText(7, QCoreApplication::translate("MainWindow", "X900", nullptr));
        typeSearchCbx->setItemText(8, QCoreApplication::translate("MainWindow", "X1200", nullptr));
        typeSearchCbx->setItemText(9, QCoreApplication::translate("MainWindow", "X1400", nullptr));

        productStatusSearchLbl->setText(QCoreApplication::translate("MainWindow", "Product Status:", nullptr));
        statusSearchCbx->setItemText(0, QCoreApplication::translate("MainWindow", "In-Stock", nullptr));
        statusSearchCbx->setItemText(1, QCoreApplication::translate("MainWindow", "On-Loan", nullptr));
        statusSearchCbx->setItemText(2, QCoreApplication::translate("MainWindow", "FAE-Unit", nullptr));

        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        searchBtn->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        clearSearchBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        resetFiltersSearchBtn->setText(QCoreApplication::translate("MainWindow", "Reset Filters", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("MainWindow", "Product Details", nullptr));
        productRevisionSearchLbl->setText(QCoreApplication::translate("MainWindow", "Product Revision: ", nullptr));
        serialNumberSearchLbl->setText(QCoreApplication::translate("MainWindow", "Serial Number:", nullptr));
        articleNumberSearchLbl->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        productVarientSearchLbl->setText(QCoreApplication::translate("MainWindow", "Product Variant: ", nullptr));
        locationSearchLbl->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        accountSearchLbl->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MainWindow", "Search Filters", nullptr));
        typeSearchCb->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        statusSearchCb->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        serialNumberSearchCb->setText(QCoreApplication::translate("MainWindow", "Serial Number", nullptr));
        revisionSearchCb->setText(QCoreApplication::translate("MainWindow", "Revision", nullptr));
        accountSearchCb->setText(QCoreApplication::translate("MainWindow", "Account", nullptr));
        varientSearchCb->setText(QCoreApplication::translate("MainWindow", "Variant", nullptr));
        articleNumberSearchCb->setText(QCoreApplication::translate("MainWindow", "Article Number", nullptr));
        locationSearchCb->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Results", nullptr));
        openItemSearchBtn->setText(QCoreApplication::translate("MainWindow", "Open Item", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Find Product", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "All Products", nullptr));
        openItemAllBtn->setText(QCoreApplication::translate("MainWindow", "Open Item", nullptr));
        allProductsClassCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "Displays", nullptr));
        allProductsClassCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "Cables", nullptr));

        productClassAllLbl->setText(QCoreApplication::translate("MainWindow", "Select Product Class: ", nullptr));
        refreshAllBtn->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Show All Products", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
