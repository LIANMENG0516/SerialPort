/****************************************************************************
** Meta object code from reading C++ file 'maindisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maindisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainDisplay_t {
    QByteArrayData data[10];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainDisplay_t qt_meta_stringdata_MainDisplay = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainDisplay"
QT_MOC_LITERAL(1, 12, 16), // "on_timer_timeout"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "slot_RecvPortData"
QT_MOC_LITERAL(4, 48, 18), // "on_btnScan_clicked"
QT_MOC_LITERAL(5, 67, 18), // "on_btnOpen_clicked"
QT_MOC_LITERAL(6, 86, 19), // "on_btnClose_clicked"
QT_MOC_LITERAL(7, 106, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(8, 125, 22), // "on_btnClearRev_clicked"
QT_MOC_LITERAL(9, 148, 23) // "on_btnClearSend_clicked"

    },
    "MainDisplay\0on_timer_timeout\0\0"
    "slot_RecvPortData\0on_btnScan_clicked\0"
    "on_btnOpen_clicked\0on_btnClose_clicked\0"
    "on_btnSend_clicked\0on_btnClearRev_clicked\0"
    "on_btnClearSend_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainDisplay *_t = static_cast<MainDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_timer_timeout(); break;
        case 1: _t->slot_RecvPortData(); break;
        case 2: _t->on_btnScan_clicked(); break;
        case 3: _t->on_btnOpen_clicked(); break;
        case 4: _t->on_btnClose_clicked(); break;
        case 5: _t->on_btnSend_clicked(); break;
        case 6: _t->on_btnClearRev_clicked(); break;
        case 7: _t->on_btnClearSend_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainDisplay::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainDisplay.data,
      qt_meta_data_MainDisplay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainDisplay.stringdata0))
        return static_cast<void*>(const_cast< MainDisplay*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
