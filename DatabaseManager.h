/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
 *
 * Database Manager Class Header
*/

#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H


// includes
#include <QString>
#include <QFile>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <ProductData.h>
#include <QDebug>


/**
 * @brief The DatabaseManager class
 */
class DatabaseManager
{
public:
    DatabaseManager(QString path);

    // functions
    bool addProduct(ProductData* product);
    bool removeProduct(QString productClass, int serialNumber, QString account, QString article, bool confirmDelete);
    void findProduct(QString productClass, QVector<QString> paramType, QVector<QString> param);
    void printAll(QString productClass);
    void clearSearchResults();
    void clearAllProducts();

    // getters
    bool getDatabaseActive();
    ProductData getProductToDelete();
    QVector<ProductData> getSearchResults();
    QVector<ProductData> getAllProducts();

private:
    // database variables
    QSqlDatabase m_db;
    bool m_databaseActive;
    QVector<ProductData> m_searchResults;
    QVector<ProductData> m_allProducts;
    ProductData m_productToDelete;
};

#endif // DATABASEMANAGER_H
