/****************************************************************************
** Meta object code from reading C++ file 'rep_simpleswitch_source.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "rep_simpleswitch_source.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rep_simpleswitch_source.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SimpleSwitchSource_t {
    QByteArrayData data[9];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleSwitchSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleSwitchSource_t qt_meta_stringdata_SimpleSwitchSource = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SimpleSwitchSource"
QT_MOC_LITERAL(1, 19, 17), // "RemoteObject Type"
QT_MOC_LITERAL(2, 37, 12), // "SimpleSwitch"
QT_MOC_LITERAL(3, 50, 22), // "RemoteObject Signature"
QT_MOC_LITERAL(4, 73, 40), // "3303202e1aac0e05fc37c568307af..."
QT_MOC_LITERAL(5, 114, 15), // "geometryChanged"
QT_MOC_LITERAL(6, 130, 0), // ""
QT_MOC_LITERAL(7, 131, 8), // "geometry"
QT_MOC_LITERAL(8, 140, 12) // "pushGeometry"

    },
    "SimpleSwitchSource\0RemoteObject Type\0"
    "SimpleSwitch\0RemoteObject Signature\0"
    "3303202e1aac0e05fc37c568307af8a6709ba73a\0"
    "geometryChanged\0\0geometry\0pushGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleSwitchSource[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   28,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   31,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    7,

 // properties: name, type, flags
       7, QMetaType::QRect, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void SimpleSwitchSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimpleSwitchSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->geometryChanged((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 1: _t->pushGeometry((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimpleSwitchSource::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimpleSwitchSource::geometryChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SimpleSwitchSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SimpleSwitchSource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGeometry(*reinterpret_cast< QRect*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SimpleSwitchSource::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SimpleSwitchSource.data,
    qt_meta_data_SimpleSwitchSource,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SimpleSwitchSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleSwitchSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleSwitchSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimpleSwitchSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SimpleSwitchSource::geometryChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SimpleSwitchSimpleSource_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleSwitchSimpleSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleSwitchSimpleSource_t qt_meta_stringdata_SimpleSwitchSimpleSource = {
    {
QT_MOC_LITERAL(0, 0, 24) // "SimpleSwitchSimpleSource"

    },
    "SimpleSwitchSimpleSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleSwitchSimpleSource[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SimpleSwitchSimpleSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SimpleSwitchSimpleSource::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleSwitchSource::staticMetaObject>(),
    qt_meta_stringdata_SimpleSwitchSimpleSource.data,
    qt_meta_data_SimpleSwitchSimpleSource,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SimpleSwitchSimpleSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleSwitchSimpleSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleSwitchSimpleSource.stringdata0))
        return static_cast<void*>(this);
    return SimpleSwitchSource::qt_metacast(_clname);
}

int SimpleSwitchSimpleSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleSwitchSource::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
