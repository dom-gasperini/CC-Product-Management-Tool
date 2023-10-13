/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
*/

// includes
#include "MainWindow.h"
#include <QApplication>


/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    // inits
    QApplication a(argc, argv);
    MainWindow w;

    // do the thing
    w.show();
    return a.exec();
}
