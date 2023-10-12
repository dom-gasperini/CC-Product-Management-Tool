/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
 *
 * Product Data Class
*/

// includes
#include "ProductData.h"


/**
 * @brief ProductData::ProductData
 */
ProductData::ProductData()
{
    // init variables

    // general product data
    m_productClass = NO_CLASS;
    m_productType = NO_TYPE;
    m_productStatus = NO_STATUS;

    // detailed product data
    m_productVariant = "";
    m_articleNumber = "";
    m_serialNumber = 0;
    m_productRevision = 0.0f;
    m_account = "";
    m_comments = "";
    m_location = "";

    // dated information
    m_buildDate = QDateTime(QDate(2023, 10, 12), QTime::currentTime());
    m_lastUpdate = QDateTime::currentDateTime();
    m_daysSinceLastUpdate = 0;
}


// -------------------------------------------------- //
//                      Functions
// -------------------------------------------------- //

QString ProductData::productClassToQString() {
    QString str = "";

    switch(this->getProductClass()) {
    case NO_CLASS:
        str = "No Class";
        break;
    case DISPLAY:
        str = "Display";
        break;
    case CABLE:
        str = "Cable";
        break;
    default:
        str = "No Class";
        break;
    }

    return str;
}

/**
 * @brief ProductData::productTypeToQString
 * @return
 */
QString ProductData::productTypeToQString() {
    QString str = "";

    switch(this->getProductType()) {
    case NO_TYPE:
        str = "No Display Type";
        break;
    case VI2:
        str = "VI-2";
        break;
    case VS:
        str = "VS";
        break;
    case V510:
        str = "V510";
        break;
    case V700:
        str = "V700";
        break;
    case V710:
        str = "V710";
        break;
    case V1000:
        str = "V1000";
        break;
    case V1200:
        str = "V1200";
        break;
    case X900:
        str = "X900";
        break;
    case X1200:
        str = "X1200";
        break;
    case X1400:
        str = "X1400";
        break;
    default:
        str = "No Display Type";
        break;
    }

    return str;
}

// -------------------------------------------------- //
//                      Getters
// -------------------------------------------------- //

ProductClass ProductData::getProductClass() {
    return m_productClass;
}

ProductType ProductData::getProductType() {
    return m_productType;
}

ProductStatus ProductData::getProductStatus() {
    return m_productStatus;
}

QString ProductData::getProductVariant() {
    return m_productVariant;
}

QString ProductData::getArticleNumber() {
    return m_articleNumber;
}

uint16_t ProductData::getSerialNumber() {
    return m_serialNumber;
}

float ProductData::getProductRevision() {
    return m_productRevision;
}

QString ProductData::getAccount() {
    return m_account;
}

QString ProductData::getComments() {
    return m_comments;
}

QString ProductData::getLocation() {
    return m_location;
}

QDateTime ProductData::getBuildDate() {
    return m_buildDate;
}

QDateTime ProductData::getLastUpdate() {
    return m_lastUpdate;
}

uint16_t ProductData::getDaysSinceLastUpdate() {
    QDateTime currentDateTime = QDateTime::currentDateTime();
    return m_lastUpdate.daysTo(currentDateTime);
}


// -------------------------------------------------- //
//                      Setters
// -------------------------------------------------- //

void ProductData::setProductClass(ProductClass productClass) {
    m_productClass = productClass;
}

void ProductData::setProductType(ProductType productType) {
    m_productType = productType;
}

void ProductData::setProductStatus(ProductStatus productStatus) {
    m_productStatus = productStatus;
}

void ProductData::setProductVariant(QString productVariant) {
    m_productVariant = productVariant;
}

void ProductData::setArticleNumber(QString articleNumber) {
    m_articleNumber = articleNumber;
}

void ProductData::setSerialNumber(uint16_t serialNumber) {
    m_serialNumber = serialNumber;
}

void ProductData::setProductRevision(float productRevision) {
    m_productRevision = productRevision;
}

void ProductData::setAccount(QString account) {
    m_account = account;
}

void ProductData::setComments(QString comments) {
    m_comments = comments;
}

void ProductData::setLocation(QString location) {
    m_location = location;
}

void ProductData::setBuildDate(QDateTime buildDate) {
    m_buildDate = buildDate;
}

void ProductData::setLastUpdate(QDateTime lastUpdate) {
    m_lastUpdate = lastUpdate;
}

void ProductData::setDaysSinceLastUpdate() {

}
