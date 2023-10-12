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

    // getters
    bool getDatabaseActive();

private:
    // database variables
    QSqlDatabase m_db;
    bool m_databaseActive;

    // functions
    bool addProduct(ProductData product);
    bool removeProduct(ProductData product, QString paramType, QString param);
    QVector<ProductData> findProduct(ProductData product, QString paramType, QString param);
};

#endif // DATABASEMANAGER_H
