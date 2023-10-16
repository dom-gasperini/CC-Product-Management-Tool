/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
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
    QSpacerItem *verticalSpacer;
    QLineEdit *locationBx;
    QSpacerItem *horizontalSpacer;
    QTextEdit *commentsTbx;
    QLineEdit *articleLineBx;
    QSpacerItem *verticalSpacer_2;
    QDoubleSpinBox *productRevisionSbx;
    QLabel *accountLbl;
    QLabel *productVariantLbl;
    QLabel *articleNumberLbl;
    QLabel *locationLbl;
    QLineEdit *accountLineBx;
    QLabel *commentsLbl;
    QLabel *productRevisionLbl;
    QLabel *serialNumberLbl;
    QSpinBox *serialNumberSbx;
    QLineEdit *productVariantBx;
    QGroupBox *groupBox_4;
    QLabel *productImageLbl;
    QGroupBox *groupBox_5;
    QPushButton *addProductBtn;
    QPushButton *clearBtn;
    QWidget *tab_2;
    QGroupBox *groupBox_12;
    QPushButton *confirmProductDeleteBtn;
    QPushButton *deleteProductBtn;
    QPushButton *clearDeleteParametersBtn;
    QGroupBox *groupBox_13;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_4;
    QLabel *productClassDeleteLbl;
    QComboBox *productClassDeleteCmbx;
    QLabel *serialNumberDeleteLbl;
    QSpinBox *serialNumberDeleteSbx;
    QLabel *accountDeleteLbl;
    QLineEdit *accountDeleteLineBx;
    QLabel *articleNumberDeleteLbl;
    QLineEdit *articleDeleteLineBx;
    QGroupBox *groupBox_14;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_7;
    QSpinBox *serialNumberDeleteConfirmSbx;
    QLabel *serialNumberDeleteLbl_2;
    QLabel *articleNumberDeleteLbl_2;
    QLabel *productRevisionDeleteLbl;
    QLineEdit *locationDeleteConfirmBx;
    QLineEdit *articleDeleteConfirmLineBx;
    QTextEdit *commentsDeleteConfirmTbx;
    QLabel *locationDeleteLbl;
    QLineEdit *productVariantDeleteConfirmBx;
    QLineEdit *accountDeleteConfirmLineBx;
    QSpacerItem *horizontalSpacer_2;
    QLabel *commentsDeleteLbl;
    QLabel *productVariantDeleteLbl;
    QDoubleSpinBox *productRevisionDeleteConfirmSbx;
    QLabel *accountDeleteLbl_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_8;
    QLabel *productClassConfirmDeleteLbl;
    QLabel *productTypeDeleteConfirmLbl;
    QLabel *productStatusDeleteLbl;
    QLabel *productClassDeleteConfirmInfo;
    QLabel *productTypeDeleteConfirmInfo;
    QLabel *productStatusDeleteInfo;
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
    QWidget *layoutWidget5;
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
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(810, 620);
        MainWindow->setMinimumSize(QSize(810, 620));
        MainWindow->setMaximumSize(QSize(810, 620));
        actionDark_Mode = new QAction(MainWindow);
        actionDark_Mode->setObjectName("actionDark_Mode");
        actionDark_Mode->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 791, 561));
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 251, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 231, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        productClassLbl = new QLabel(layoutWidget);
        productClassLbl->setObjectName("productClassLbl");

        gridLayout->addWidget(productClassLbl, 0, 0, 1, 1);

        productClassCmbx = new QComboBox(layoutWidget);
        productClassCmbx->addItem(QString());
        productClassCmbx->addItem(QString());
        productClassCmbx->setObjectName("productClassCmbx");

        gridLayout->addWidget(productClassCmbx, 0, 1, 1, 1);

        productTyepLbl = new QLabel(layoutWidget);
        productTyepLbl->setObjectName("productTyepLbl");

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
        productTypeCmbx->setObjectName("productTypeCmbx");

        gridLayout->addWidget(productTypeCmbx, 1, 1, 1, 1);

        productStatusLbl = new QLabel(layoutWidget);
        productStatusLbl->setObjectName("productStatusLbl");

        gridLayout->addWidget(productStatusLbl, 2, 0, 1, 1);

        productStatusCmbx = new QComboBox(layoutWidget);
        productStatusCmbx->addItem(QString());
        productStatusCmbx->addItem(QString());
        productStatusCmbx->addItem(QString());
        productStatusCmbx->setObjectName("productStatusCmbx");

        gridLayout->addWidget(productStatusCmbx, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab_1);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(280, 10, 271, 151));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 20, 253, 121));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        buildDateLbl = new QLabel(layoutWidget1);
        buildDateLbl->setObjectName("buildDateLbl");

        gridLayout_2->addWidget(buildDateLbl, 0, 0, 1, 1);

        buildDateDTBx = new QDateTimeEdit(layoutWidget1);
        buildDateDTBx->setObjectName("buildDateDTBx");

        gridLayout_2->addWidget(buildDateDTBx, 0, 1, 1, 2);

        inventoryDateLbl = new QLabel(layoutWidget1);
        inventoryDateLbl->setObjectName("inventoryDateLbl");

        gridLayout_2->addWidget(inventoryDateLbl, 1, 0, 1, 2);

        inventoryDateDTBx = new QDateTimeEdit(layoutWidget1);
        inventoryDateDTBx->setObjectName("inventoryDateDTBx");
        inventoryDateDTBx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(inventoryDateDTBx, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(tab_1);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 170, 441, 351));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 20, 421, 321));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 6, 0, 1, 1);

        locationBx = new QLineEdit(layoutWidget2);
        locationBx->setObjectName("locationBx");
        locationBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(locationBx, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 7, 1, 1, 1);

        commentsTbx = new QTextEdit(layoutWidget2);
        commentsTbx->setObjectName("commentsTbx");
        commentsTbx->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(commentsTbx, 8, 0, 1, 2);

        articleLineBx = new QLineEdit(layoutWidget2);
        articleLineBx->setObjectName("articleLineBx");
        articleLineBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(articleLineBx, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 6, 1, 1, 1);

        productRevisionSbx = new QDoubleSpinBox(layoutWidget2);
        productRevisionSbx->setObjectName("productRevisionSbx");
        productRevisionSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        productRevisionSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionSbx->setDecimals(1);

        gridLayout_3->addWidget(productRevisionSbx, 1, 1, 1, 1);

        accountLbl = new QLabel(layoutWidget2);
        accountLbl->setObjectName("accountLbl");

        gridLayout_3->addWidget(accountLbl, 2, 0, 1, 1);

        productVariantLbl = new QLabel(layoutWidget2);
        productVariantLbl->setObjectName("productVariantLbl");

        gridLayout_3->addWidget(productVariantLbl, 3, 0, 1, 1);

        articleNumberLbl = new QLabel(layoutWidget2);
        articleNumberLbl->setObjectName("articleNumberLbl");

        gridLayout_3->addWidget(articleNumberLbl, 4, 0, 1, 1);

        locationLbl = new QLabel(layoutWidget2);
        locationLbl->setObjectName("locationLbl");

        gridLayout_3->addWidget(locationLbl, 5, 0, 1, 1);

        accountLineBx = new QLineEdit(layoutWidget2);
        accountLineBx->setObjectName("accountLineBx");
        accountLineBx->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(accountLineBx, 2, 1, 1, 1);

        commentsLbl = new QLabel(layoutWidget2);
        commentsLbl->setObjectName("commentsLbl");
        commentsLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(commentsLbl, 7, 0, 1, 1);

        productRevisionLbl = new QLabel(layoutWidget2);
        productRevisionLbl->setObjectName("productRevisionLbl");

        gridLayout_3->addWidget(productRevisionLbl, 1, 0, 1, 1);

        serialNumberLbl = new QLabel(layoutWidget2);
        serialNumberLbl->setObjectName("serialNumberLbl");

        gridLayout_3->addWidget(serialNumberLbl, 0, 0, 1, 1);

        serialNumberSbx = new QSpinBox(layoutWidget2);
        serialNumberSbx->setObjectName("serialNumberSbx");
        serialNumberSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        serialNumberSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNumberSbx->setMaximum(999999999);

        gridLayout_3->addWidget(serialNumberSbx, 0, 1, 1, 1);

        productVariantBx = new QLineEdit(layoutWidget2);
        productVariantBx->setObjectName("productVariantBx");
        productVariantBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(productVariantBx, 3, 1, 1, 1);

        groupBox_4 = new QGroupBox(tab_1);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(470, 220, 300, 300));
        groupBox_4->setMinimumSize(QSize(300, 300));
        groupBox_4->setMaximumSize(QSize(300, 300));
        productImageLbl = new QLabel(groupBox_4);
        productImageLbl->setObjectName("productImageLbl");
        productImageLbl->setGeometry(QRect(10, 30, 281, 261));
        productImageLbl->setAlignment(Qt::AlignCenter);
        groupBox_5 = new QGroupBox(tab_1);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(570, 10, 191, 201));
        addProductBtn = new QPushButton(groupBox_5);
        addProductBtn->setObjectName("addProductBtn");
        addProductBtn->setGeometry(QRect(10, 30, 171, 61));
        clearBtn = new QPushButton(groupBox_5);
        clearBtn->setObjectName("clearBtn");
        clearBtn->setGeometry(QRect(10, 120, 171, 61));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_12 = new QGroupBox(tab_2);
        groupBox_12->setObjectName("groupBox_12");
        groupBox_12->setGeometry(QRect(380, 10, 401, 171));
        confirmProductDeleteBtn = new QPushButton(groupBox_12);
        confirmProductDeleteBtn->setObjectName("confirmProductDeleteBtn");
        confirmProductDeleteBtn->setGeometry(QRect(10, 30, 181, 61));
        deleteProductBtn = new QPushButton(groupBox_12);
        deleteProductBtn->setObjectName("deleteProductBtn");
        deleteProductBtn->setGeometry(QRect(210, 30, 181, 61));
        deleteProductBtn->setCheckable(true);
        clearDeleteParametersBtn = new QPushButton(groupBox_12);
        clearDeleteParametersBtn->setObjectName("clearDeleteParametersBtn");
        clearDeleteParametersBtn->setGeometry(QRect(10, 100, 381, 61));
        groupBox_13 = new QGroupBox(tab_2);
        groupBox_13->setObjectName("groupBox_13");
        groupBox_13->setGeometry(QRect(10, 10, 361, 171));
        layoutWidget3 = new QWidget(groupBox_13);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 30, 341, 131));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        productClassDeleteLbl = new QLabel(layoutWidget3);
        productClassDeleteLbl->setObjectName("productClassDeleteLbl");

        gridLayout_4->addWidget(productClassDeleteLbl, 0, 0, 1, 1);

        productClassDeleteCmbx = new QComboBox(layoutWidget3);
        productClassDeleteCmbx->addItem(QString());
        productClassDeleteCmbx->addItem(QString());
        productClassDeleteCmbx->setObjectName("productClassDeleteCmbx");

        gridLayout_4->addWidget(productClassDeleteCmbx, 0, 1, 1, 1);

        serialNumberDeleteLbl = new QLabel(layoutWidget3);
        serialNumberDeleteLbl->setObjectName("serialNumberDeleteLbl");

        gridLayout_4->addWidget(serialNumberDeleteLbl, 1, 0, 1, 1);

        serialNumberDeleteSbx = new QSpinBox(layoutWidget3);
        serialNumberDeleteSbx->setObjectName("serialNumberDeleteSbx");
        serialNumberDeleteSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberDeleteSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        serialNumberDeleteSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNumberDeleteSbx->setMaximum(999999999);

        gridLayout_4->addWidget(serialNumberDeleteSbx, 1, 1, 1, 1);

        accountDeleteLbl = new QLabel(layoutWidget3);
        accountDeleteLbl->setObjectName("accountDeleteLbl");

        gridLayout_4->addWidget(accountDeleteLbl, 2, 0, 1, 1);

        accountDeleteLineBx = new QLineEdit(layoutWidget3);
        accountDeleteLineBx->setObjectName("accountDeleteLineBx");
        accountDeleteLineBx->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(accountDeleteLineBx, 2, 1, 1, 1);

        articleNumberDeleteLbl = new QLabel(layoutWidget3);
        articleNumberDeleteLbl->setObjectName("articleNumberDeleteLbl");

        gridLayout_4->addWidget(articleNumberDeleteLbl, 3, 0, 1, 1);

        articleDeleteLineBx = new QLineEdit(layoutWidget3);
        articleDeleteLineBx->setObjectName("articleDeleteLineBx");
        articleDeleteLineBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_4->addWidget(articleDeleteLineBx, 3, 1, 1, 1);

        groupBox_14 = new QGroupBox(tab_2);
        groupBox_14->setObjectName("groupBox_14");
        groupBox_14->setGeometry(QRect(10, 190, 771, 331));
        layoutWidget_2 = new QWidget(groupBox_14);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 20, 421, 301));
        gridLayout_7 = new QGridLayout(layoutWidget_2);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        serialNumberDeleteConfirmSbx = new QSpinBox(layoutWidget_2);
        serialNumberDeleteConfirmSbx->setObjectName("serialNumberDeleteConfirmSbx");
        serialNumberDeleteConfirmSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberDeleteConfirmSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        serialNumberDeleteConfirmSbx->setReadOnly(true);
        serialNumberDeleteConfirmSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNumberDeleteConfirmSbx->setMaximum(999999999);

        gridLayout_7->addWidget(serialNumberDeleteConfirmSbx, 0, 1, 1, 1);

        serialNumberDeleteLbl_2 = new QLabel(layoutWidget_2);
        serialNumberDeleteLbl_2->setObjectName("serialNumberDeleteLbl_2");

        gridLayout_7->addWidget(serialNumberDeleteLbl_2, 0, 0, 1, 1);

        articleNumberDeleteLbl_2 = new QLabel(layoutWidget_2);
        articleNumberDeleteLbl_2->setObjectName("articleNumberDeleteLbl_2");

        gridLayout_7->addWidget(articleNumberDeleteLbl_2, 4, 0, 1, 1);

        productRevisionDeleteLbl = new QLabel(layoutWidget_2);
        productRevisionDeleteLbl->setObjectName("productRevisionDeleteLbl");

        gridLayout_7->addWidget(productRevisionDeleteLbl, 1, 0, 1, 1);

        locationDeleteConfirmBx = new QLineEdit(layoutWidget_2);
        locationDeleteConfirmBx->setObjectName("locationDeleteConfirmBx");
        locationDeleteConfirmBx->setMaximumSize(QSize(250, 16777215));
        locationDeleteConfirmBx->setReadOnly(true);

        gridLayout_7->addWidget(locationDeleteConfirmBx, 5, 1, 1, 1);

        articleDeleteConfirmLineBx = new QLineEdit(layoutWidget_2);
        articleDeleteConfirmLineBx->setObjectName("articleDeleteConfirmLineBx");
        articleDeleteConfirmLineBx->setMaximumSize(QSize(250, 16777215));
        articleDeleteConfirmLineBx->setReadOnly(true);

        gridLayout_7->addWidget(articleDeleteConfirmLineBx, 4, 1, 1, 1);

        commentsDeleteConfirmTbx = new QTextEdit(layoutWidget_2);
        commentsDeleteConfirmTbx->setObjectName("commentsDeleteConfirmTbx");
        commentsDeleteConfirmTbx->setMaximumSize(QSize(16777215, 100));
        commentsDeleteConfirmTbx->setReadOnly(true);

        gridLayout_7->addWidget(commentsDeleteConfirmTbx, 8, 0, 1, 2);

        locationDeleteLbl = new QLabel(layoutWidget_2);
        locationDeleteLbl->setObjectName("locationDeleteLbl");

        gridLayout_7->addWidget(locationDeleteLbl, 5, 0, 1, 1);

        productVariantDeleteConfirmBx = new QLineEdit(layoutWidget_2);
        productVariantDeleteConfirmBx->setObjectName("productVariantDeleteConfirmBx");
        productVariantDeleteConfirmBx->setMaximumSize(QSize(250, 16777215));
        productVariantDeleteConfirmBx->setReadOnly(true);

        gridLayout_7->addWidget(productVariantDeleteConfirmBx, 3, 1, 1, 1);

        accountDeleteConfirmLineBx = new QLineEdit(layoutWidget_2);
        accountDeleteConfirmLineBx->setObjectName("accountDeleteConfirmLineBx");
        accountDeleteConfirmLineBx->setMaximumSize(QSize(100, 16777215));
        accountDeleteConfirmLineBx->setReadOnly(true);

        gridLayout_7->addWidget(accountDeleteConfirmLineBx, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 7, 1, 1, 1);

        commentsDeleteLbl = new QLabel(layoutWidget_2);
        commentsDeleteLbl->setObjectName("commentsDeleteLbl");
        commentsDeleteLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_7->addWidget(commentsDeleteLbl, 7, 0, 1, 1);

        productVariantDeleteLbl = new QLabel(layoutWidget_2);
        productVariantDeleteLbl->setObjectName("productVariantDeleteLbl");

        gridLayout_7->addWidget(productVariantDeleteLbl, 3, 0, 1, 1);

        productRevisionDeleteConfirmSbx = new QDoubleSpinBox(layoutWidget_2);
        productRevisionDeleteConfirmSbx->setObjectName("productRevisionDeleteConfirmSbx");
        productRevisionDeleteConfirmSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionDeleteConfirmSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        productRevisionDeleteConfirmSbx->setReadOnly(true);
        productRevisionDeleteConfirmSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionDeleteConfirmSbx->setDecimals(1);

        gridLayout_7->addWidget(productRevisionDeleteConfirmSbx, 1, 1, 1, 1);

        accountDeleteLbl_2 = new QLabel(layoutWidget_2);
        accountDeleteLbl_2->setObjectName("accountDeleteLbl_2");

        gridLayout_7->addWidget(accountDeleteLbl_2, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 6, 1, 1, 1);

        layoutWidget4 = new QWidget(groupBox_14);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(470, 100, 251, 121));
        gridLayout_8 = new QGridLayout(layoutWidget4);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        productClassConfirmDeleteLbl = new QLabel(layoutWidget4);
        productClassConfirmDeleteLbl->setObjectName("productClassConfirmDeleteLbl");

        gridLayout_8->addWidget(productClassConfirmDeleteLbl, 0, 0, 1, 1);

        productTypeDeleteConfirmLbl = new QLabel(layoutWidget4);
        productTypeDeleteConfirmLbl->setObjectName("productTypeDeleteConfirmLbl");

        gridLayout_8->addWidget(productTypeDeleteConfirmLbl, 1, 0, 1, 1);

        productStatusDeleteLbl = new QLabel(layoutWidget4);
        productStatusDeleteLbl->setObjectName("productStatusDeleteLbl");

        gridLayout_8->addWidget(productStatusDeleteLbl, 2, 0, 1, 1);

        productClassDeleteConfirmInfo = new QLabel(layoutWidget4);
        productClassDeleteConfirmInfo->setObjectName("productClassDeleteConfirmInfo");

        gridLayout_8->addWidget(productClassDeleteConfirmInfo, 0, 1, 1, 1);

        productTypeDeleteConfirmInfo = new QLabel(layoutWidget4);
        productTypeDeleteConfirmInfo->setObjectName("productTypeDeleteConfirmInfo");

        gridLayout_8->addWidget(productTypeDeleteConfirmInfo, 1, 1, 1, 1);

        productStatusDeleteInfo = new QLabel(layoutWidget4);
        productStatusDeleteInfo->setObjectName("productStatusDeleteInfo");

        gridLayout_8->addWidget(productStatusDeleteInfo, 2, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(10, 10, 251, 181));
        layoutWidget_3 = new QWidget(groupBox_7);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 20, 231, 151));
        gridLayout_5 = new QGridLayout(layoutWidget_3);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        productClassSearchLbl = new QLabel(layoutWidget_3);
        productClassSearchLbl->setObjectName("productClassSearchLbl");

        gridLayout_5->addWidget(productClassSearchLbl, 0, 0, 1, 1);

        productClassSearchCbx = new QComboBox(layoutWidget_3);
        productClassSearchCbx->addItem(QString());
        productClassSearchCbx->addItem(QString());
        productClassSearchCbx->setObjectName("productClassSearchCbx");

        gridLayout_5->addWidget(productClassSearchCbx, 0, 1, 1, 1);

        productTyepSearchLbl = new QLabel(layoutWidget_3);
        productTyepSearchLbl->setObjectName("productTyepSearchLbl");

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
        typeSearchCbx->setObjectName("typeSearchCbx");

        gridLayout_5->addWidget(typeSearchCbx, 1, 1, 1, 1);

        productStatusSearchLbl = new QLabel(layoutWidget_3);
        productStatusSearchLbl->setObjectName("productStatusSearchLbl");

        gridLayout_5->addWidget(productStatusSearchLbl, 2, 0, 1, 1);

        statusSearchCbx = new QComboBox(layoutWidget_3);
        statusSearchCbx->addItem(QString());
        statusSearchCbx->addItem(QString());
        statusSearchCbx->addItem(QString());
        statusSearchCbx->setObjectName("statusSearchCbx");

        gridLayout_5->addWidget(statusSearchCbx, 2, 1, 1, 1);

        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName("groupBox_9");
        groupBox_9->setGeometry(QRect(530, 320, 251, 201));
        searchBtn = new QPushButton(groupBox_9);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(10, 30, 231, 71));
        clearSearchBtn = new QPushButton(groupBox_9);
        clearSearchBtn->setObjectName("clearSearchBtn");
        clearSearchBtn->setGeometry(QRect(10, 110, 111, 81));
        resetFiltersSearchBtn = new QPushButton(groupBox_9);
        resetFiltersSearchBtn->setObjectName("resetFiltersSearchBtn");
        resetFiltersSearchBtn->setGeometry(QRect(130, 110, 111, 81));
        groupBox_10 = new QGroupBox(tab_3);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setGeometry(QRect(10, 200, 351, 321));
        layoutWidget_4 = new QWidget(groupBox_10);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 20, 331, 291));
        gridLayout_6 = new QGridLayout(layoutWidget_4);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        productRevisionSearchLbl = new QLabel(layoutWidget_4);
        productRevisionSearchLbl->setObjectName("productRevisionSearchLbl");

        gridLayout_6->addWidget(productRevisionSearchLbl, 1, 0, 1, 1);

        articleSearchLineBx = new QLineEdit(layoutWidget_4);
        articleSearchLineBx->setObjectName("articleSearchLineBx");
        articleSearchLineBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(articleSearchLineBx, 4, 1, 1, 1);

        productRevisionSearchSbx = new QDoubleSpinBox(layoutWidget_4);
        productRevisionSearchSbx->setObjectName("productRevisionSearchSbx");
        productRevisionSearchSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionSearchSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        productRevisionSearchSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionSearchSbx->setDecimals(1);

        gridLayout_6->addWidget(productRevisionSearchSbx, 1, 1, 1, 1);

        serialNumberSearchLbl = new QLabel(layoutWidget_4);
        serialNumberSearchLbl->setObjectName("serialNumberSearchLbl");

        gridLayout_6->addWidget(serialNumberSearchLbl, 0, 0, 1, 1);

        locationSearchBx = new QLineEdit(layoutWidget_4);
        locationSearchBx->setObjectName("locationSearchBx");
        locationSearchBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(locationSearchBx, 5, 1, 1, 1);

        serialNumberSearchSbx = new QSpinBox(layoutWidget_4);
        serialNumberSearchSbx->setObjectName("serialNumberSearchSbx");
        serialNumberSearchSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberSearchSbx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serialNumberSearchSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_6->addWidget(serialNumberSearchSbx, 0, 1, 1, 1);

        articleNumberSearchLbl = new QLabel(layoutWidget_4);
        articleNumberSearchLbl->setObjectName("articleNumberSearchLbl");

        gridLayout_6->addWidget(articleNumberSearchLbl, 4, 0, 1, 1);

        productVarientSearchLbl = new QLabel(layoutWidget_4);
        productVarientSearchLbl->setObjectName("productVarientSearchLbl");

        gridLayout_6->addWidget(productVarientSearchLbl, 3, 0, 1, 1);

        locationSearchLbl = new QLabel(layoutWidget_4);
        locationSearchLbl->setObjectName("locationSearchLbl");

        gridLayout_6->addWidget(locationSearchLbl, 5, 0, 1, 1);

        accountSearchLineBx = new QLineEdit(layoutWidget_4);
        accountSearchLineBx->setObjectName("accountSearchLineBx");
        accountSearchLineBx->setMaximumSize(QSize(75, 16777215));

        gridLayout_6->addWidget(accountSearchLineBx, 2, 1, 1, 1);

        productVariantSearchBx = new QLineEdit(layoutWidget_4);
        productVariantSearchBx->setObjectName("productVariantSearchBx");
        productVariantSearchBx->setMaximumSize(QSize(200, 16777215));

        gridLayout_6->addWidget(productVariantSearchBx, 3, 1, 1, 1);

        accountSearchLbl = new QLabel(layoutWidget_4);
        accountSearchLbl->setObjectName("accountSearchLbl");

        gridLayout_6->addWidget(accountSearchLbl, 2, 0, 1, 1);

        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setGeometry(QRect(370, 200, 151, 321));
        layoutWidget5 = new QWidget(groupBox_8);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(10, 30, 131, 281));
        verticalLayout = new QVBoxLayout(layoutWidget5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        typeSearchCb = new QCheckBox(layoutWidget5);
        typeSearchCb->setObjectName("typeSearchCb");

        verticalLayout->addWidget(typeSearchCb);

        statusSearchCb = new QCheckBox(layoutWidget5);
        statusSearchCb->setObjectName("statusSearchCb");

        verticalLayout->addWidget(statusSearchCb);

        serialNumberSearchCb = new QCheckBox(layoutWidget5);
        serialNumberSearchCb->setObjectName("serialNumberSearchCb");

        verticalLayout->addWidget(serialNumberSearchCb);

        revisionSearchCb = new QCheckBox(layoutWidget5);
        revisionSearchCb->setObjectName("revisionSearchCb");

        verticalLayout->addWidget(revisionSearchCb);

        accountSearchCb = new QCheckBox(layoutWidget5);
        accountSearchCb->setObjectName("accountSearchCb");

        verticalLayout->addWidget(accountSearchCb);

        varientSearchCb = new QCheckBox(layoutWidget5);
        varientSearchCb->setObjectName("varientSearchCb");

        verticalLayout->addWidget(varientSearchCb);

        articleNumberSearchCb = new QCheckBox(layoutWidget5);
        articleNumberSearchCb->setObjectName("articleNumberSearchCb");

        verticalLayout->addWidget(articleNumberSearchCb);

        locationSearchCb = new QCheckBox(layoutWidget5);
        locationSearchCb->setObjectName("locationSearchCb");

        verticalLayout->addWidget(locationSearchCb);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(270, 10, 511, 181));
        searchResultsList = new QListWidget(groupBox_6);
        searchResultsList->setObjectName("searchResultsList");
        searchResultsList->setGeometry(QRect(10, 30, 491, 141));
        searchResultsList->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Fira Mono\";"));
        openItemSearchBtn = new QPushButton(tab_3);
        openItemSearchBtn->setObjectName("openItemSearchBtn");
        openItemSearchBtn->setGeometry(QRect(550, 220, 211, 81));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        groupBox_11 = new QGroupBox(tab_4);
        groupBox_11->setObjectName("groupBox_11");
        groupBox_11->setGeometry(QRect(10, 10, 771, 461));
        allProductsList = new QListWidget(groupBox_11);
        allProductsList->setObjectName("allProductsList");
        allProductsList->setGeometry(QRect(10, 30, 751, 421));
        allProductsList->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Fira Mono\";"));
        openItemAllBtn = new QPushButton(tab_4);
        openItemAllBtn->setObjectName("openItemAllBtn");
        openItemAllBtn->setGeometry(QRect(610, 480, 171, 41));
        allProductsClassCmbx = new QComboBox(tab_4);
        allProductsClassCmbx->addItem(QString());
        allProductsClassCmbx->addItem(QString());
        allProductsClassCmbx->setObjectName("allProductsClassCmbx");
        allProductsClassCmbx->setGeometry(QRect(160, 480, 111, 41));
        productClassAllLbl = new QLabel(tab_4);
        productClassAllLbl->setObjectName("productClassAllLbl");
        productClassAllLbl->setGeometry(QRect(10, 490, 141, 16));
        refreshAllBtn = new QPushButton(tab_4);
        refreshAllBtn->setObjectName("refreshAllBtn");
        refreshAllBtn->setGeometry(QRect(420, 480, 171, 41));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 810, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionDark_Mode);
        menuOptions->addSeparator();
        menuOptions->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDark_Mode->setText(QCoreApplication::translate("MainWindow", "Dark Mode", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "General Information", nullptr));
        productClassLbl->setText(QCoreApplication::translate("MainWindow", "Product Class:", nullptr));
        productClassCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "Displays", nullptr));
        productClassCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "Cables", nullptr));

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
        productStatusCmbx->setItemText(2, QCoreApplication::translate("MainWindow", "FAE-Unit", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Tracking and Updates", nullptr));
        buildDateLbl->setText(QCoreApplication::translate("MainWindow", "Build Date: ", nullptr));
        inventoryDateLbl->setText(QCoreApplication::translate("MainWindow", "Inventory Date:  ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Product Details", nullptr));
        locationBx->setText(QString());
        locationBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Burlington, VT", nullptr));
        articleLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "FAE", nullptr));
        accountLbl->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        productVariantLbl->setText(QCoreApplication::translate("MainWindow", "Product Variant: ", nullptr));
        articleNumberLbl->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        locationLbl->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        accountLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "C137", nullptr));
        commentsLbl->setText(QCoreApplication::translate("MainWindow", "Comments:", nullptr));
        productRevisionLbl->setText(QCoreApplication::translate("MainWindow", "Product Revision: ", nullptr));
        serialNumberLbl->setText(QCoreApplication::translate("MainWindow", "Serial Number:", nullptr));
        productVariantBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Standard", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        productImageLbl->setText(QCoreApplication::translate("MainWindow", "Product Image", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        addProductBtn->setText(QCoreApplication::translate("MainWindow", "Add Product to Inventory", nullptr));
        clearBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Add Product", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        confirmProductDeleteBtn->setText(QCoreApplication::translate("MainWindow", "Confirm Product", nullptr));
        deleteProductBtn->setText(QCoreApplication::translate("MainWindow", "Delete Product", nullptr));
        clearDeleteParametersBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "Deletion Information", nullptr));
        productClassDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Product Class:", nullptr));
        productClassDeleteCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "Displays", nullptr));
        productClassDeleteCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "Cables", nullptr));

        serialNumberDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Serial Number:", nullptr));
        accountDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        accountDeleteLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "C137", nullptr));
        articleNumberDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        articleDeleteLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "FAE", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("MainWindow", "Discovered Product Infromation", nullptr));
        serialNumberDeleteLbl_2->setText(QCoreApplication::translate("MainWindow", "Serial Number:", nullptr));
        articleNumberDeleteLbl_2->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        productRevisionDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Product Revision: ", nullptr));
        locationDeleteConfirmBx->setText(QString());
        locationDeleteConfirmBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Burlington, VT", nullptr));
        articleDeleteConfirmLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "FAE", nullptr));
        locationDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        productVariantDeleteConfirmBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Standard", nullptr));
        accountDeleteConfirmLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "C137", nullptr));
        commentsDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Comments:", nullptr));
        productVariantDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Product Variant: ", nullptr));
        accountDeleteLbl_2->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        productClassConfirmDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Product Class: ", nullptr));
        productTypeDeleteConfirmLbl->setText(QCoreApplication::translate("MainWindow", "Product Type: ", nullptr));
        productStatusDeleteLbl->setText(QCoreApplication::translate("MainWindow", "Product Status: ", nullptr));
        productClassDeleteConfirmInfo->setText(QString());
        productTypeDeleteConfirmInfo->setText(QString());
        productStatusDeleteInfo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Delete Product", nullptr));
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
