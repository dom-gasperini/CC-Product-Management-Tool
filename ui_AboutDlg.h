/********************************************************************************
** Form generated from reading UI file 'AboutDlg.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QPushButton *exitBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *TitleBtn;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *authorLbl;
    QLabel *authorNameLbl;
    QLabel *LogoLbl;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *qtVersionNumLbl;
    QLabel *qtVersionLbl;
    QLabel *cppVersionLbl;
    QLabel *cppVersionNumLbl;
    QLabel *qtLogoLbl;

    void setupUi(QDialog *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QString::fromUtf8("AboutDlg"));
        AboutDlg->resize(280, 500);
        AboutDlg->setMinimumSize(QSize(280, 500));
        AboutDlg->setMaximumSize(QSize(280, 500));
        exitBtn = new QPushButton(AboutDlg);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(10, 450, 261, 41));
        layoutWidget = new QWidget(AboutDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 261, 431));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TitleBtn = new QPushButton(layoutWidget);
        TitleBtn->setObjectName(QString::fromUtf8("TitleBtn"));
        TitleBtn->setStyleSheet(QString::fromUtf8("font: 500 oblique 25pt \"DejaVu Sans\";"));

        verticalLayout->addWidget(TitleBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        authorLbl = new QLabel(layoutWidget);
        authorLbl->setObjectName(QString::fromUtf8("authorLbl"));
        authorLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(authorLbl, 0, 0, 1, 1);

        authorNameLbl = new QLabel(layoutWidget);
        authorNameLbl->setObjectName(QString::fromUtf8("authorNameLbl"));
        authorNameLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(authorNameLbl, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout);

        LogoLbl = new QLabel(layoutWidget);
        LogoLbl->setObjectName(QString::fromUtf8("LogoLbl"));
        LogoLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(LogoLbl);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        qtVersionNumLbl = new QLabel(layoutWidget);
        qtVersionNumLbl->setObjectName(QString::fromUtf8("qtVersionNumLbl"));
        qtVersionNumLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(qtVersionNumLbl, 1, 1, 1, 1);

        qtVersionLbl = new QLabel(layoutWidget);
        qtVersionLbl->setObjectName(QString::fromUtf8("qtVersionLbl"));
        qtVersionLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(qtVersionLbl, 1, 0, 1, 1);

        cppVersionLbl = new QLabel(layoutWidget);
        cppVersionLbl->setObjectName(QString::fromUtf8("cppVersionLbl"));
        cppVersionLbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(cppVersionLbl, 0, 0, 1, 1);

        cppVersionNumLbl = new QLabel(layoutWidget);
        cppVersionNumLbl->setObjectName(QString::fromUtf8("cppVersionNumLbl"));
        cppVersionNumLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(cppVersionNumLbl, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        qtLogoLbl = new QLabel(layoutWidget);
        qtLogoLbl->setObjectName(QString::fromUtf8("qtLogoLbl"));
        qtLogoLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(qtLogoLbl);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(AboutDlg);

        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QDialog *AboutDlg)
    {
        AboutDlg->setWindowTitle(QCoreApplication::translate("AboutDlg", "Dialog", nullptr));
        exitBtn->setText(QCoreApplication::translate("AboutDlg", "Done", nullptr));
        TitleBtn->setText(QCoreApplication::translate("AboutDlg", "Product \n"
"Management \n"
"Tool", nullptr));
        authorLbl->setText(QCoreApplication::translate("AboutDlg", "Author:", nullptr));
        authorNameLbl->setText(QString());
        LogoLbl->setText(QCoreApplication::translate("AboutDlg", "Logo", nullptr));
        qtVersionNumLbl->setText(QCoreApplication::translate("AboutDlg", "QT VERSION", nullptr));
        qtVersionLbl->setText(QCoreApplication::translate("AboutDlg", "Qt Version:", nullptr));
        cppVersionLbl->setText(QCoreApplication::translate("AboutDlg", "C++ Version: ", nullptr));
        cppVersionNumLbl->setText(QCoreApplication::translate("AboutDlg", "C++ VERSION", nullptr));
        qtLogoLbl->setText(QCoreApplication::translate("AboutDlg", "Qt Logo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
