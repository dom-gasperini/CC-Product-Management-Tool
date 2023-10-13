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
    bool removeProduct(ProductData* product, QString paramType, QString param);
    void findProduct(QString productClass, QVector<QString> paramType, QVector<QString> param);
    void printAll(QString productClass);
    void clearSearchResults();
    void clearAllProducts();

    // getters
    bool getDatabaseActive();
    QVector<ProductData> getSearchResults();
    QVector<ProductData> getAllProducts();

private:
    // database variables
    QSqlDatabase m_db;
    bool m_databaseActive;
    QVector<ProductData> m_searchResults;
    QVector<ProductData> m_allProducts;
};

#endif // DATABASEMANAGER_H
