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
        m_databaseActive = false;
        qDebug() << "Database Connection Status: ERROR";
    }
    else {
        m_databaseActive = true;
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
   QString inserts = "(type, variant, article_number, serial_number, revision, account, comments, status, location, build_date, last_update_date)";

   // prepare query
   values = "\'" + product->productTypeToQString() + "\', ";
   values += "\'" + product->getProductVariant() + "\', ";
   values += "\'" + product->getArticleNumber() + "\', ";
   values += "\'" + QString::number(product->getSerialNumber()) + "\', ";
   values += "\'" + QString::number(product->getProductRevision()) + "\',";
   values += "\'" + product->getAccount() + "\', ";
   values += "\'" + product->getComments() + "\', ";
   values += "\'" + product->productStatusToQString() + "\', ";
   values += "\'" + product->getLocation() + "\', ";
   values += "\'" + product->getBuildDate() + "\', ";
   values += "\'" + product->getLastUpdate() + "\'";
   queryStr = "INSERT INTO " + product->productClassToQString() + " " + inserts + " VALUES(" + values + ");";
   query.prepare(queryStr);
   qDebug() << "Query: " << queryStr;

   // execute query
   if(query.exec()) {
       success = true;
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
bool DatabaseManager::removeProduct(QString productClass, int serialNumber, QString account, QString article, bool confirmDelete) {
    // inits
    bool success = false;
    QSqlQuery query;
    QString queryStr;

    // confirm the existance of a product and prepare product for deletion
    if (!confirmDelete) {
        // prepare query
        queryStr = "SELECT * FROM " + productClass + " WHERE serial_number=\'" + QString::number(serialNumber) + "\' AND account=\'" + account + "\' AND article_number=\'" + article + "\';";
        query.prepare(queryStr);
        qDebug() << "Query: " << queryStr;

        // execute query
        if (query.exec()) {
           if (query.next()) {
               // copy over product information
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
               tmpProduct.setBuildDate(query.value(9).toString());
               tmpProduct.setLastUpdate(query.value(10).toString());

               // save product to delete
               m_productToDelete = tmpProduct;
               success = true;
           }
        }
    }

    // remove product from the database
    if (confirmDelete) {
        // prepare query
        queryStr = "DELETE FROM " + productClass + " WHERE serial_number=\'" + QString::number(serialNumber) + "\' AND account=\'" + account + "\' AND article_number=\'" + article + "\';";
        query.prepare(queryStr);
        qDebug() << "Query: " << queryStr;

        // execute query
        if (query.exec()) {
            success = true;
            qDebug() << "Remove Product Status: OK";
        }
        else {
            qDebug() << "Remove Product Status: ERROR";
        }
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

    // prepare search parameters
    if (paramType.length() > 1) {
        // if there is more than 1 parameter to search by, iterate through and build up a string tied together by ANDs
        for (int i = 0; i < paramType.length() - 1; ++i) {
            whereClause += paramType.at(0) + "=\'" + param.at(0) + "\' AND ";
        }
        whereClause += paramType.at(paramType.length() -1) + + "=\'" + param.at(paramType.length() - 1) + "\';";
    }
    // if there is only one parameter
    else {
        whereClause = paramType.at(0) + "=\'" + param.at(0) + "\';";
    }

    // prepare query
    queryStr = "SELECT * FROM " + productClass + " WHERE " + whereClause;
    query.prepare(queryStr);
    qDebug() << "Query: " << queryStr;

    // execute query
    if (query.exec()) {
       while(query.next()) {
           // copy product information
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
           tmpProduct.setBuildDate(query.value(9).toString());
           tmpProduct.setLastUpdate(query.value(10).toString());

           // add result to results vector
           m_searchResults.append(tmpProduct);
       }
    }
}


/**
 * @brief DatabaseManager::editProduct
 * @param productClass
 * @param serialNumber
 * @param account
 * @param article
 * @param confirmEdit
 * @return
 */
bool DatabaseManager::editProduct(QString productClass, int serialNumber, QString account, QString article, QVector<QString> paramEdit, bool confirmEdit) {
    // intis
    bool success = false;
    QSqlQuery query;
    QString queryStr, updatedValuesStr = "";
    QVector<QString> paramType({"type", "variant", "article_number", "revision", "account", "comments", "status", "location", "build_date", "last_update_date"});

    // confirm the existance of a product and prepare product for edits
    if (!confirmEdit) {
        // prepare query
        queryStr = "SELECT * FROM " + productClass + " WHERE serial_number=\'" + QString::number(serialNumber) + "\' AND account=\'" + account + "\' AND article_number=\'" + article + "\';";
        query.prepare(queryStr);
        qDebug() << "Query: " << queryStr;

        // execute query
        if (query.exec()) {
           if (query.next()) {
               // copy over product information
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
               tmpProduct.setBuildDate(query.value(9).toString());
               tmpProduct.setLastUpdate(query.value(10).toString());

               // save product to delete
               m_productToEdit = tmpProduct;
               success = true;
           }
        }
    }

    // finalize edits to the product
    if (confirmEdit) {
        // build SET statement
        for (int i = 0; i < paramType.length(); ++i) {
            if (i < paramType.length() - 1) {
                updatedValuesStr += paramType.at(i) + "=\'" + paramEdit.at(i) + "\', ";
            }
            else {
                updatedValuesStr += paramType.at(i) + "=\'" + paramEdit.at(i) + "\'";
            }
        }

        // prepare query
        queryStr = "UPDATE " + productClass + " SET " + updatedValuesStr + " WHERE serial_number=\'" + QString::number(serialNumber) + "\' AND account=\'" + account + "\' AND article_number=\'" + article + "\';";
        query.prepare(queryStr);
        qDebug() << "Query: " << queryStr;

        // execute query
        if (query.exec()) {
            success = true;
            qDebug() << "Edit Product Status: OK";
        }
        else {
            qDebug() << "Edit Product Status: ERROR";
        }
        /*
         *  UPDATE table
            SET column_1 = new_value_1,
                column_2 = new_value_2
            WHERE
                search_condition
            ORDER column_or_expression
            LIMIT row_count OFFSET offset;
        */
    }

    return success;
}


/**
 * @brief DatabaseManager::printAll
 * @return
 */
void DatabaseManager::printAll(QString productClass) {
    // inits
    QSqlQuery query;

    // prepare query
    query.prepare("SELECT * FROM " + productClass);

    // execute query
    if (query.exec()) {
       while(query.next()) {\
           // copy product information
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
           tmpProduct.setBuildDate(query.value(9).toString());
           tmpProduct.setLastUpdate(query.value(10).toString());

           // add to vector of all products
           m_allProducts.append(tmpProduct);
       }
    }
}


/**
 * @brief DatabaseManager::clearSearchResults
 */
void DatabaseManager::clearSearchResults() {
    // clear em
    m_searchResults.clear();
}


/**
 * @brief DatabaseManager::clearAllProducts
 */
void DatabaseManager::clearAllProducts() {
    // clear em
    m_allProducts.clear();
}


/**
 * @brief DatabaseManager::getSearchResults
 * @return
 */
QVector<ProductData> DatabaseManager::getSearchResults() {
    return m_searchResults;
}


/**
 * @brief DatabaseManager::getAllProducts
 * @return
 */
QVector<ProductData> DatabaseManager::getAllProducts() {
    return m_allProducts;
}


/**
 * @brief DatabaseManager::getDatabaseActive
 * @return
 */
bool DatabaseManager::getDatabaseActive() {
    return m_databaseActive;
}


/**
 * @brief DatabaseManager::getProductToDelete
 * @return
 */
ProductData DatabaseManager::getProductToDelete() {
    return m_productToDelete;
}

/**
 * @brief DatabaseManager::getProductToEdit
 * @return
 */
ProductData DatabaseManager::getProductToEdit() {
    return m_productToEdit;
}
