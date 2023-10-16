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
    this->setWindowIcon(QIcon(":/images/cc-logo.ico"));
    m_currentPalette = qApp->palette();
    ui->tabWidget->setCurrentIndex(0);
    ui->deleteProductBtn->setEnabled(false);
    m_databaseFilename = "cc-product-database.db";

    // setup about dialog
    m_aboutDialog = new AboutDlg();

    // setup timers
    m_displayUpdateTimer = new QTimer(this);
    connect(m_displayUpdateTimer, SIGNAL(timeout()), this, SLOT(UpdateDisplay()));
    m_displayUpdateTimer->start(DISPLAY_UPDATE_INTERVAL);

    // ensure database file exists
    m_databaseFileExists = false;
    if(QFile::exists(m_databaseFilename)){
        m_databaseFileExists = true;
    }

    // setup data
    m_productData = new ProductData();
    m_database = new DatabaseManager(m_databaseFilename);

    if (!m_databaseFileExists) {
        QMessageBox::critical(this, "Database Error!", "The database file was not found or is corrupted!");
    }
}


/**
 * @brief MainWindow::~MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}


/**
 * @brief MainWindow::UpdateDisplay
 */
void MainWindow::UpdateDisplay() {

    // add a product
    if (ui->tab_1->isActiveWindow()) {
        // set last updated
        ui->inventoryDateDTBx->setDateTime(QDateTime::currentDateTime());

        // set product image
        if (ui->productClassCmbx->currentText() == "Displays") {
            if (ui->productTypeCmbx->currentText() == "VI-2")
                ui->productImageLbl->setPixmap(QPixmap(":/images/vi.jpg").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "VS")
                ui->productImageLbl->setPixmap(QPixmap(":/images/vs.jpg").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "V510")
                ui->productImageLbl->setPixmap(QPixmap(":/images/v510.png").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "V700")
                ui->productImageLbl->setPixmap(QPixmap(":/images/v700.jpg").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "V710")
                ui->productImageLbl->setPixmap(QPixmap(":/images/v710.png").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "V1000")
                ui->productImageLbl->setPixmap(QPixmap(":/images/v1000.jpg").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "V1200")
                ui->productImageLbl->setPixmap(QPixmap(":/images/v1200.jpg").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "X900")
                ui->productImageLbl->setPixmap(QPixmap(":/images/x900.jpg").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "X1200")
                ui->productImageLbl->setPixmap(QPixmap(":/images/x1200.png").scaledToWidth(ui->productImageLbl->width()));
            if (ui->productTypeCmbx->currentText() == "X1400")
                ui->productImageLbl->setPixmap(QPixmap(":/images/x1400.jpg").scaledToWidth(ui->productImageLbl->width()));
        }
        else {
            ui->productImageLbl->setPixmap(QPixmap(":/images/cables.webp").scaledToWidth(ui->productImageLbl->width()));
        }
    }

    // remove a product
    if (ui->tab_2->isActiveWindow()) {
        // nothing needs to be done proactivly here
    }

    // search for a product or products
    if (ui->tab_3->isActiveWindow()) {
        // handle checkboxes
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

        // handle search button logic
        if (ui->typeSearchCb->isChecked() ||
                ui->statusSearchCb->isChecked() ||
                ui->serialNumberSearchCb->isChecked() ||
                ui->revisionSearchCb->isChecked() ||
                ui->accountSearchCb->isChecked() ||
                ui->varientSearchCb->isChecked() ||
                ui->articleNumberSearchCb->isChecked() ||
                ui->locationSearchCb->isChecked()) {
            ui->searchBtn->setEnabled(true);
        }
        else ui->searchBtn->setEnabled(false);
    }

    // view all products
    if (ui->tab_4->isActiveWindow()) {
        // if its empty
        if (ui->allProductsList->count() == 0) {
            on_refreshAllBtn_clicked();
        }
    }
}


/**
 * @brief MainWindow::on_actionDark_Mode_toggled
 * @param checked
 */
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


/**
 * @brief MainWindow::on_actionAbout_triggered
 */
