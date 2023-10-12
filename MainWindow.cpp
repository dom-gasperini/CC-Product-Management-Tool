/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
 *
 * Product Data Main Window
*/


// includes
#include "MainWindow.h"
#include "ui_MainWindow.h"

// defines
#define DISPLAY_UPDATE_INTERVAL   200     // in milliseconds

/**
 * @brief MainWindow::MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // setup UI
    ui->setupUi(this);
    this->setWindowTitle("Cross Control Product Manager");
    this->setWindowIcon(QIcon(""));
    m_currentPalette = qApp->palette();
    ui->tabWidget->setCurrentIndex(0);

    // setup about dialog
    m_aboutDialog = new AboutDlg();

    // setup timers
    m_displayUpdateTimer = new QTimer(this);
    connect(m_displayUpdateTimer, SIGNAL(timeout()), this, SLOT(UpdateDisplay()));
    m_displayUpdateTimer->start(DISPLAY_UPDATE_INTERVAL);

    // setup data
    m_productData = new ProductData();
    m_database = new DatabaseManager("cc-product-database.db");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateDisplay() {
    // set database active status


    // tab switcher
    if (ui->tab_1->isActiveWindow()) {
        // set last updated
        ui->inventoryDateDTBx->setDateTime(QDateTime::currentDateTime());

        // set product image
        if (m_productData->getProductClass() == DISPLAY) {
            switch (m_productData->getProductType()) {
            case VI2:
                ui->productImageLbl->setPixmap(QPixmap("vi2.png"));
                break;
            case VS:
                break;
            case V510:
                break;
            case V700:
                break;
            case V710:
                break;
            case V1000:
                break;
            case V1200:
                break;
            case X900:
                break;
            case X1200:
                break;
            case X1400:
                break;

            default:
                break;
            }
        }
        else {
            ui->productImageLbl->setPixmap(QPixmap("cables.png"));
        }
    }

    if (ui->tab_2->isActiveWindow()) {

    }

    if (ui->tab_3->isActiveWindow()) {
        // handle checkboxes
        if (ui->classSearchCb->isChecked()) ui->productClassSearchCbx->setEnabled(true);
        else ui->productClassSearchCbx->setEnabled(false);
        if (ui->typeSearchCb->isChecked()) ui->typeSearchCbx->setEnabled(true);
        else ui->typeSearchCbx->setEnabled(false);
        if (ui->statusSearchCb->isChecked()) ui->statusSearchCbx->setEnabled(true);
        else ui->statusSearchCbx->setEnabled(false);
        if (ui->serialNumberSearchCb->isChecked()) ui->serialNumberSearchSbx->setEnabled(true);
        else ui->serialNumberSearchSbx->setEnabled(false);
        if (ui->revisionSearchCb->isChecked()) ui->productRevisionSearchSbx->setEnabled(true);
        else ui->productRevisionSearchSbx->setEnabled(false);
        if (ui->accountSearchCb->isChecked()) ui->accountSearchLineBx->setEnabled(true);
        else ui->accountSearchLineBx->setEnabled(false);
        if (ui->varientSearchCb->isChecked()) ui->productVariantSearchBx->setEnabled(true);
        else ui->productVariantSearchBx->setEnabled(false);
        if (ui->articleNumberSearchCb->isChecked()) ui->articleSearchLineBx->setEnabled(true);
        else ui->articleSearchLineBx->setEnabled(false);
        if (ui->locationSearchCb->isChecked()) ui->locationSearchBx->setEnabled(true);
        else ui->locationSearchBx->setEnabled(false);
    }

    if (ui->tab_4->isActiveWindow()) {

    }

}




void MainWindow::on_actionDark_Mode_toggled(bool checked) {
    if (checked) {
        // Set Style
        qApp->setStyle(QStyleFactory::create("Fusion"));
        // Init a Dark Mode Palette
        QPalette darkPalette;
        darkPalette.setColor(QPalette::Window,QColor(53,53,53));
        darkPalette.setColor(QPalette::WindowText,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::WindowText,QColor(127,127,127));
        darkPalette.setColor(QPalette::Base,QColor(42,42,42));
        darkPalette.setColor(QPalette::AlternateBase,QColor(66,66,66));
        darkPalette.setColor(QPalette::ToolTipBase,Qt::white);
        darkPalette.setColor(QPalette::ToolTipText,Qt::white);
        darkPalette.setColor(QPalette::Text,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::Text,QColor(127,127,127));
        darkPalette.setColor(QPalette::Dark,QColor(35,35,35));
        darkPalette.setColor(QPalette::Shadow,QColor(20,20,20));
        darkPalette.setColor(QPalette::Button,QColor(53,53,53));
        darkPalette.setColor(QPalette::ButtonText,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::ButtonText,QColor(127,127,127));
        darkPalette.setColor(QPalette::BrightText,Qt::red);
        darkPalette.setColor(QPalette::Link,QColor(42,130,218));
        darkPalette.setColor(QPalette::Highlight, QColor(142,45,197));
        darkPalette.setColor(QPalette::Disabled,QPalette::Highlight,QColor(80,80,80));
        darkPalette.setColor(QPalette::HighlightedText,Qt::white);
        darkPalette.setColor(QPalette::Disabled,QPalette::HighlightedText,QColor(127,127,127));

        // Set to Dark Mode
        qApp->setPalette(darkPalette);

        // Change Progress Bar Color to Green
        QPalette progressBarPalette;
        progressBarPalette.setColor(QPalette::Highlight, Qt::green);
    }

    else {
        // Reset Style to Windows Vista
        qApp->setStyle(QStyleFactory::create("windowsvista"));

        // Reset to Light Mode
        m_currentPalette.setColor(QPalette::Text, Qt::black);
        m_currentPalette.setColor(QPalette::HighlightedText, Qt::black);
        m_currentPalette.setColor(QPalette::Disabled, QPalette::ButtonText, Qt::black);
        m_currentPalette.setColor(QPalette::ButtonText,Qt::black);
        m_currentPalette.setColor(QPalette::HighlightedText, Qt::black);
        m_currentPalette.setColor(QPalette::Disabled, QPalette::Text, Qt::black);
        m_currentPalette.setColor(QPalette::WindowText, Qt::black);
        m_currentPalette.setColor(QPalette::Disabled, QPalette::WindowText, Qt::black);
        m_currentPalette.setColor(QPalette::ToolTipBase,Qt::black);
        m_currentPalette.setColor(QPalette::ToolTipText,Qt::black);
        m_currentPalette.setColor(QPalette::Disabled,QPalette::Highlight, Qt::black);
        m_currentPalette.setColor(QPalette::HighlightedText,Qt::black);
        m_currentPalette.setColor(QPalette::Disabled,QPalette::HighlightedText, Qt::black);
        m_currentPalette.setColor(QPalette::All, QPalette::ButtonText, Qt::black);
        m_currentPalette.setColor(QPalette::All, QPalette::Text, Qt::black);
        qApp->setPalette(m_currentPalette);
    }
}


void MainWindow::on_actionAbout_triggered()
{
    m_aboutDialog->show();
}


void MainWindow::on_clearBtn_clicked()
{
    // reset fields
    ui->productStatusCmbx->setCurrentIndex(0);
    ui->productClassCmbx->setCurrentIndex(0);
    ui->productTypeCmbx->setCurrentIndex(0);

    ui->serialNumberSbx->clear();
    ui->productRevisionSbx->clear();
    ui->accountLineBx->clear();
    ui->productVariantBx->clear();
    ui->articleLineBx->clear();
    ui->locationBx->clear();
    ui->commentsTbx->clear();

    ui->buildDateDTBx->clear();

    // reset variable data
    m_productData = new ProductData();
}


void MainWindow::on_addProductBtn_clicked()
{
    // inits
    bool save;

    // popup
    switch(QMessageBox::question(this, tr("Add Product to Inventory"), tr("Are you sure you want to add this product to the inventory?"), QMessageBox::Yes | QMessageBox::No))
    {
      case QMessageBox::Yes:
        save = true;
        break;
      case QMessageBox::No:
        save = false;
        break;
      default:
        save = false;
        qDebug( "close" );
        break;
    }

    // add product
    if (save) {
        // update product values
        m_productData->setProductClass(m_productData->QStringToProductClass(ui->productClassCmbx->currentText()));
        m_productData->setProductType(m_productData->QStringToProductType(ui->productTypeCmbx->currentText()));
        m_productData->setProductStatus(m_productData->QStringToProductStatus(ui->productStatusCmbx->currentText()));

        m_productData->setProductVariant(ui->productVariantBx->text());
        m_productData->setArticleNumber(ui->articleLineBx->text());
        m_productData->setSerialNumber(ui->serialNumberSbx->value());
        m_productData->setProductRevision(ui->productRevisionSbx->value());
        m_productData->setAccount(ui->accountLineBx->text());
        m_productData->setComments(ui->commentsTbx->toPlainText());
        m_productData->setLocation(ui->locationBx->text());

        m_productData->setBuildDate(ui->buildDateDTBx->dateTime());
        m_productData->setLastUpdate(ui->inventoryDateDTBx->dateTime());

        // save to database
        m_database->addProduct(m_productData);
    }
}


void MainWindow::on_resetFiltersSearchBtn_clicked()
{
    // set all to unchecked
    ui->classSearchCb->setChecked(false);
    ui->typeSearchCb->setChecked(false);
    ui->statusSearchCb->setChecked(false);
    ui->serialNumberSearchCb->setChecked(false);
    ui->revisionSearchCb->setChecked(false);
    ui->accountSearchCb->setChecked(false);
    ui->varientSearchCb->setChecked(false);
    ui->articleNumberSearchCb->setChecked(false);
    ui->locationSearchCb->setChecked(false);
}


void MainWindow::on_clearSearchBtn_clicked()
{
    // reset fields
    ui->productClassSearchCbx->setCurrentIndex(0);
    ui->typeSearchCbx->setCurrentIndex(0);
    ui->statusSearchCbx->setCurrentIndex(0);

    ui->serialNumberSearchSbx->clear();
    ui->productRevisionSearchSbx->clear();
    ui->accountSearchLineBx->clear();
    ui->productVariantSearchBx->clear();
    ui->articleSearchLineBx->clear();
    ui->locationSearchBx->clear();
}

