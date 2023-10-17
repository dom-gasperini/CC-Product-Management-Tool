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
    m_buildDate = QDateTime(QDate(2023, 10, 12), QTime::currentTime()).toString();
    m_lastUpdate = QDateTime::currentDateTime().toString();
    m_daysSinceLastUpdate = 0;
}


// -------------------------------------------------- //
//                      Functions
// -------------------------------------------------- //


/**
 * @brief ProductData::QStringToProductClass
 * @param str
 * @return
 */
ProductClass ProductData::QStringToProductClass(QString str) {
    ProductClass pclass = NO_CLASS;

    if (str == "Displays") {
        pclass = DISPLAY;
    }
    else if (str == "Cables") {
        pclass = CABLE;
    }
    else {
        pclass = NO_CLASS;
    }

    return pclass;
}


/**
 * @brief ProductData::QStringToProductStatus
 * @param str
 * @return
 */
ProductStatus ProductData::QStringToProductStatus(QString str) {
    ProductStatus status = NO_STATUS;

    if (str == "On-Loan") {
        status = ON_LOAN;
    }
    else if (str == "In-Stock") {
        status = IN_STOCK;
    }
    else if (str == "FAE-Unit") {
        status = FAE_UNIT;
    }
    else {
        qDebug() << "failed: " << str;
        status = NO_STATUS;
    }

    return status;
}


/**
 * @brief ProductData::QStringToProductType
 * @param str
 * @return
 */
ProductType ProductData::QStringToProductType(QString str) {
    ProductType type = NO_TYPE;

    if (str == "VI-2") {
        type = VI2;
    }
    else if (str == "VS") {
        type = VS;
    }
    else if (str == "V510") {
        type = V510;
    }
    else if (str == "V710") {
        type = V710;
    }
    else if (str == "V700") {
        type = V700;
    }
    else if (str == "V1000") {
        type = V1000;
    }
    else if (str == "V1200") {
        type = V1200;
    }
    else if (str == "X900") {
        type = X900;
    }
    else if (str == "X1200") {
        type = X1200;
    }
    else if (str == "X1400") {
        type = X1400;
    }
    else {
        type = NO_TYPE;
    }

    return type;
}

/**
 * @brief ProductData::productStatusToQString
 * @return
 */
QString ProductData::productStatusToQString() {
    QString str = "";

    switch(this->getProductStatus()) {
    case NO_STATUS:
        str = "No Status";
        break;
    case ON_LOAN:
        str = "On-Loan";
        break;
    case IN_STOCK:
        str = "In-Stock";
        break;
    case FAE_UNIT:
        str = "FAE-Unit";
        break;
    default:
        str = "No Status";
        break;
    }

    return str;
}

/**
 * @brief ProductData::productClassToQString
 * @return
 */
QString ProductData::productClassToQString() {
    QString str = "";

    switch(this->getProductClass()) {
    case NO_CLASS:
        str = "No Class";
        break;
    case DISPLAY:
        str = "Displays";
        break;
    case CABLE:
        str = "Cables";
        break;
    default:
        qDebug() << "failed: " << str;
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


/**
 * @brief ProductData::getProductClass
 * @return
 */
ProductClass ProductData::getProductClass() {
    return m_productClass;
}

/**
 * @brief ProductData::getProductType
 * @return
 */
ProductType ProductData::getProductType() {
    return m_productType;
}

/**
 * @brief ProductData::getProductStatus
 * @return
 */
ProductStatus ProductData::getProductStatus() {
    return m_productStatus;
}

/**
 * @brief ProductData::getProductVariant
 * @return
 */
QString ProductData::getProductVariant() {
    return m_productVariant;
}

/**
 * @brief ProductData::getArticleNumber
 * @return
 */
QString ProductData::getArticleNumber() {
    return m_articleNumber;
}

/**
 * @brief ProductData::getSerialNumber
 * @return
 */
uint16_t ProductData::getSerialNumber() {
    return m_serialNumber;
}

/**
 * @brief ProductData::getProductRevision
 * @return
 */
float ProductData::getProductRevision() {
    return m_productRevision;
}

/**
 * @brief ProductData::getAccount
 * @return
 */
QString ProductData::getAccount() {
    return m_account;
}

/**
 * @brief ProductData::getComments
 * @return
 */
QString ProductData::getComments() {
    return m_comments;
}

/**
 * @brief ProductData::getLocation
 * @return
 */
QString ProductData::getLocation() {
    return m_location;
}

/**
 * @brief ProductData::getBuildDate
 * @return
 */
QString ProductData::getBuildDate() {
    return m_buildDate;
}

/**
 * @brief ProductData::getLastUpdate
 * @return
 */
QString ProductData::getLastUpdate() {
    return m_lastUpdate;
}

/**
 * @brief ProductData::getDaysSinceLastUpdate
 * @return
 */
uint16_t ProductData::getDaysSinceLastUpdate() {
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QDateTime tmpLastUpdate = QDateTime::fromString(m_lastUpdate);
    int days = tmpLastUpdate.daysTo(currentDateTime);
    return days;
}


// -------------------------------------------------- //
//                      Setters
// -------------------------------------------------- //


/**
 * @brief ProductData::setProductClass
 * @param productClass
 */
void ProductData::setProductClass(ProductClass productClass) {
    m_productClass = productClass;
}

/**
 * @brief ProductData::setProductType
 * @param productType
 */
void ProductData::setProductType(ProductType productType) {
    m_productType = productType;
}

/**
 * @brief ProductData::setProductStatus
 * @param productStatus
 */
void ProductData::setProductStatus(ProductStatus productStatus) {
    m_productStatus = productStatus;
}

/**
 * @brief ProductData::setProductVariant
 * @param productVariant
 */
void ProductData::setProductVariant(QString productVariant) {
    m_productVariant = productVariant;
}

/**
 * @brief ProductData::setArticleNumber
 * @param articleNumber
 */
void ProductData::setArticleNumber(QString articleNumber) {
    m_articleNumber = articleNumber;
}

/**
 * @brief ProductData::setSerialNumber
 * @param serialNumber
 */
void ProductData::setSerialNumber(uint16_t serialNumber) {
    m_serialNumber = serialNumber;
}

/**
 * @brief ProductData::setProductRevision
 * @param productRevision
 */
void ProductData::setProductRevision(float productRevision) {
    m_productRevision = productRevision;
}

/**
 * @brief ProductData::setAccount
 * @param account
 */
void ProductData::setAccount(QString account) {
    m_account = account;
}

/**
 * @brief ProductData::setComments
 * @param comments
 */
void ProductData::setComments(QString comments) {
    m_comments = comments;
}

/**
 * @brief ProductData::setLocation
 * @param location
 */
void ProductData::setLocation(QString location) {
    m_location = location;
}

/**
 * @brief ProductData::setBuildDate
 * @param buildDate
 */
void ProductData::setBuildDate(QString buildDate) {
    m_buildDate = buildDate;
}

/**
 * @brief ProductData::setLastUpdate
 * @param lastUpdate
 */
void ProductData::setLastUpdate(QString lastUpdate) {
    m_lastUpdate = lastUpdate;
}

/**
 * @brief ProductData::setDaysSinceLastUpdate
 */
void ProductData::setDaysSinceLastUpdate() {

}