void MainWindow::on_actionAbout_triggered()
{
    m_aboutDialog->show();
}


/**
 * @brief MainWindow::on_clearBtn_clicked
 */
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


/**
 * @brief MainWindow::on_addProductBtn_clicked
 */
void MainWindow::on_addProductBtn_clicked()
{
    // inits
    bool save, added;

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
        qDebug("close");
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

        m_productData->setBuildDate(ui->buildDateDTBx->dateTime().toString());
        m_productData->setLastUpdate(ui->inventoryDateDTBx->dateTime().toString());

        // save to database
        added = m_database->addProduct(m_productData);

        if (added) {
            // do popup
            QMessageBox::information(this, "Product Added", "The product was successfully added to the database!");
        }
    }
}


/**
 * @brief MainWindow::on_resetFiltersSearchBtn_clicked
 */
void MainWindow::on_resetFiltersSearchBtn_clicked()
{
    // set all to unchecked
    ui->typeSearchCb->setChecked(false);
    ui->statusSearchCb->setChecked(false);
    ui->serialNumberSearchCb->setChecked(false);
    ui->revisionSearchCb->setChecked(false);
    ui->accountSearchCb->setChecked(false);
    ui->varientSearchCb->setChecked(false);
    ui->articleNumberSearchCb->setChecked(false);
    ui->locationSearchCb->setChecked(false);
}


/**
 * @brief MainWindow::on_clearSearchBtn_clicked
 */
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


/**
 * @brief MainWindow::on_searchBtn_clicked
 */
void MainWindow::on_searchBtn_clicked()
{
    // inits
    QString productClass;
    QVector<QString> paramType, params;

    // gather search parameters
    productClass = ui->productClassSearchCbx->currentText();

    if (ui->typeSearchCb->isChecked()) {
        paramType.append("type");
        params.append(ui->typeSearchCbx->currentText());
    }
    if (ui->statusSearchCb->isChecked()) {
        paramType.append("status");
        params.append(ui->statusSearchCbx->currentText());
    }
    if (ui->serialNumberSearchCb->isChecked()) {
        paramType.append("serial_number");
        params.append(QString::number(ui->serialNumberSearchSbx->value()));
    }
    if (ui->revisionSearchCb->isChecked()) {
        paramType.append("revision");
        params.append(QString::number(ui->productRevisionSearchSbx->value()));
    }
    if (ui->accountSearchCb->isChecked()) {
        paramType.append("account_number");
        params.append(ui->accountSearchLineBx->text());
    }
    if (ui->varientSearchCb->isChecked()) {
        paramType.append("variant");
        params.append(ui->productVariantSearchBx->text());
    }
    if (ui->articleNumberSearchCb->isChecked()) {
        paramType.append("article");
        params.append(ui->articleSearchLineBx->text());
    }
    if (ui->locationSearchCb->isChecked()) {
        paramType.append("location");
        params.append(ui->locationSearchBx->text());
    }

//    qDebug() << "types: ";
//    for (auto i : paramType) {
//        qDebug() << QString(i);
//    }
//    qDebug() << "params: ";
//    for (auto i : params) {
//        qDebug() << i;
//    }

    // clear current results list
    m_database->clearSearchResults();
    ui->searchResultsList->clear();

    // do search
    m_database->findProduct(productClass, paramType, params);

    // handle different numbers of results
    if (m_database->getSearchResults().length() == 0) {
        QMessageBox::warning(this, "Search Results Warning", "No results found based upon the input parameters!");
    }

    else {
        // populate results
        for (ProductData i : m_database->getSearchResults()) {
            QString summarized = "";
            summarized += i.productClassToQString() + ": ";
            summarized += i.productTypeToQString() + " - ";
            summarized += i.productStatusToQString() + " | Owned by: ";
            summarized += i.getAccount();
            ui->searchResultsList->addItem(summarized);
        }
    }
}


/**
 * @brief MainWindow::on_openItemSearchBtn_clicked
 */
