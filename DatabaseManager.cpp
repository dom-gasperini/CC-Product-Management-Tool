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
bool DatabaseManager::addProduct(ProductData* product)
{
   // inits
   bool success = false;
   QSqlQuery query;
   QString queryStr, values;
   QString inserts = "(type, variant, article_number, serial_number, revision, account, comments, status, location)";

   // prepare query
   values = "\'" + product->productTypeToQString() + "\', ";
   values += "\'" + product->getProductVariant() + "\', ";
   values += "\'" + product->getArticleNumber() + "\', ";
   values += "\'" + QString::number(product->getSerialNumber()) + "\', ";
   values += "\'" + QString::number(product->getProductRevision()) + "\',";
   values += "\'" + product->getAccount() + "\', ";
   values += "\'" + product->getComments() + "\', ";
   values += "\'" + product->productStatusToQString() + "\', ";
   values += "\'" + product->getLocation() + "\'";
   queryStr = "INSERT INTO " + product->productClassToQString() + " " + inserts + " VALUES(" + values + ");";
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
bool DatabaseManager::removeProduct(ProductData* product, QString paramType, QString param) {
    // inits
    bool success = false;
    QSqlQuery query;
    QString queryStr;

    // prepare query
    queryStr = "DELETE " + paramType + " FROM " + product->productClassToQString() + " WHERE " + paramType + "=" + param;
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
void DatabaseManager::findProduct(QString productClass, QVector<QString> paramType, QVector<QString> param) {
    // inits
    QSqlQuery query;
    QString queryStr;
    QString whereClause = "";

    // prepare query
    if (paramType.length() > 1) {
        for (int i = 0; i < paramType.length() - 1; ++i) {
            whereClause += paramType.at(0) + "=\'" + param.at(0) + "\' AND ";
        }
        whereClause += paramType.at(paramType.length() -1) + + "=\'" + param.at(paramType.length() - 1) + "\';";
    }
    else {
        whereClause = paramType.at(0) + "=\'" + param.at(0) + "\';";
    }

    queryStr = "SELECT * FROM " + productClass + " WHERE " + whereClause;
    query.prepare(queryStr);
    qDebug() << "Query: " << queryStr;

    // execute query
    if (query.exec()) {
       if (query.next()) {
           while(query.next()) {
               ProductData tmpProduct;
               tmpProduct.setProductClass(tmpProduct.QStringToProductClass(productClass));
               tmpProduct.setProductType(tmpProduct.QStringToProductType(query.value(0).toString()));
               tmpProduct.setProductVariant(query.value(1).toString());
               tmpProduct.setArticleNumber(query.value(2).toString());
               tmpProduct.setSerialNumber(query.value(3).toInt());
               tmpProduct.setProductRevision(query.value(4).toFloat());
               tmpProduct.setAccount(query.value(5).toString());
               tmpProduct.setComments(query.value(6).toString());
               tmpProduct.setLocation(query.value(7).toString());
               tmpProduct.setProductStatus(tmpProduct.QStringToProductStatus(query.value(8).toString()));

//               for (int i = 0; i < 9; ++i) {
//                   qDebug() << query.value(i) << " ";
//               }
               m_searchResults.append(tmpProduct);
           }
       }
    }

    qDebug() << "Product List: ";
    for (auto i : m_searchResults) {
        qDebug() << i.productClassToQString() << " " << i.productTypeToQString() << " " << i.productStatusToQString() << " " << i.getProductRevision();
    }
}

/**
 * @brief DatabaseManager::printAll
 * @return
 */
QVector<ProductData> DatabaseManager::printAll() {
    // inits
    QVector<ProductData> productList;
    //           QSqlQuery query("SELECT * FROM people");
    //           int idName = query.record().indexOf("name");
    //           while (query.next())
    //           {
    //              QString name = query.value(idName).toString();
    //              qDebug() << name;
    //           }

    return productList;
}

/**
 * @brief DatabaseManager::clearSearchResults
 */
void DatabaseManager::clearSearchResults() {
    // clear em
    m_searchResults.clear();
}

QVector<ProductData> DatabaseManager::getSearchResults() {
    return m_searchResults;
}

/**
 * @brief DatabaseManager::getDatabaseActive
 * @return
 */
bool DatabaseManager::getDatabaseActive() {
    return m_databaseActive;
}
