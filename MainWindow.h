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

private slots:
    void UpdateDisplay();

    void on_actionDark_Mode_toggled(bool arg1);
    void on_actionAbout_triggered();
};
#endif // MAINWINDOW_H
