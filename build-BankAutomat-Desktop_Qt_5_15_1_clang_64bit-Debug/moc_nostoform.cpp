/****************************************************************************
** Meta object code from reading C++ file 'nostoform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../BankAutomat/nostoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nostoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NostoForm_t {
    QByteArrayData data[10];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NostoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NostoForm_t qt_meta_stringdata_NostoForm = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NostoForm"
QT_MOC_LITERAL(1, 10, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "on_btn20euroa_clicked"
QT_MOC_LITERAL(4, 52, 21), // "on_btn40euroa_clicked"
QT_MOC_LITERAL(5, 74, 21), // "on_btn50euroa_clicked"
QT_MOC_LITERAL(6, 96, 21), // "on_btn60euroa_clicked"
QT_MOC_LITERAL(7, 118, 21), // "on_btn80euroa_clicked"
QT_MOC_LITERAL(8, 140, 22), // "on_btnVahvista_clicked"
QT_MOC_LITERAL(9, 163, 22) // "on_btn100euroa_clicked"

    },
    "NostoForm\0on_btnStop_clicked\0\0"
    "on_btn20euroa_clicked\0on_btn40euroa_clicked\0"
    "on_btn50euroa_clicked\0on_btn60euroa_clicked\0"
    "on_btn80euroa_clicked\0on_btnVahvista_clicked\0"
    "on_btn100euroa_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NostoForm[] = {

 // content:
       8,       // revision
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

void NostoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NostoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnStop_clicked(); break;
        case 1: _t->on_btn20euroa_clicked(); break;
        case 2: _t->on_btn40euroa_clicked(); break;
        case 3: _t->on_btn50euroa_clicked(); break;
        case 4: _t->on_btn60euroa_clicked(); break;
        case 5: _t->on_btn80euroa_clicked(); break;
        case 6: _t->on_btnVahvista_clicked(); break;
        case 7: _t->on_btn100euroa_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NostoForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NostoForm.data,
    qt_meta_data_NostoForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NostoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NostoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NostoForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NostoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
