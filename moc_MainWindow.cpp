/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[523];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 13), // "UpdateDisplay"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 26), // "on_actionDark_Mode_toggled"
QT_MOC_LITERAL(53, 4), // "arg1"
QT_MOC_LITERAL(58, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(83, 19), // "on_clearBtn_clicked"
QT_MOC_LITERAL(103, 24), // "on_addProductBtn_clicked"
QT_MOC_LITERAL(128, 32), // "on_resetFiltersSearchBtn_clicked"
QT_MOC_LITERAL(161, 25), // "on_clearSearchBtn_clicked"
QT_MOC_LITERAL(187, 20), // "on_searchBtn_clicked"
QT_MOC_LITERAL(208, 28), // "on_openItemSearchBtn_clicked"
QT_MOC_LITERAL(237, 24), // "on_refreshAllBtn_clicked"
QT_MOC_LITERAL(262, 42), // "on_allProductsClassCmbx_curre..."
QT_MOC_LITERAL(305, 25), // "on_openItemAllBtn_clicked"
QT_MOC_LITERAL(331, 34), // "on_confirmProductDeleteBtn_cl..."
QT_MOC_LITERAL(366, 27), // "on_deleteProductBtn_clicked"
QT_MOC_LITERAL(394, 35), // "on_clearDeleteParametersBtn_c..."
QT_MOC_LITERAL(430, 32), // "on_confirmProductEditBtn_clicked"
QT_MOC_LITERAL(463, 25), // "on_editProductBtn_clicked"
QT_MOC_LITERAL(489, 33) // "on_clearEditParametersBtn_cli..."

    },
    "MainWindow\0UpdateDisplay\0\0"
    "on_actionDark_Mode_toggled\0arg1\0"
    "on_actionAbout_triggered\0on_clearBtn_clicked\0"
    "on_addProductBtn_clicked\0"
    "on_resetFiltersSearchBtn_clicked\0"
    "on_clearSearchBtn_clicked\0"
    "on_searchBtn_clicked\0on_openItemSearchBtn_clicked\0"
    "on_refreshAllBtn_clicked\0"
    "on_allProductsClassCmbx_currentTextChanged\0"
    "on_openItemAllBtn_clicked\0"
    "on_confirmProductDeleteBtn_clicked\0"
    "on_deleteProductBtn_clicked\0"
    "on_clearDeleteParametersBtn_clicked\0"
    "on_confirmProductEditBtn_clicked\0"
    "on_editProductBtn_clicked\0"
    "on_clearEditParametersBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x08,    1 /* Private */,
       3,    1,  123,    2, 0x08,    2 /* Private */,
       5,    0,  126,    2, 0x08,    4 /* Private */,
       6,    0,  127,    2, 0x08,    5 /* Private */,
       7,    0,  128,    2, 0x08,    6 /* Private */,
       8,    0,  129,    2, 0x08,    7 /* Private */,
       9,    0,  130,    2, 0x08,    8 /* Private */,
      10,    0,  131,    2, 0x08,    9 /* Private */,
      11,    0,  132,    2, 0x08,   10 /* Private */,
      12,    0,  133,    2, 0x08,   11 /* Private */,
      13,    1,  134,    2, 0x08,   12 /* Private */,
      14,    0,  137,    2, 0x08,   14 /* Private */,
      15,    0,  138,    2, 0x08,   15 /* Private */,
      16,    0,  139,    2, 0x08,   16 /* Private */,
      17,    0,  140,    2, 0x08,   17 /* Private */,
      18,    0,  141,    2, 0x08,   18 /* Private */,
      19,    0,  142,    2, 0x08,   19 /* Private */,
      20,    0,  143,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateDisplay(); break;
        case 1: _t->on_actionDark_Mode_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->on_actionAbout_triggered(); break;
        case 3: _t->on_clearBtn_clicked(); break;
        case 4: _t->on_addProductBtn_clicked(); break;
        case 5: _t->on_resetFiltersSearchBtn_clicked(); break;
        case 6: _t->on_clearSearchBtn_clicked(); break;
        case 7: _t->on_searchBtn_clicked(); break;
        case 8: _t->on_openItemSearchBtn_clicked(); break;
        case 9: _t->on_refreshAllBtn_clicked(); break;
        case 10: _t->on_allProductsClassCmbx_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_openItemAllBtn_clicked(); break;
        case 12: _t->on_confirmProductDeleteBtn_clicked(); break;
        case 13: _t->on_deleteProductBtn_clicked(); break;
        case 14: _t->on_clearDeleteParametersBtn_clicked(); break;
        case 15: _t->on_confirmProductEditBtn_clicked(); break;
        case 16: _t->on_editProductBtn_clicked(); break;
        case 17: _t->on_clearEditParametersBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
