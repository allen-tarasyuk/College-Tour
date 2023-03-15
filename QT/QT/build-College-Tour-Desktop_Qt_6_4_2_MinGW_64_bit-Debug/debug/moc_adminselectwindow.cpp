/****************************************************************************
** Meta object code from reading C++ file 'adminselectwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../College-Tour/adminselectwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminselectwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_adminSelectWindow_t {
    uint offsetsAndSizes[18];
    char stringdata0[18];
    char stringdata1[39];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[47];
    char stringdata5[35];
    char stringdata6[32];
    char stringdata7[33];
    char stringdata8[34];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_adminSelectWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_adminSelectWindow_t qt_meta_stringdata_adminSelectWindow = {
    {
        QT_MOC_LITERAL(0, 17),  // "adminSelectWindow"
        QT_MOC_LITERAL(18, 38),  // "on_comboBox_school_currentInd..."
        QT_MOC_LITERAL(57, 0),  // ""
        QT_MOC_LITERAL(58, 5),  // "index"
        QT_MOC_LITERAL(64, 46),  // "on_comboBox_schoolSouvenir_cu..."
        QT_MOC_LITERAL(111, 34),  // "on_pushButton_souvenirEDIT_cl..."
        QT_MOC_LITERAL(146, 31),  // "on_pushButton_schoolADD_clicked"
        QT_MOC_LITERAL(178, 32),  // "on_pushButton_souvenirRM_clicked"
        QT_MOC_LITERAL(211, 33)   // "on_pushButton_souvenirADD_cli..."
    },
    "adminSelectWindow",
    "on_comboBox_school_currentIndexChanged",
    "",
    "index",
    "on_comboBox_schoolSouvenir_currentIndexChanged",
    "on_pushButton_souvenirEDIT_clicked",
    "on_pushButton_schoolADD_clicked",
    "on_pushButton_souvenirRM_clicked",
    "on_pushButton_souvenirADD_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_adminSelectWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    1 /* Private */,
       4,    1,   53,    2, 0x08,    3 /* Private */,
       5,    0,   56,    2, 0x08,    5 /* Private */,
       6,    0,   57,    2, 0x08,    6 /* Private */,
       7,    0,   58,    2, 0x08,    7 /* Private */,
       8,    0,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject adminSelectWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_adminSelectWindow.offsetsAndSizes,
    qt_meta_data_adminSelectWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_adminSelectWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<adminSelectWindow, std::true_type>,
        // method 'on_comboBox_school_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBox_schoolSouvenir_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_souvenirEDIT_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_schoolADD_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_souvenirRM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_souvenirADD_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void adminSelectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminSelectWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_comboBox_school_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_comboBox_schoolSouvenir_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_pushButton_souvenirEDIT_clicked(); break;
        case 3: _t->on_pushButton_schoolADD_clicked(); break;
        case 4: _t->on_pushButton_souvenirRM_clicked(); break;
        case 5: _t->on_pushButton_souvenirADD_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *adminSelectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminSelectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminSelectWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminSelectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