void MainWindow::on_openItemSearchBtn_clicked()
{
    // inits
    int itemIndex;
    QString productInfo = "";
    ProductData selectedProduct;

    // gather selected infromation
    itemIndex = ui->searchResultsList->currentRow();

    if (itemIndex == -1) {
        // do popup
        QMessageBox::warning(this, "Product Information", "No product selected!");
    }
    else {
        selectedProduct = m_database->getSearchResults().at(itemIndex);

        productInfo += "General Infromation:\n\n";
        productInfo += "Product Class: " + selectedProduct.productClassToQString() + "\n";
        productInfo += "Product Type: " + selectedProduct.productTypeToQString() + "\n";
        productInfo += "Product Status: " + selectedProduct.productStatusToQString() + "\n";
        productInfo += "Build Date: " + selectedProduct.getBuildDate() + "\n";
        productInfo += "Last Update: " + selectedProduct.getLastUpdate() + "\n";
        productInfo += "\n\n\nDetailed Information:\n\n";
        productInfo += "Account Number: " + selectedProduct.getAccount() + "\n";
        productInfo += "Serial Number: " + QString::number(selectedProduct.getSerialNumber()) + "\n";
        productInfo += "Revision: " + QString::number(selectedProduct.getProductRevision()) + "\n";
        productInfo += "Article Number: " + selectedProduct.getArticleNumber() + "\n";
        productInfo += "Location: " + selectedProduct.getLocation() + "\n";
        productInfo += "Comments: " + selectedProduct.getComments();

        // do popup
        QMessageBox::information(this, "Product Information", productInfo);
    }
}


/**
 * @brief MainWindow::on_refreshAllBtn_clicked
 */
void MainWindow::on_refreshAllBtn_clicked()
{
    // clear list of products
    m_database->clearAllProducts();
    ui->allProductsList->clear();

    // get list of all products
    m_database->printAll(ui->allProductsClassCmbx->currentText());

    // refresh list of all products
    for (ProductData i : m_database->getAllProducts()) {
        QString summarized = "";
        summarized += i.productClassToQString() + ": ";
        summarized += i.productTypeToQString() + " - ";
        summarized += i.productStatusToQString() + " | Owned by: ";
        summarized += i.getAccount();
        ui->allProductsList->addItem(summarized);
    }
}


/**
 * @brief MainWindow::on_allProductsClassCmbx_currentTextChanged
 * @param arg1
 */
void MainWindow::on_allProductsClassCmbx_currentTextChanged(const QString &arg1)
{
    on_refreshAllBtn_clicked();
}


/**
 * @brief MainWindow::on_openItemAllBtn_clicked
 */
void MainWindow::on_openItemAllBtn_clicked()
{
    // inits
    int itemIndex;
    QString productInfo = "";
    ProductData selectedProduct;

    // gather selected infromation
    itemIndex = ui->allProductsList->currentRow();

    if (itemIndex == -1) {
        // do popup
        QMessageBox::warning(this, "Product Information", "No product selected!");
    }
    else {
        selectedProduct = m_database->getAllProducts().at(itemIndex);

        productInfo += "General Infromation:\n\n";
        productInfo += "Product Class: " + selectedProduct.productClassToQString() + "\n";
        productInfo += "Product Type: " + selectedProduct.productTypeToQString() + "\n";
        productInfo += "Product Status: " + selectedProduct.productStatusToQString() + "\n";
        productInfo += "Build Date: " + selectedProduct.getBuildDate() + "\n";
        productInfo += "Last Update: " + selectedProduct.getLastUpdate() + "\n";
        productInfo += "\n\n\nDetailed Information:\n\n";
        productInfo += "Account Number: " + selectedProduct.getAccount() + "\n";
        productInfo += "Serial Number: " + QString::number(selectedProduct.getSerialNumber()) + "\n";
        productInfo += "Revision: " + QString::number(selectedProduct.getProductRevision()) + "\n";
        productInfo += "Article Number: " + selectedProduct.getArticleNumber() + "\n";
        productInfo += "Location: " + selectedProduct.getLocation() + "\n";
        productInfo += "Comments: " + selectedProduct.getComments();

        // do popup
        QMessageBox::information(this, "Product Information", productInfo);
    }
}


