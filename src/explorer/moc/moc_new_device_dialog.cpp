/****************************************************************************
** Meta object code from reading C++ file 'new_device_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../new_device_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_device_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewDeviceDialog_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewDeviceDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewDeviceDialog_t qt_meta_stringdata_NewDeviceDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "NewDeviceDialog"
QT_MOC_LITERAL(1, 16, 16), // "new_device_added"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "name"
QT_MOC_LITERAL(4, 39, 5), // "topic"
QT_MOC_LITERAL(5, 45, 11), // "device_type"
QT_MOC_LITERAL(6, 57, 13), // "on_ok_clicked"
QT_MOC_LITERAL(7, 71, 17) // "on_cancel_clicked"

    },
    "NewDeviceDialog\0new_device_added\0\0"
    "name\0topic\0device_type\0on_ok_clicked\0"
    "on_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewDeviceDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   36,    2, 0x08 /* Private */,
       7,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewDeviceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewDeviceDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->new_device_added((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->on_ok_clicked(); break;
        case 2: _t->on_cancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewDeviceDialog::*)(QString , QString , unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewDeviceDialog::new_device_added)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NewDeviceDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_NewDeviceDialog.data,
    qt_meta_data_NewDeviceDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewDeviceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewDeviceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewDeviceDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NewDeviceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void NewDeviceDialog::new_device_added(QString _t1, QString _t2, unsigned  _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
