/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
 *
 * Product Data Class Header
*/

#ifndef PRODUCTDATA_H
#define PRODUCTDATA_H


// includes
#include <QObject>
#include <stdint.h>
#include <QDateTime>


// enumerations
typedef enum ProductClass {
    NO_CLASS,
    CABLE,
    DISPLAY,
} ProductClass;

typedef enum ProductType {
    NO_TYPE,
    VI2,
    VS,
    V510,
    V700,
    V710,
    V1000,
    V1200,
    X900,
    X1200,
    X1400,
} ProductType;

typedef enum ProductStatus {
    NO_STATUS,
    ON_LOAN,
    IN_STOCK,
    FAE_UNIT,
} ProductStatus;


/**
 * @brief The ProductData class
 */
class ProductData
{
//    Q_OBJECT

public:
    // constructor
    ProductData();

    // getters
    ProductClass getProductClass();
    ProductType getProductType();
    ProductStatus getProductStatus();

    QString getProductVariant();
    QString getArticleNumber();
    uint16_t getSerialNumber();
    float getProductRevision();
    QString getAccount();
    QString getComments();
    QString getLocation();

    QString getBuildDate();
    QString getLastUpdate();
    uint16_t getDaysSinceLastUpdate();

    // setters
    void setProductClass(ProductClass productClass);
    void setProductType(ProductType productType);
    void setProductStatus(ProductStatus productStatus);

    void setProductVariant(QString productVariant);
    void setArticleNumber(QString articleNumber);
    void setSerialNumber(uint16_t serialNumber);
    void setProductRevision(float productRevision);
    void setAccount(QString account);
    void setComments(QString comments);
    void setLocation(QString location);

    void setBuildDate(QString buildDate);
    void setLastUpdate(QString lastUpdate);
    void setDaysSinceLastUpdate();

    // functions
    QString productTypeToQString();
    QString productClassToQString();
    QString productStatusToQString();

    ProductStatus QStringToProductStatus(QString str);
    ProductClass QStringToProductClass(QString str);
    ProductType QStringToProductType(QString str);


private:
    // general product data
    ProductClass m_productClass;
    ProductType m_productType;
    ProductStatus m_productStatus;

    // detailed product data
    QString m_productVariant;
    QString m_articleNumber;
    uint16_t m_serialNumber;
    float m_productRevision;
    QString m_account;
    QString m_comments;
    QString m_location;

    // dates
    QString m_buildDate;
    QString m_lastUpdate;
    uint16_t m_daysSinceLastUpdate;
};


#endif // PRODUCTDATA_H