/**
 * @brief MainWindow::on_confirmProductDeleteBtn_clicked
 */
void MainWindow::on_confirmProductDeleteBtn_clicked()
{
    // inits
    bool confirmDelete;
    int serialNumber;
    QString productClass, account, article;
    ProductData tmpProduct;

    // gather information
    productClass = ui->productClassDeleteCmbx->currentText();
    account = ui->accountDeleteLineBx->text();
    serialNumber = ui->serialNumberDeleteSbx->value();
    article = ui->articleDeleteLineBx->text();

    // confirm product
    confirmDelete = m_database->removeProduct(productClass, serialNumber, account, article, false);

    if (confirmDelete) {
        // get product information
        tmpProduct = m_database->getProductToDelete();

        // populate information
        ui->productClassDeleteConfirmInfo->setText(tmpProduct.productClassToQString());
        ui->productTypeDeleteConfirmInfo->setText(tmpProduct.productTypeToQString());
        ui->productStatusDeleteInfo->setText(tmpProduct.productStatusToQString());
        ui->serialNumberDeleteConfirmSbx->setValue(tmpProduct.getSerialNumber());
        ui->productRevisionDeleteConfirmSbx->setValue(tmpProduct.getProductRevision());
        ui->accountDeleteConfirmLineBx->setText(tmpProduct.getAccount());
        ui->productVariantDeleteConfirmBx->setText(tmpProduct.getProductVariant());
        ui->articleDeleteConfirmLineBx->setText(tmpProduct.getArticleNumber());
        ui->locationDeleteConfirmBx->setText(tmpProduct.getLocation());
        ui->commentsDeleteConfirmTbx->setText(tmpProduct.getComments());
        ui->buildDateDeleteInfo->setText(tmpProduct.getBuildDate());
        ui->lastUpdateDeleteInfo->setText(tmpProduct.getLastUpdate());
        ui->daysSinceLastUpdateDeleteInfo->setText("");

        // allow for true deletion
        ui->deleteProductBtn->setEnabled(true);
    }
    else {
        QMessageBox::warning(this, "Product Confirmation", "This product could not be found!");
    }
}


/**
 * @brief MainWindow::on_deleteProductBtn_clicked
 */
void MainWindow::on_deleteProductBtn_clicked()
{
    bool deleteComplete;
    int serialNumber;
    QString productClass, account, article;

    // gather information
    productClass = ui->productClassDeleteConfirmInfo->text();
    account = ui->accountDeleteConfirmLineBx->text();
    serialNumber = ui->serialNumberDeleteConfirmSbx->value();
    article = ui->articleDeleteConfirmLineBx->text();

    // delete product
    deleteComplete = m_database->removeProduct(productClass, serialNumber, account, article, true);

    // popup
    if (deleteComplete) {
        QMessageBox::information(this, "Product Deletion", "The product has been deleted!");
    }

    // reset button state
    ui->deleteProductBtn->setEnabled(false);
}


/**
 * @brief MainWindow::on_clearDeleteParametersBtn_clicked
 */
void MainWindow::on_clearDeleteParametersBtn_clicked()
{
    // clear confirm product inputs
    ui->productClassDeleteCmbx->setCurrentIndex(0);
    ui->serialNumberDeleteConfirmSbx->clear();
    ui->accountDeleteLineBx->clear();
    ui->articleDeleteLineBx->clear();

    // clear discovered infromation
    ui->serialNumberDeleteSbx->clear();
    ui->productRevisionDeleteConfirmSbx->clear();
    ui->accountDeleteConfirmLineBx->clear();
    ui->productVariantDeleteConfirmBx->clear();
    ui->articleDeleteConfirmLineBx->clear();
    ui->locationDeleteConfirmBx->clear();
    ui->commentsDeleteConfirmTbx->clear();
    ui->productClassDeleteConfirmInfo->clear();
    ui->productTypeDeleteConfirmInfo->clear();
    ui->productStatusDeleteInfo->clear();
    ui->buildDateDeleteInfo->clear();
    ui->lastUpdateDeleteInfo->clear();
    ui->daysSinceLastUpdateDeleteInfo->clear();

}

