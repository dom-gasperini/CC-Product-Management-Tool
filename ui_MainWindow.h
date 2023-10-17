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
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *add_tab;
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
    QWidget *delete_tab;
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
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_9;
    QLabel *label;
    QLabel *buildDateDeleteInfo;
    QLabel *label_2;
    QLabel *lastUpdateDeleteInfo;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_10;
    QLabel *label_6;
    QLabel *daysSinceLastUpdateDeleteInfo;
    QWidget *search_tab;
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
    QWidget *layoutWidget7;
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
    QWidget *edit_tab;
    QGroupBox *groupBox_15;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_11;
    QLabel *productClassConfirmEditLbl;
    QComboBox *productClassConfirmEditCmbx;
    QLabel *serialNumberConfirmEditLbl;
    QSpinBox *serialNumberConfirmEditSbx;
    QLabel *accountConfirmEditLbl;
    QLineEdit *accountConfirmEditLineBx;
    QLabel *articleNumberConfirmEditLbl;
    QLineEdit *articleConfirmEditLineBx;
    QGroupBox *groupBox_16;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_12;
    QLabel *commentsEditLbl;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *locationEditBx;
    QLabel *locationEditLbl;
    QDoubleSpinBox *productRevisionEditSbx;
    QTextEdit *commentsEditTbx;
    QLabel *accountEditLbl;
    QLineEdit *accountEditLineBx;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *productVariantEditBx;
    QLineEdit *articleEditLineBx;
    QSpacerItem *verticalSpacer_5;
    QLabel *productRevisionEditLbl;
    QLabel *articleNumberEditLbl;
    QLabel *productVariantEditLbl;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_13;
    QLabel *productTypeEditLbl;
    QLabel *productStatusEditLbl;
    QComboBox *productStatusEditCmbx;
    QComboBox *productTypeEditCmbx;
    QLabel *productClassEditLbl;
    QLabel *productClassEditInfo;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_14;
    QLabel *buildDateEditLbl;
    QLabel *lastUpdateEditLbl;
    QDateTimeEdit *buildDateEditDTBx;
    QDateTimeEdit *lastUpdateEditDTBx;
    QWidget *layoutWidget_9;
    QGridLayout *gridLayout_15;
    QLabel *daysSinceLastUpdateLbl;
    QLabel *daysSinceLastUpdateEditInfo;
    QGroupBox *groupBox_17;
    QPushButton *confirmProductEditBtn;
    QPushButton *editProductBtn;
    QPushButton *clearEditParametersBtn;
    QWidget *all_products_tab;
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 791, 561));
        add_tab = new QWidget();
        add_tab->setObjectName(QString::fromUtf8("add_tab"));
        groupBox = new QGroupBox(add_tab);
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

        groupBox_2 = new QGroupBox(add_tab);
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

        groupBox_3 = new QGroupBox(add_tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 170, 441, 351));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 20, 421, 321));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 6, 0, 1, 1);

        locationBx = new QLineEdit(layoutWidget2);
        locationBx->setObjectName(QString::fromUtf8("locationBx"));
        locationBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(locationBx, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 7, 1, 1, 1);

        commentsTbx = new QTextEdit(layoutWidget2);
        commentsTbx->setObjectName(QString::fromUtf8("commentsTbx"));
        commentsTbx->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(commentsTbx, 8, 0, 1, 2);

        articleLineBx = new QLineEdit(layoutWidget2);
        articleLineBx->setObjectName(QString::fromUtf8("articleLineBx"));
        articleLineBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(articleLineBx, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 6, 1, 1, 1);

        productRevisionSbx = new QDoubleSpinBox(layoutWidget2);
        productRevisionSbx->setObjectName(QString::fromUtf8("productRevisionSbx"));
        productRevisionSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        productRevisionSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionSbx->setDecimals(1);
        productRevisionSbx->setValue(1.000000000000000);

        gridLayout_3->addWidget(productRevisionSbx, 1, 1, 1, 1);

        accountLbl = new QLabel(layoutWidget2);
        accountLbl->setObjectName(QString::fromUtf8("accountLbl"));

        gridLayout_3->addWidget(accountLbl, 2, 0, 1, 1);

        productVariantLbl = new QLabel(layoutWidget2);
        productVariantLbl->setObjectName(QString::fromUtf8("productVariantLbl"));

        gridLayout_3->addWidget(productVariantLbl, 3, 0, 1, 1);

        articleNumberLbl = new QLabel(layoutWidget2);
        articleNumberLbl->setObjectName(QString::fromUtf8("articleNumberLbl"));

        gridLayout_3->addWidget(articleNumberLbl, 4, 0, 1, 1);

        locationLbl = new QLabel(layoutWidget2);
        locationLbl->setObjectName(QString::fromUtf8("locationLbl"));

        gridLayout_3->addWidget(locationLbl, 5, 0, 1, 1);

        accountLineBx = new QLineEdit(layoutWidget2);
        accountLineBx->setObjectName(QString::fromUtf8("accountLineBx"));
        accountLineBx->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(accountLineBx, 2, 1, 1, 1);

        commentsLbl = new QLabel(layoutWidget2);
        commentsLbl->setObjectName(QString::fromUtf8("commentsLbl"));
        commentsLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(commentsLbl, 7, 0, 1, 1);

        productRevisionLbl = new QLabel(layoutWidget2);
        productRevisionLbl->setObjectName(QString::fromUtf8("productRevisionLbl"));

        gridLayout_3->addWidget(productRevisionLbl, 1, 0, 1, 1);

        serialNumberLbl = new QLabel(layoutWidget2);
        serialNumberLbl->setObjectName(QString::fromUtf8("serialNumberLbl"));

        gridLayout_3->addWidget(serialNumberLbl, 0, 0, 1, 1);

        serialNumberSbx = new QSpinBox(layoutWidget2);
        serialNumberSbx->setObjectName(QString::fromUtf8("serialNumberSbx"));
        serialNumberSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        serialNumberSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNumberSbx->setMaximum(999999999);

        gridLayout_3->addWidget(serialNumberSbx, 0, 1, 1, 1);

        productVariantBx = new QLineEdit(layoutWidget2);
        productVariantBx->setObjectName(QString::fromUtf8("productVariantBx"));
        productVariantBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(productVariantBx, 3, 1, 1, 1);

        groupBox_4 = new QGroupBox(add_tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(470, 220, 300, 300));
        groupBox_4->setMinimumSize(QSize(300, 300));
        groupBox_4->setMaximumSize(QSize(300, 300));
        productImageLbl = new QLabel(groupBox_4);
        productImageLbl->setObjectName(QString::fromUtf8("productImageLbl"));
        productImageLbl->setGeometry(QRect(10, 30, 281, 261));
        productImageLbl->setAlignment(Qt::AlignCenter);
        groupBox_5 = new QGroupBox(add_tab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(570, 10, 191, 201));
        addProductBtn = new QPushButton(groupBox_5);
        addProductBtn->setObjectName(QString::fromUtf8("addProductBtn"));
        addProductBtn->setGeometry(QRect(10, 30, 171, 61));
        clearBtn = new QPushButton(groupBox_5);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));
        clearBtn->setGeometry(QRect(10, 120, 171, 61));
        tabWidget->addTab(add_tab, QString());
        delete_tab = new QWidget();
        delete_tab->setObjectName(QString::fromUtf8("delete_tab"));
        groupBox_12 = new QGroupBox(delete_tab);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setGeometry(QRect(380, 10, 401, 171));
        confirmProductDeleteBtn = new QPushButton(groupBox_12);
        confirmProductDeleteBtn->setObjectName(QString::fromUtf8("confirmProductDeleteBtn"));
        confirmProductDeleteBtn->setGeometry(QRect(10, 30, 181, 61));
        deleteProductBtn = new QPushButton(groupBox_12);
        deleteProductBtn->setObjectName(QString::fromUtf8("deleteProductBtn"));
        deleteProductBtn->setGeometry(QRect(210, 30, 181, 61));
        deleteProductBtn->setCheckable(true);
        clearDeleteParametersBtn = new QPushButton(groupBox_12);
        clearDeleteParametersBtn->setObjectName(QString::fromUtf8("clearDeleteParametersBtn"));
        clearDeleteParametersBtn->setGeometry(QRect(10, 100, 381, 61));
        groupBox_13 = new QGroupBox(delete_tab);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(10, 10, 361, 171));
        layoutWidget3 = new QWidget(groupBox_13);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 341, 131));
        gridLayout_4 = new QGridLayout(layoutWidget3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        productClassDeleteLbl = new QLabel(layoutWidget3);
        productClassDeleteLbl->setObjectName(QString::fromUtf8("productClassDeleteLbl"));

        gridLayout_4->addWidget(productClassDeleteLbl, 0, 0, 1, 1);

        productClassDeleteCmbx = new QComboBox(layoutWidget3);
        productClassDeleteCmbx->addItem(QString());
        productClassDeleteCmbx->addItem(QString());
        productClassDeleteCmbx->setObjectName(QString::fromUtf8("productClassDeleteCmbx"));

        gridLayout_4->addWidget(productClassDeleteCmbx, 0, 1, 1, 1);

        serialNumberDeleteLbl = new QLabel(layoutWidget3);
        serialNumberDeleteLbl->setObjectName(QString::fromUtf8("serialNumberDeleteLbl"));

        gridLayout_4->addWidget(serialNumberDeleteLbl, 1, 0, 1, 1);

        serialNumberDeleteSbx = new QSpinBox(layoutWidget3);
        serialNumberDeleteSbx->setObjectName(QString::fromUtf8("serialNumberDeleteSbx"));
        serialNumberDeleteSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberDeleteSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        serialNumberDeleteSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNumberDeleteSbx->setMaximum(999999999);

        gridLayout_4->addWidget(serialNumberDeleteSbx, 1, 1, 1, 1);

        accountDeleteLbl = new QLabel(layoutWidget3);
        accountDeleteLbl->setObjectName(QString::fromUtf8("accountDeleteLbl"));

        gridLayout_4->addWidget(accountDeleteLbl, 2, 0, 1, 1);

        accountDeleteLineBx = new QLineEdit(layoutWidget3);
        accountDeleteLineBx->setObjectName(QString::fromUtf8("accountDeleteLineBx"));
        accountDeleteLineBx->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(accountDeleteLineBx, 2, 1, 1, 1);

        articleNumberDeleteLbl = new QLabel(layoutWidget3);
        articleNumberDeleteLbl->setObjectName(QString::fromUtf8("articleNumberDeleteLbl"));

        gridLayout_4->addWidget(articleNumberDeleteLbl, 3, 0, 1, 1);

        articleDeleteLineBx = new QLineEdit(layoutWidget3);
        articleDeleteLineBx->setObjectName(QString::fromUtf8("articleDeleteLineBx"));
        articleDeleteLineBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_4->addWidget(articleDeleteLineBx, 3, 1, 1, 1);

        groupBox_14 = new QGroupBox(delete_tab);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(10, 190, 771, 331));
        layoutWidget_2 = new QWidget(groupBox_14);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 421, 301));
        gridLayout_7 = new QGridLayout(layoutWidget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        serialNumberDeleteConfirmSbx = new QSpinBox(layoutWidget_2);
        serialNumberDeleteConfirmSbx->setObjectName(QString::fromUtf8("serialNumberDeleteConfirmSbx"));
        serialNumberDeleteConfirmSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberDeleteConfirmSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        serialNumberDeleteConfirmSbx->setReadOnly(true);
        serialNumberDeleteConfirmSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNumberDeleteConfirmSbx->setMaximum(999999999);

        gridLayout_7->addWidget(serialNumberDeleteConfirmSbx, 0, 1, 1, 1);

        serialNumberDeleteLbl_2 = new QLabel(layoutWidget_2);
        serialNumberDeleteLbl_2->setObjectName(QString::fromUtf8("serialNumberDeleteLbl_2"));

        gridLayout_7->addWidget(serialNumberDeleteLbl_2, 0, 0, 1, 1);

        articleNumberDeleteLbl_2 = new QLabel(layoutWidget_2);
        articleNumberDeleteLbl_2->setObjectName(QString::fromUtf8("articleNumberDeleteLbl_2"));

        gridLayout_7->addWidget(articleNumberDeleteLbl_2, 4, 0, 1, 1);

        productRevisionDeleteLbl = new QLabel(layoutWidget_2);
        productRevisionDeleteLbl->setObjectName(QString::fromUtf8("productRevisionDeleteLbl"));

        gridLayout_7->addWidget(productRevisionDeleteLbl, 1, 0, 1, 1);

        locationDeleteConfirmBx = new QLineEdit(layoutWidget_2);
        locationDeleteConfirmBx->setObjectName(QString::fromUtf8("locationDeleteConfirmBx"));
        locationDeleteConfirmBx->setMaximumSize(QSize(250, 16777215));
        locationDeleteConfirmBx->setReadOnly(true);

        gridLayout_7->addWidget(locationDeleteConfirmBx, 5, 1, 1, 1);

        articleDeleteConfirmLineBx = new QLineEdit(layoutWidget_2);
        articleDeleteConfirmLineBx->setObjectName(QString::fromUtf8("articleDeleteConfirmLineBx"));
        articleDeleteConfirmLineBx->setMaximumSize(QSize(250, 16777215));
        articleDeleteConfirmLineBx->setReadOnly(true);

        gridLayout_7->addWidget(articleDeleteConfirmLineBx, 4, 1, 1, 1);

        commentsDeleteConfirmTbx = new QTextEdit(layoutWidget_2);
        commentsDeleteConfirmTbx->setObjectName(QString::fromUtf8("commentsDeleteConfirmTbx"));
        commentsDeleteConfirmTbx->setMaximumSize(QSize(16777215, 100));
        commentsDeleteConfirmTbx->setReadOnly(true);

        gridLayout_7->addWidget(commentsDeleteConfirmTbx, 8, 0, 1, 2);

        locationDeleteLbl = new QLabel(layoutWidget_2);
        locationDeleteLbl->setObjectName(QString::fromUtf8("locationDeleteLbl"));

        gridLayout_7->addWidget(locationDeleteLbl, 5, 0, 1, 1);

        productVariantDeleteConfirmBx = new QLineEdit(layoutWidget_2);
        productVariantDeleteConfirmBx->setObjectName(QString::fromUtf8("productVariantDeleteConfirmBx"));
        productVariantDeleteConfirmBx->setMaximumSize(QSize(250, 16777215));
        productVariantDeleteConfirmBx->setReadOnly(true);

        gridLayout_7->addWidget(productVariantDeleteConfirmBx, 3, 1, 1, 1);

        accountDeleteConfirmLineBx = new QLineEdit(layoutWidget_2);
        accountDeleteConfirmLineBx->setObjectName(QString::fromUtf8("accountDeleteConfirmLineBx"));
        accountDeleteConfirmLineBx->setMaximumSize(QSize(100, 16777215));
        accountDeleteConfirmLineBx->setReadOnly(true);

        gridLayout_7->addWidget(accountDeleteConfirmLineBx, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 7, 1, 1, 1);

        commentsDeleteLbl = new QLabel(layoutWidget_2);
        commentsDeleteLbl->setObjectName(QString::fromUtf8("commentsDeleteLbl"));
        commentsDeleteLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_7->addWidget(commentsDeleteLbl, 7, 0, 1, 1);

        productVariantDeleteLbl = new QLabel(layoutWidget_2);
        productVariantDeleteLbl->setObjectName(QString::fromUtf8("productVariantDeleteLbl"));

        gridLayout_7->addWidget(productVariantDeleteLbl, 3, 0, 1, 1);

        productRevisionDeleteConfirmSbx = new QDoubleSpinBox(layoutWidget_2);
        productRevisionDeleteConfirmSbx->setObjectName(QString::fromUtf8("productRevisionDeleteConfirmSbx"));
        productRevisionDeleteConfirmSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionDeleteConfirmSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        productRevisionDeleteConfirmSbx->setReadOnly(true);
        productRevisionDeleteConfirmSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionDeleteConfirmSbx->setDecimals(1);

        gridLayout_7->addWidget(productRevisionDeleteConfirmSbx, 1, 1, 1, 1);

        accountDeleteLbl_2 = new QLabel(layoutWidget_2);
        accountDeleteLbl_2->setObjectName(QString::fromUtf8("accountDeleteLbl_2"));

        gridLayout_7->addWidget(accountDeleteLbl_2, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 6, 1, 1, 1);

        layoutWidget4 = new QWidget(groupBox_14);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(450, 40, 251, 121));
        gridLayout_8 = new QGridLayout(layoutWidget4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        productClassConfirmDeleteLbl = new QLabel(layoutWidget4);
        productClassConfirmDeleteLbl->setObjectName(QString::fromUtf8("productClassConfirmDeleteLbl"));

        gridLayout_8->addWidget(productClassConfirmDeleteLbl, 0, 0, 1, 1);

        productTypeDeleteConfirmLbl = new QLabel(layoutWidget4);
        productTypeDeleteConfirmLbl->setObjectName(QString::fromUtf8("productTypeDeleteConfirmLbl"));

        gridLayout_8->addWidget(productTypeDeleteConfirmLbl, 1, 0, 1, 1);

        productStatusDeleteLbl = new QLabel(layoutWidget4);
        productStatusDeleteLbl->setObjectName(QString::fromUtf8("productStatusDeleteLbl"));

        gridLayout_8->addWidget(productStatusDeleteLbl, 2, 0, 1, 1);

        productClassDeleteConfirmInfo = new QLabel(layoutWidget4);
        productClassDeleteConfirmInfo->setObjectName(QString::fromUtf8("productClassDeleteConfirmInfo"));

        gridLayout_8->addWidget(productClassDeleteConfirmInfo, 0, 1, 1, 1);

        productTypeDeleteConfirmInfo = new QLabel(layoutWidget4);
        productTypeDeleteConfirmInfo->setObjectName(QString::fromUtf8("productTypeDeleteConfirmInfo"));

        gridLayout_8->addWidget(productTypeDeleteConfirmInfo, 1, 1, 1, 1);

        productStatusDeleteInfo = new QLabel(layoutWidget4);
        productStatusDeleteInfo->setObjectName(QString::fromUtf8("productStatusDeleteInfo"));

        gridLayout_8->addWidget(productStatusDeleteInfo, 2, 1, 1, 1);

        layoutWidget5 = new QWidget(groupBox_14);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(451, 191, 311, 61));
        gridLayout_9 = new QGridLayout(layoutWidget5);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_9->addWidget(label, 0, 0, 1, 1);

        buildDateDeleteInfo = new QLabel(layoutWidget5);
        buildDateDeleteInfo->setObjectName(QString::fromUtf8("buildDateDeleteInfo"));

        gridLayout_9->addWidget(buildDateDeleteInfo, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_9->addWidget(label_2, 1, 0, 1, 1);

        lastUpdateDeleteInfo = new QLabel(layoutWidget5);
        lastUpdateDeleteInfo->setObjectName(QString::fromUtf8("lastUpdateDeleteInfo"));

        gridLayout_9->addWidget(lastUpdateDeleteInfo, 1, 1, 1, 1);

        layoutWidget6 = new QWidget(groupBox_14);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(451, 261, 311, 31));
        gridLayout_10 = new QGridLayout(layoutWidget6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_10->addWidget(label_6, 0, 0, 1, 1);

        daysSinceLastUpdateDeleteInfo = new QLabel(layoutWidget6);
        daysSinceLastUpdateDeleteInfo->setObjectName(QString::fromUtf8("daysSinceLastUpdateDeleteInfo"));

        gridLayout_10->addWidget(daysSinceLastUpdateDeleteInfo, 0, 1, 1, 1);

        tabWidget->addTab(delete_tab, QString());
        search_tab = new QWidget();
        search_tab->setObjectName(QString::fromUtf8("search_tab"));
        groupBox_7 = new QGroupBox(search_tab);
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

        groupBox_9 = new QGroupBox(search_tab);
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
        groupBox_10 = new QGroupBox(search_tab);
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

        groupBox_8 = new QGroupBox(search_tab);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(370, 200, 151, 321));
        layoutWidget7 = new QWidget(groupBox_8);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 30, 131, 281));
        verticalLayout = new QVBoxLayout(layoutWidget7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        typeSearchCb = new QCheckBox(layoutWidget7);
        typeSearchCb->setObjectName(QString::fromUtf8("typeSearchCb"));

        verticalLayout->addWidget(typeSearchCb);

        statusSearchCb = new QCheckBox(layoutWidget7);
        statusSearchCb->setObjectName(QString::fromUtf8("statusSearchCb"));

        verticalLayout->addWidget(statusSearchCb);

        serialNumberSearchCb = new QCheckBox(layoutWidget7);
        serialNumberSearchCb->setObjectName(QString::fromUtf8("serialNumberSearchCb"));

        verticalLayout->addWidget(serialNumberSearchCb);

        revisionSearchCb = new QCheckBox(layoutWidget7);
        revisionSearchCb->setObjectName(QString::fromUtf8("revisionSearchCb"));

        verticalLayout->addWidget(revisionSearchCb);

        accountSearchCb = new QCheckBox(layoutWidget7);
        accountSearchCb->setObjectName(QString::fromUtf8("accountSearchCb"));

        verticalLayout->addWidget(accountSearchCb);

        varientSearchCb = new QCheckBox(layoutWidget7);
        varientSearchCb->setObjectName(QString::fromUtf8("varientSearchCb"));

        verticalLayout->addWidget(varientSearchCb);

        articleNumberSearchCb = new QCheckBox(layoutWidget7);
        articleNumberSearchCb->setObjectName(QString::fromUtf8("articleNumberSearchCb"));

        verticalLayout->addWidget(articleNumberSearchCb);

        locationSearchCb = new QCheckBox(layoutWidget7);
        locationSearchCb->setObjectName(QString::fromUtf8("locationSearchCb"));

        verticalLayout->addWidget(locationSearchCb);

        groupBox_6 = new QGroupBox(search_tab);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(270, 10, 511, 181));
        searchResultsList = new QListWidget(groupBox_6);
        searchResultsList->setObjectName(QString::fromUtf8("searchResultsList"));
        searchResultsList->setGeometry(QRect(10, 30, 491, 141));
        searchResultsList->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Fira Mono\";"));
        openItemSearchBtn = new QPushButton(search_tab);
        openItemSearchBtn->setObjectName(QString::fromUtf8("openItemSearchBtn"));
        openItemSearchBtn->setGeometry(QRect(550, 220, 211, 81));
        tabWidget->addTab(search_tab, QString());
        edit_tab = new QWidget();
        edit_tab->setObjectName(QString::fromUtf8("edit_tab"));
        groupBox_15 = new QGroupBox(edit_tab);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(10, 10, 361, 171));
        layoutWidget_5 = new QWidget(groupBox_15);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 30, 341, 131));
        gridLayout_11 = new QGridLayout(layoutWidget_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        productClassConfirmEditLbl = new QLabel(layoutWidget_5);
        productClassConfirmEditLbl->setObjectName(QString::fromUtf8("productClassConfirmEditLbl"));

        gridLayout_11->addWidget(productClassConfirmEditLbl, 0, 0, 1, 1);

        productClassConfirmEditCmbx = new QComboBox(layoutWidget_5);
        productClassConfirmEditCmbx->addItem(QString());
        productClassConfirmEditCmbx->addItem(QString());
        productClassConfirmEditCmbx->setObjectName(QString::fromUtf8("productClassConfirmEditCmbx"));

        gridLayout_11->addWidget(productClassConfirmEditCmbx, 0, 1, 1, 1);

        serialNumberConfirmEditLbl = new QLabel(layoutWidget_5);
        serialNumberConfirmEditLbl->setObjectName(QString::fromUtf8("serialNumberConfirmEditLbl"));

        gridLayout_11->addWidget(serialNumberConfirmEditLbl, 1, 0, 1, 1);

        serialNumberConfirmEditSbx = new QSpinBox(layoutWidget_5);
        serialNumberConfirmEditSbx->setObjectName(QString::fromUtf8("serialNumberConfirmEditSbx"));
        serialNumberConfirmEditSbx->setMaximumSize(QSize(75, 16777215));
        serialNumberConfirmEditSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        serialNumberConfirmEditSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        serialNumberConfirmEditSbx->setMaximum(999999999);

        gridLayout_11->addWidget(serialNumberConfirmEditSbx, 1, 1, 1, 1);

        accountConfirmEditLbl = new QLabel(layoutWidget_5);
        accountConfirmEditLbl->setObjectName(QString::fromUtf8("accountConfirmEditLbl"));

        gridLayout_11->addWidget(accountConfirmEditLbl, 2, 0, 1, 1);

        accountConfirmEditLineBx = new QLineEdit(layoutWidget_5);
        accountConfirmEditLineBx->setObjectName(QString::fromUtf8("accountConfirmEditLineBx"));
        accountConfirmEditLineBx->setMaximumSize(QSize(100, 16777215));

        gridLayout_11->addWidget(accountConfirmEditLineBx, 2, 1, 1, 1);

        articleNumberConfirmEditLbl = new QLabel(layoutWidget_5);
        articleNumberConfirmEditLbl->setObjectName(QString::fromUtf8("articleNumberConfirmEditLbl"));

        gridLayout_11->addWidget(articleNumberConfirmEditLbl, 3, 0, 1, 1);

        articleConfirmEditLineBx = new QLineEdit(layoutWidget_5);
        articleConfirmEditLineBx->setObjectName(QString::fromUtf8("articleConfirmEditLineBx"));
        articleConfirmEditLineBx->setMaximumSize(QSize(250, 16777215));

        gridLayout_11->addWidget(articleConfirmEditLineBx, 3, 1, 1, 1);

        groupBox_16 = new QGroupBox(edit_tab);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(10, 190, 771, 331));
        layoutWidget_6 = new QWidget(groupBox_16);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 20, 421, 302));
        gridLayout_12 = new QGridLayout(layoutWidget_6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        commentsEditLbl = new QLabel(layoutWidget_6);
        commentsEditLbl->setObjectName(QString::fromUtf8("commentsEditLbl"));
        commentsEditLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_12->addWidget(commentsEditLbl, 6, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_6, 5, 1, 1, 1);

        locationEditBx = new QLineEdit(layoutWidget_6);
        locationEditBx->setObjectName(QString::fromUtf8("locationEditBx"));
        locationEditBx->setMaximumSize(QSize(250, 16777215));
        locationEditBx->setReadOnly(false);

        gridLayout_12->addWidget(locationEditBx, 4, 1, 1, 1);

        locationEditLbl = new QLabel(layoutWidget_6);
        locationEditLbl->setObjectName(QString::fromUtf8("locationEditLbl"));

        gridLayout_12->addWidget(locationEditLbl, 4, 0, 1, 1);

        productRevisionEditSbx = new QDoubleSpinBox(layoutWidget_6);
        productRevisionEditSbx->setObjectName(QString::fromUtf8("productRevisionEditSbx"));
        productRevisionEditSbx->setMaximumSize(QSize(75, 16777215));
        productRevisionEditSbx->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        productRevisionEditSbx->setReadOnly(false);
        productRevisionEditSbx->setButtonSymbols(QAbstractSpinBox::NoButtons);
        productRevisionEditSbx->setDecimals(1);

        gridLayout_12->addWidget(productRevisionEditSbx, 0, 1, 1, 1);

        commentsEditTbx = new QTextEdit(layoutWidget_6);
        commentsEditTbx->setObjectName(QString::fromUtf8("commentsEditTbx"));
        commentsEditTbx->setMaximumSize(QSize(16777215, 100));
        commentsEditTbx->setReadOnly(false);

        gridLayout_12->addWidget(commentsEditTbx, 7, 0, 1, 2);

        accountEditLbl = new QLabel(layoutWidget_6);
        accountEditLbl->setObjectName(QString::fromUtf8("accountEditLbl"));

        gridLayout_12->addWidget(accountEditLbl, 1, 0, 1, 1);

        accountEditLineBx = new QLineEdit(layoutWidget_6);
        accountEditLineBx->setObjectName(QString::fromUtf8("accountEditLineBx"));
        accountEditLineBx->setMaximumSize(QSize(100, 16777215));
        accountEditLineBx->setReadOnly(false);

        gridLayout_12->addWidget(accountEditLineBx, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_3, 6, 1, 1, 1);

        productVariantEditBx = new QLineEdit(layoutWidget_6);
        productVariantEditBx->setObjectName(QString::fromUtf8("productVariantEditBx"));
        productVariantEditBx->setMaximumSize(QSize(250, 16777215));
        productVariantEditBx->setReadOnly(false);

        gridLayout_12->addWidget(productVariantEditBx, 2, 1, 1, 1);

        articleEditLineBx = new QLineEdit(layoutWidget_6);
        articleEditLineBx->setObjectName(QString::fromUtf8("articleEditLineBx"));
        articleEditLineBx->setMaximumSize(QSize(250, 16777215));
        articleEditLineBx->setReadOnly(false);

        gridLayout_12->addWidget(articleEditLineBx, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_5, 5, 0, 1, 1);

        productRevisionEditLbl = new QLabel(layoutWidget_6);
        productRevisionEditLbl->setObjectName(QString::fromUtf8("productRevisionEditLbl"));

        gridLayout_12->addWidget(productRevisionEditLbl, 0, 0, 1, 1);

        articleNumberEditLbl = new QLabel(layoutWidget_6);
        articleNumberEditLbl->setObjectName(QString::fromUtf8("articleNumberEditLbl"));

        gridLayout_12->addWidget(articleNumberEditLbl, 3, 0, 1, 1);

        productVariantEditLbl = new QLabel(layoutWidget_6);
        productVariantEditLbl->setObjectName(QString::fromUtf8("productVariantEditLbl"));

        gridLayout_12->addWidget(productVariantEditLbl, 2, 0, 1, 1);

        layoutWidget_7 = new QWidget(groupBox_16);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(450, 40, 311, 121));
        gridLayout_13 = new QGridLayout(layoutWidget_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        productTypeEditLbl = new QLabel(layoutWidget_7);
        productTypeEditLbl->setObjectName(QString::fromUtf8("productTypeEditLbl"));

        gridLayout_13->addWidget(productTypeEditLbl, 1, 0, 1, 1);

        productStatusEditLbl = new QLabel(layoutWidget_7);
        productStatusEditLbl->setObjectName(QString::fromUtf8("productStatusEditLbl"));

        gridLayout_13->addWidget(productStatusEditLbl, 2, 0, 1, 1);

        productStatusEditCmbx = new QComboBox(layoutWidget_7);
        productStatusEditCmbx->addItem(QString());
        productStatusEditCmbx->addItem(QString());
        productStatusEditCmbx->addItem(QString());
        productStatusEditCmbx->setObjectName(QString::fromUtf8("productStatusEditCmbx"));

        gridLayout_13->addWidget(productStatusEditCmbx, 2, 1, 1, 1);

        productTypeEditCmbx = new QComboBox(layoutWidget_7);
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->addItem(QString());
        productTypeEditCmbx->setObjectName(QString::fromUtf8("productTypeEditCmbx"));

        gridLayout_13->addWidget(productTypeEditCmbx, 1, 1, 1, 1);

        productClassEditLbl = new QLabel(layoutWidget_7);
        productClassEditLbl->setObjectName(QString::fromUtf8("productClassEditLbl"));

        gridLayout_13->addWidget(productClassEditLbl, 0, 0, 1, 1);

        productClassEditInfo = new QLabel(layoutWidget_7);
        productClassEditInfo->setObjectName(QString::fromUtf8("productClassEditInfo"));

        gridLayout_13->addWidget(productClassEditInfo, 0, 1, 1, 1);

        layoutWidget_8 = new QWidget(groupBox_16);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(451, 191, 311, 61));
        gridLayout_14 = new QGridLayout(layoutWidget_8);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        buildDateEditLbl = new QLabel(layoutWidget_8);
        buildDateEditLbl->setObjectName(QString::fromUtf8("buildDateEditLbl"));
        sizePolicy.setHeightForWidth(buildDateEditLbl->sizePolicy().hasHeightForWidth());
        buildDateEditLbl->setSizePolicy(sizePolicy);

        gridLayout_14->addWidget(buildDateEditLbl, 0, 0, 1, 1);

        lastUpdateEditLbl = new QLabel(layoutWidget_8);
        lastUpdateEditLbl->setObjectName(QString::fromUtf8("lastUpdateEditLbl"));
        sizePolicy.setHeightForWidth(lastUpdateEditLbl->sizePolicy().hasHeightForWidth());
        lastUpdateEditLbl->setSizePolicy(sizePolicy);

        gridLayout_14->addWidget(lastUpdateEditLbl, 1, 0, 1, 1);

        buildDateEditDTBx = new QDateTimeEdit(layoutWidget_8);
        buildDateEditDTBx->setObjectName(QString::fromUtf8("buildDateEditDTBx"));

        gridLayout_14->addWidget(buildDateEditDTBx, 0, 1, 1, 1);

        lastUpdateEditDTBx = new QDateTimeEdit(layoutWidget_8);
        lastUpdateEditDTBx->setObjectName(QString::fromUtf8("lastUpdateEditDTBx"));
        lastUpdateEditDTBx->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_14->addWidget(lastUpdateEditDTBx, 1, 1, 1, 1);

        layoutWidget_9 = new QWidget(groupBox_16);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(451, 261, 311, 31));
        gridLayout_15 = new QGridLayout(layoutWidget_9);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        daysSinceLastUpdateLbl = new QLabel(layoutWidget_9);
        daysSinceLastUpdateLbl->setObjectName(QString::fromUtf8("daysSinceLastUpdateLbl"));

        gridLayout_15->addWidget(daysSinceLastUpdateLbl, 0, 0, 1, 1);

        daysSinceLastUpdateEditInfo = new QLabel(layoutWidget_9);
        daysSinceLastUpdateEditInfo->setObjectName(QString::fromUtf8("daysSinceLastUpdateEditInfo"));

        gridLayout_15->addWidget(daysSinceLastUpdateEditInfo, 0, 1, 1, 1);

        groupBox_17 = new QGroupBox(edit_tab);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(380, 10, 401, 171));
        confirmProductEditBtn = new QPushButton(groupBox_17);
        confirmProductEditBtn->setObjectName(QString::fromUtf8("confirmProductEditBtn"));
        confirmProductEditBtn->setGeometry(QRect(10, 30, 181, 61));
        editProductBtn = new QPushButton(groupBox_17);
        editProductBtn->setObjectName(QString::fromUtf8("editProductBtn"));
        editProductBtn->setGeometry(QRect(210, 30, 181, 61));
        editProductBtn->setCheckable(true);
        clearEditParametersBtn = new QPushButton(groupBox_17);
        clearEditParametersBtn->setObjectName(QString::fromUtf8("clearEditParametersBtn"));
        clearEditParametersBtn->setGeometry(QRect(10, 100, 381, 61));
        tabWidget->addTab(edit_tab, QString());
        all_products_tab = new QWidget();
        all_products_tab->setObjectName(QString::fromUtf8("all_products_tab"));
        groupBox_11 = new QGroupBox(all_products_tab);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 10, 771, 461));
        allProductsList = new QListWidget(groupBox_11);
        allProductsList->setObjectName(QString::fromUtf8("allProductsList"));
        allProductsList->setGeometry(QRect(10, 30, 751, 421));
        allProductsList->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Fira Mono\";"));
        openItemAllBtn = new QPushButton(all_products_tab);
        openItemAllBtn->setObjectName(QString::fromUtf8("openItemAllBtn"));
        openItemAllBtn->setGeometry(QRect(610, 480, 171, 41));
        allProductsClassCmbx = new QComboBox(all_products_tab);
        allProductsClassCmbx->addItem(QString());
        allProductsClassCmbx->addItem(QString());
        allProductsClassCmbx->setObjectName(QString::fromUtf8("allProductsClassCmbx"));
        allProductsClassCmbx->setGeometry(QRect(160, 480, 111, 41));
        productClassAllLbl = new QLabel(all_products_tab);
        productClassAllLbl->setObjectName(QString::fromUtf8("productClassAllLbl"));
        productClassAllLbl->setGeometry(QRect(10, 490, 141, 16));
        refreshAllBtn = new QPushButton(all_products_tab);
        refreshAllBtn->setObjectName(QString::fromUtf8("refreshAllBtn"));
        refreshAllBtn->setGeometry(QRect(420, 480, 171, 41));
        tabWidget->addTab(all_products_tab, QString());
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
        QWidget::setTabOrder(productClassCmbx, productTypeCmbx);
        QWidget::setTabOrder(productTypeCmbx, productStatusCmbx);
        QWidget::setTabOrder(productStatusCmbx, serialNumberSbx);
        QWidget::setTabOrder(serialNumberSbx, productRevisionSbx);
        QWidget::setTabOrder(productRevisionSbx, accountLineBx);
        QWidget::setTabOrder(accountLineBx, productVariantBx);
        QWidget::setTabOrder(productVariantBx, articleLineBx);
        QWidget::setTabOrder(articleLineBx, locationBx);
        QWidget::setTabOrder(locationBx, commentsTbx);
        QWidget::setTabOrder(commentsTbx, buildDateDTBx);
        QWidget::setTabOrder(buildDateDTBx, inventoryDateDTBx);
        QWidget::setTabOrder(inventoryDateDTBx, addProductBtn);
        QWidget::setTabOrder(addProductBtn, clearBtn);
        QWidget::setTabOrder(clearBtn, tabWidget);
        QWidget::setTabOrder(tabWidget, productClassDeleteCmbx);
        QWidget::setTabOrder(productClassDeleteCmbx, serialNumberDeleteSbx);
        QWidget::setTabOrder(serialNumberDeleteSbx, accountDeleteLineBx);
        QWidget::setTabOrder(accountDeleteLineBx, articleDeleteLineBx);
        QWidget::setTabOrder(articleDeleteLineBx, serialNumberDeleteConfirmSbx);
        QWidget::setTabOrder(serialNumberDeleteConfirmSbx, productRevisionDeleteConfirmSbx);
        QWidget::setTabOrder(productRevisionDeleteConfirmSbx, accountDeleteConfirmLineBx);
        QWidget::setTabOrder(accountDeleteConfirmLineBx, productVariantDeleteConfirmBx);
        QWidget::setTabOrder(productVariantDeleteConfirmBx, articleDeleteConfirmLineBx);
        QWidget::setTabOrder(articleDeleteConfirmLineBx, locationDeleteConfirmBx);
        QWidget::setTabOrder(locationDeleteConfirmBx, commentsDeleteConfirmTbx);
        QWidget::setTabOrder(commentsDeleteConfirmTbx, confirmProductDeleteBtn);
        QWidget::setTabOrder(confirmProductDeleteBtn, clearDeleteParametersBtn);
        QWidget::setTabOrder(clearDeleteParametersBtn, deleteProductBtn);
        QWidget::setTabOrder(deleteProductBtn, productClassSearchCbx);
        QWidget::setTabOrder(productClassSearchCbx, typeSearchCbx);
        QWidget::setTabOrder(typeSearchCbx, statusSearchCbx);
        QWidget::setTabOrder(statusSearchCbx, searchBtn);
        QWidget::setTabOrder(searchBtn, clearSearchBtn);
        QWidget::setTabOrder(clearSearchBtn, resetFiltersSearchBtn);
        QWidget::setTabOrder(resetFiltersSearchBtn, articleSearchLineBx);
        QWidget::setTabOrder(articleSearchLineBx, productRevisionSearchSbx);
        QWidget::setTabOrder(productRevisionSearchSbx, locationSearchBx);
        QWidget::setTabOrder(locationSearchBx, serialNumberSearchSbx);
        QWidget::setTabOrder(serialNumberSearchSbx, accountSearchLineBx);
        QWidget::setTabOrder(accountSearchLineBx, productVariantSearchBx);
        QWidget::setTabOrder(productVariantSearchBx, typeSearchCb);
        QWidget::setTabOrder(typeSearchCb, statusSearchCb);
        QWidget::setTabOrder(statusSearchCb, serialNumberSearchCb);
        QWidget::setTabOrder(serialNumberSearchCb, revisionSearchCb);
        QWidget::setTabOrder(revisionSearchCb, accountSearchCb);
        QWidget::setTabOrder(accountSearchCb, varientSearchCb);
        QWidget::setTabOrder(varientSearchCb, articleNumberSearchCb);
        QWidget::setTabOrder(articleNumberSearchCb, locationSearchCb);
        QWidget::setTabOrder(locationSearchCb, searchResultsList);
        QWidget::setTabOrder(searchResultsList, openItemSearchBtn);
        QWidget::setTabOrder(openItemSearchBtn, allProductsList);
        QWidget::setTabOrder(allProductsList, openItemAllBtn);
        QWidget::setTabOrder(openItemAllBtn, allProductsClassCmbx);
        QWidget::setTabOrder(allProductsClassCmbx, refreshAllBtn);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionDark_Mode);
        menuOptions->addSeparator();
        menuOptions->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


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
        commentsTbx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Comments about the product", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(add_tab), QCoreApplication::translate("MainWindow", "Add Product", nullptr));
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
        label->setText(QCoreApplication::translate("MainWindow", "Build Date:", nullptr));
        buildDateDeleteInfo->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Last Update:", nullptr));
        lastUpdateDeleteInfo->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Days since last update: ", nullptr));
        daysSinceLastUpdateDeleteInfo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(delete_tab), QCoreApplication::translate("MainWindow", "Delete Product", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(search_tab), QCoreApplication::translate("MainWindow", "Find Product", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("MainWindow", "Search Information", nullptr));
        productClassConfirmEditLbl->setText(QCoreApplication::translate("MainWindow", "Product Class:", nullptr));
        productClassConfirmEditCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "Displays", nullptr));
        productClassConfirmEditCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "Cables", nullptr));

        serialNumberConfirmEditLbl->setText(QCoreApplication::translate("MainWindow", "Serial Number:", nullptr));
        accountConfirmEditLbl->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        accountConfirmEditLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "C137", nullptr));
        articleNumberConfirmEditLbl->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        articleConfirmEditLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "FAE", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("MainWindow", "Editable Product Information", nullptr));
        commentsEditLbl->setText(QCoreApplication::translate("MainWindow", "Comments:", nullptr));
        locationEditBx->setText(QString());
        locationEditBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Burlington, VT", nullptr));
        locationEditLbl->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        accountEditLbl->setText(QCoreApplication::translate("MainWindow", "Account: ", nullptr));
        accountEditLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "C137", nullptr));
        productVariantEditBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "Standard", nullptr));
        articleEditLineBx->setPlaceholderText(QCoreApplication::translate("MainWindow", "FAE", nullptr));
        productRevisionEditLbl->setText(QCoreApplication::translate("MainWindow", "Product Revision: ", nullptr));
        articleNumberEditLbl->setText(QCoreApplication::translate("MainWindow", "Article Number:", nullptr));
        productVariantEditLbl->setText(QCoreApplication::translate("MainWindow", "Product Variant: ", nullptr));
        productTypeEditLbl->setText(QCoreApplication::translate("MainWindow", "Product Type: ", nullptr));
        productStatusEditLbl->setText(QCoreApplication::translate("MainWindow", "Product Status: ", nullptr));
        productStatusEditCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "In-Stock", nullptr));
        productStatusEditCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "On-Loan", nullptr));
        productStatusEditCmbx->setItemText(2, QCoreApplication::translate("MainWindow", "FAE-Unit", nullptr));

        productTypeEditCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "VI-2", nullptr));
        productTypeEditCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "VS", nullptr));
        productTypeEditCmbx->setItemText(2, QCoreApplication::translate("MainWindow", "V510", nullptr));
        productTypeEditCmbx->setItemText(3, QCoreApplication::translate("MainWindow", "V700", nullptr));
        productTypeEditCmbx->setItemText(4, QCoreApplication::translate("MainWindow", "V710", nullptr));
        productTypeEditCmbx->setItemText(5, QCoreApplication::translate("MainWindow", "V1000", nullptr));
        productTypeEditCmbx->setItemText(6, QCoreApplication::translate("MainWindow", "V1200", nullptr));
        productTypeEditCmbx->setItemText(7, QCoreApplication::translate("MainWindow", "X900", nullptr));
        productTypeEditCmbx->setItemText(8, QCoreApplication::translate("MainWindow", "X1200", nullptr));
        productTypeEditCmbx->setItemText(9, QCoreApplication::translate("MainWindow", "X1400", nullptr));

        productClassEditLbl->setText(QCoreApplication::translate("MainWindow", "Product Class:", nullptr));
        productClassEditInfo->setText(QString());
        buildDateEditLbl->setText(QCoreApplication::translate("MainWindow", "Build Date:", nullptr));
        lastUpdateEditLbl->setText(QCoreApplication::translate("MainWindow", "Last Update:", nullptr));
        daysSinceLastUpdateLbl->setText(QCoreApplication::translate("MainWindow", "Days since last update: ", nullptr));
        daysSinceLastUpdateEditInfo->setText(QString());
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        confirmProductEditBtn->setText(QCoreApplication::translate("MainWindow", "Confirm Product", nullptr));
        editProductBtn->setText(QCoreApplication::translate("MainWindow", "Save Changes", nullptr));
        clearEditParametersBtn->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(edit_tab), QCoreApplication::translate("MainWindow", "Edit Product", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("MainWindow", "All Products", nullptr));
        openItemAllBtn->setText(QCoreApplication::translate("MainWindow", "Open Item", nullptr));
        allProductsClassCmbx->setItemText(0, QCoreApplication::translate("MainWindow", "Displays", nullptr));
        allProductsClassCmbx->setItemText(1, QCoreApplication::translate("MainWindow", "Cables", nullptr));

        productClassAllLbl->setText(QCoreApplication::translate("MainWindow", "Select Product Class: ", nullptr));
        refreshAllBtn->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(all_products_tab), QCoreApplication::translate("MainWindow", "Show All Products", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
