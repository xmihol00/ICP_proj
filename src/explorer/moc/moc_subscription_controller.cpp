/****************************************************************************
** Meta object code from reading C++ file 'subscription_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subscription_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subscription_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubscriptionController_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubscriptionController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubscriptionController_t qt_meta_stringdata_SubscriptionController = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SubscriptionController"
QT_MOC_LITERAL(1, 23, 20), // "subscription_success"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "topic"
QT_MOC_LITERAL(4, 51, 20), // "subscription_failure"
QT_MOC_LITERAL(5, 72, 22), // "unsubscription_success"
QT_MOC_LITERAL(6, 95, 22), // "unsubscription_failure"
QT_MOC_LITERAL(7, 118, 20), // "new_dashboard_device"
QT_MOC_LITERAL(8, 139, 11), // "std::string"
QT_MOC_LITERAL(9, 151, 24) // "dashboard_device_deleted"

    },
    "SubscriptionController\0subscription_success\0"
    "\0topic\0subscription_failure\0"
    "unsubscription_success\0unsubscription_failure\0"
    "new_dashboard_device\0std::string\0"
    "dashboard_device_deleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubscriptionController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,

       0        // eod
};

void SubscriptionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubscriptionController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subscription_success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->subscription_failure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->unsubscription_success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->unsubscription_failure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->new_dashboard_device((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 5: _t->dashboard_device_deleted((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubscriptionController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubscriptionController::subscription_success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SubscriptionController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubscriptionController::subscription_failure)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SubscriptionController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubscriptionController::unsubscription_success)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SubscriptionController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubscriptionController::unsubscription_failure)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SubscriptionController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SubscriptionController.data,
    qt_meta_data_SubscriptionController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SubscriptionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubscriptionController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubscriptionController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SubscriptionController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SubscriptionController::subscription_success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SubscriptionController::subscription_failure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SubscriptionController::unsubscription_success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SubscriptionController::unsubscription_failure(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
