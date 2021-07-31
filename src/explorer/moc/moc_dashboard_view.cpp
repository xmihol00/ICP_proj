/****************************************************************************
** Meta object code from reading C++ file 'dashboard_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dashboard_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DashboardView_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DashboardView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DashboardView_t qt_meta_stringdata_DashboardView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DashboardView"
QT_MOC_LITERAL(1, 14, 21), // "on_add_device_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_delete_device_clicked"
QT_MOC_LITERAL(4, 62, 10), // "add_device"
QT_MOC_LITERAL(5, 73, 4), // "name"
QT_MOC_LITERAL(6, 78, 5), // "topic"
QT_MOC_LITERAL(7, 84, 11), // "device_type"
QT_MOC_LITERAL(8, 96, 14), // "delete_devices"
QT_MOC_LITERAL(9, 111, 16) // "std::vector<int>"

    },
    "DashboardView\0on_add_device_clicked\0"
    "\0on_delete_device_clicked\0add_device\0"
    "name\0topic\0device_type\0delete_devices\0"
    "std::vector<int>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DashboardView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    3,   36,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void DashboardView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DashboardView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_device_clicked(); break;
        case 1: _t->on_delete_device_clicked(); break;
        case 2: _t->add_device((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 3: _t->delete_devices((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DashboardView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DashboardView.data,
    qt_meta_data_DashboardView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DashboardView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DashboardView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DashboardView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DashboardView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
