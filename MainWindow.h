/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
 *
 * Main Window Class Header
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// includes
#include <QMainWindow>
#include <QTimer>
#include <AboutDlg.h>
#include <ProductData.h>
#include <DatabaseManager.h>
#include <QStyleFactory>
#include <QMessageBox>

// namespace
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // constuctor & destructor
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // windows
    AboutDlg* m_aboutDialog;

    // timers
    QTimer* m_displayUpdateTimer;

private:
    // UI
    Ui::MainWindow *ui;
    QPalette m_currentPalette;

    // data
    ProductData* m_productData;
    DatabaseManager* m_database;
    int m_refreshCounter;

private slots:
    void UpdateDisplay();

    void on_actionDark_Mode_toggled(bool arg1);
    void on_actionAbout_triggered();
    void on_clearBtn_clicked();
    void on_addProductBtn_clicked();
    void on_resetFiltersSearchBtn_clicked();
    void on_clearSearchBtn_clicked();
    void on_searchBtn_clicked();
    void on_openItemSearchBtn_clicked();
    void on_refreshAllBtn_clicked();
    void on_allProductsClassCmbx_currentTextChanged(const QString &arg1);
    void on_openItemAllBtn_clicked();
    void on_confirmProductDeleteBtn_clicked();
    void on_deleteProductBtn_clicked();
};
#endif // MAINWINDOW_H
