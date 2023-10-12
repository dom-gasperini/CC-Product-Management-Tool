/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
 *
 * Database Manager Class
*/

// includes
#include "DatabaseManager.h"


/**
 * @brief DatabaseManager::DatabaseManager
 * @param path
 */
DatabaseManager::DatabaseManager(QString path)
{
    // inits
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if (!m_db.open()) {
        m_databaseActive = true;
        qDebug() << "Database Connection Status: ERROR";
    }
    else {
        m_databaseActive = false;
        qDebug() << "Database Connection Status: OK";
    }
}


/**
 * @brief DatabaseManager::addProduct
 * @param product
 * @return
 */
bool DatabaseManager::addProduct(ProductData product)
{
   // inits
   bool success = false;
   QSqlQuery query;
   QString queryStr, values;

   // prepare query
   values = product.productTypeToQString() + "";
   queryStr = "INSERT INTO " + product.productClassToQString() + " VALUES " + values;
   query.prepare(queryStr);
   qDebug() << "Query: " << queryStr;

   // execute query
   if(query.exec()) {
       success = true;
   }

   if (success) {
       qDebug() << "Add Product Status: OK";
   }
   else {
       qDebug() << "Add Product Status: ERROR";
   }

   return success;
}


/**
 * @brief DatabaseManager::removeProduct
 * @param product
 * @return
 */
bool DatabaseManager::removeProduct(ProductData product, QString paramType, QString param) {
    // inits
    bool success = false;
    QSqlQuery query;
    QString queryStr;

    // prepare query
    queryStr = "DELETE " + paramType + " FROM " + product.productClassToQString() + " WHERE " + paramType + "=" + param;
    query.prepare(queryStr);
    qDebug() << "Query: " << queryStr;

    // execute query
    if (query.exec()) {
       // ensure product exists in database
       if (query.next()) {
            QSqlQuery query;
            query.prepare(queryStr);
            success = query.exec();
       }
    }

    if(success) {
        qDebug() << "Remove Product Status: OK";
    }
    else {
        qDebug() << "Remove Product Status: ERROR";
    }

    return success;
}

/**
 * @brief DatabaseManager::findProduct
 * @param product
 * @return
 */
QVector<ProductData> DatabaseManager::findProduct(ProductData product, QString paramType, QString param) {
    // inits
    bool success = false;
    QSqlQuery query;
    QString queryStr;

    // prepare query
    query.prepare("SELECT " + paramType + " FROM " + product.productClassToQString() + " WHERE " + paramType + "=" + QString(""));
    qDebug() << "Query: " << queryStr;

    // execute query
    if (query.exec())
    {
       if (query.next())
       {
//           QSqlQuery query("SELECT * FROM people");
//           int idName = query.record().indexOf("name");
//           while (query.next())
//           {
//              QString name = query.value(idName).toString();
//              qDebug() << name;
//           }
       }
    }
}


/**
 * @brief DatabaseManager::getDatabaseActive
 * @return
 */
bool DatabaseManager::getDatabaseActive() {
    return m_databaseActive;
}
