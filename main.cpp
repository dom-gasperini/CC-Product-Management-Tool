/**
 * Dominic Gasperini
 * Cross Control
 * Product Database Managment Software
*/

// includes
#include "MainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
