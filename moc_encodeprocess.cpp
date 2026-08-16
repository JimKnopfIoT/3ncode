/****************************************************************************
** Meta object code from reading C++ file 'encodeprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/encodeprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'encodeprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_encodeProcess_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_encodeProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_encodeProcess_t qt_meta_stringdata_encodeProcess = {
    {
QT_MOC_LITERAL(0, 0, 13), // "encodeProcess"
QT_MOC_LITERAL(1, 14, 5), // "error"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "success"
QT_MOC_LITERAL(4, 29, 15), // "getffmpegOutput"
QT_MOC_LITERAL(5, 45, 8), // "exitCode"
QT_MOC_LITERAL(6, 54, 6), // "setCmd"
QT_MOC_LITERAL(7, 61, 3), // "cmd"
QT_MOC_LITERAL(8, 65, 9), // "runFFmpeg"
QT_MOC_LITERAL(9, 75, 11) // "errorOutput"

    },
    "encodeProcess\0error\0\0success\0"
    "getffmpegOutput\0exitCode\0setCmd\0cmd\0"
    "runFFmpeg\0errorOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_encodeProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x02 /* Public */,
       8,    0,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095001,

       0        // eod
};

void encodeProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        encodeProcess *_t = static_cast<encodeProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error(); break;
        case 1: _t->success(); break;
        case 2: _t->getffmpegOutput((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { bool _r = _t->setCmd((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->runFFmpeg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (encodeProcess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&encodeProcess::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (encodeProcess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&encodeProcess::success)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        encodeProcess *_t = static_cast<encodeProcess *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->cmd(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->errorOutput(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        encodeProcess *_t = static_cast<encodeProcess *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCmd(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject encodeProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_encodeProcess.data,
      qt_meta_data_encodeProcess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *encodeProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *encodeProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_encodeProcess.stringdata0))
        return static_cast<void*>(const_cast< encodeProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int encodeProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void encodeProcess::error()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void encodeProcess::success()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
