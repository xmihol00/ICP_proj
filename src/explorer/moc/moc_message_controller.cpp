/****************************************************************************
** Meta object code from reading C++ file 'message_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../message_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessageController_t {
    QByteArrayData data[7];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessageController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessageController_t qt_meta_stringdata_MessageController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MessageController"
QT_MOC_LITERAL(1, 18, 15), // "publish_success"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "publish_failure"
QT_MOC_LITERAL(4, 51, 15), // "message_arrived"
QT_MOC_LITERAL(5, 67, 17), // "dashboared_opened"
QT_MOC_LITERAL(6, 85, 17) // "dashboared_closed"

    },
    "MessageController\0publish_success\0\0"
    "publish_failure\0message_arrived\0"
    "dashboared_opened\0dashboared_closed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MessageController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessageController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->publish_success(); break;
        case 1: _t->publish_failure(); break;
        case 2: _t->message_arrived(); break;
        case 3: _t->dashboared_opened(); break;
        case 4: _t->dashboared_closed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MessageController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageController::publish_success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessageController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageController::publish_failure)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MessageController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessageController::message_arrived)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MessageController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MessageController.data,
    qt_meta_data_MessageController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MessageController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessageController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MessageController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MessageController::publish_success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MessageController::publish_failure()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MessageController::message_arrived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
