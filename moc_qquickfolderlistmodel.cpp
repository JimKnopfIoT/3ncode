/****************************************************************************
** Meta object code from reading C++ file 'qquickfolderlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/folderlistmodel/qquickfolderlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickfolderlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickFolderListModel_t {
    QByteArrayData data[37];
    char stringdata0[396];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFolderListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFolderListModel_t qt_meta_stringdata_QQuickFolderListModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickFolderListModel"
QT_MOC_LITERAL(1, 22, 13), // "folderChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "rowCountChanged"
QT_MOC_LITERAL(4, 53, 12), // "countChanged"
QT_MOC_LITERAL(5, 66, 19), // "_q_directoryChanged"
QT_MOC_LITERAL(6, 86, 9), // "directory"
QT_MOC_LITERAL(7, 96, 19), // "QList<FileProperty>"
QT_MOC_LITERAL(8, 116, 4), // "list"
QT_MOC_LITERAL(9, 121, 19), // "_q_directoryUpdated"
QT_MOC_LITERAL(10, 141, 9), // "fromIndex"
QT_MOC_LITERAL(11, 151, 7), // "toIndex"
QT_MOC_LITERAL(12, 159, 15), // "_q_sortFinished"
QT_MOC_LITERAL(13, 175, 8), // "isFolder"
QT_MOC_LITERAL(14, 184, 5), // "index"
QT_MOC_LITERAL(15, 190, 3), // "get"
QT_MOC_LITERAL(16, 194, 3), // "idx"
QT_MOC_LITERAL(17, 198, 8), // "property"
QT_MOC_LITERAL(18, 207, 6), // "folder"
QT_MOC_LITERAL(19, 214, 10), // "rootFolder"
QT_MOC_LITERAL(20, 225, 12), // "parentFolder"
QT_MOC_LITERAL(21, 238, 11), // "nameFilters"
QT_MOC_LITERAL(22, 250, 9), // "sortField"
QT_MOC_LITERAL(23, 260, 9), // "SortField"
QT_MOC_LITERAL(24, 270, 12), // "sortReversed"
QT_MOC_LITERAL(25, 283, 9), // "showFiles"
QT_MOC_LITERAL(26, 293, 8), // "showDirs"
QT_MOC_LITERAL(27, 302, 13), // "showDirsFirst"
QT_MOC_LITERAL(28, 316, 16), // "showDotAndDotDot"
QT_MOC_LITERAL(29, 333, 10), // "showHidden"
QT_MOC_LITERAL(30, 344, 16), // "showOnlyReadable"
QT_MOC_LITERAL(31, 361, 5), // "count"
QT_MOC_LITERAL(32, 367, 8), // "Unsorted"
QT_MOC_LITERAL(33, 376, 4), // "Name"
QT_MOC_LITERAL(34, 381, 4), // "Time"
QT_MOC_LITERAL(35, 386, 4), // "Size"
QT_MOC_LITERAL(36, 391, 4) // "Type"

    },
    "QQuickFolderListModel\0folderChanged\0"
    "\0rowCountChanged\0countChanged\0"
    "_q_directoryChanged\0directory\0"
    "QList<FileProperty>\0list\0_q_directoryUpdated\0"
    "fromIndex\0toIndex\0_q_sortFinished\0"
    "isFolder\0index\0get\0idx\0property\0folder\0"
    "rootFolder\0parentFolder\0nameFilters\0"
    "sortField\0SortField\0sortReversed\0"
    "showFiles\0showDirs\0showDirsFirst\0"
    "showDotAndDotDot\0showHidden\0"
    "showOnlyReadable\0count\0Unsorted\0Name\0"
    "Time\0Size\0Type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFolderListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      13,   90, // properties
       1,  155, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   62,    2, 0x06 /* Public */,
       3,    0,   63,    2, 0x06 /* Public */,
       4,    0,   64,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   65,    2, 0x08 /* Private */,
       9,    4,   70,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   82,    2, 0x02 /* Public */,
      15,    2,   85,    2, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       1,

 // slots: revision
       0,
       0,
       0,

 // methods: revision
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7, QMetaType::Int, QMetaType::Int,    6,    8,   10,   11,
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int,   14,
    QMetaType::QVariant, QMetaType::Int, QMetaType::QString,   16,   17,

 // properties: name, type, flags
      18, QMetaType::QUrl, 0x00495103,
      19, QMetaType::QUrl, 0x00095103,
      20, QMetaType::QUrl, 0x00495001,
      21, QMetaType::QStringList, 0x00095103,
      22, 0x80000000 | 23, 0x0009510b,
      24, QMetaType::Bool, 0x00095103,
      25, QMetaType::Bool, 0x00895103,
      26, QMetaType::Bool, 0x00095103,
      27, QMetaType::Bool, 0x00095103,
      28, QMetaType::Bool, 0x00095103,
      29, QMetaType::Bool, 0x00895103,
      30, QMetaType::Bool, 0x00095103,
      31, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       2,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       1,
       0,
       0,

 // enums: name, flags, count, data
      23, 0x0,    5,  159,

 // enum data: key, value
      32, uint(QQuickFolderListModel::Unsorted),
      33, uint(QQuickFolderListModel::Name),
      34, uint(QQuickFolderListModel::Time),
      35, uint(QQuickFolderListModel::Size),
      36, uint(QQuickFolderListModel::Type),

       0        // eod
};

void QQuickFolderListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFolderListModel *_t = static_cast<QQuickFolderListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->folderChanged(); break;
        case 1: _t->rowCountChanged(); break;
        case 2: _t->countChanged(); break;
        case 3: _t->d_func()->_q_directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<FileProperty>(*)>(_a[2]))); break;
        case 4: _t->d_func()->_q_directoryUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<FileProperty>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->d_func()->_q_sortFinished((*reinterpret_cast< const QList<FileProperty>(*)>(_a[1]))); break;
        case 6: { bool _r = _t->isFolder((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->get((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickFolderListModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickFolderListModel::folderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickFolderListModel::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickFolderListModel::rowCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickFolderListModel::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickFolderListModel::countChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFolderListModel *_t = static_cast<QQuickFolderListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->folder(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->rootFolder(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->parentFolder(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->nameFilters(); break;
        case 4: *reinterpret_cast< SortField*>(_v) = _t->sortField(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->sortReversed(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->showFiles(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->showDirs(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->showDirsFirst(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->showDotAndDotDot(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->showHidden(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->showOnlyReadable(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFolderListModel *_t = static_cast<QQuickFolderListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFolder(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setRootFolder(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: _t->setNameFilters(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: _t->setSortField(*reinterpret_cast< SortField*>(_v)); break;
        case 5: _t->setSortReversed(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setShowFiles(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setShowDirs(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setShowDirsFirst(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setShowDotAndDotDot(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setShowHidden(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setShowOnlyReadable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFolderListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QQuickFolderListModel.data,
      qt_meta_data_QQuickFolderListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickFolderListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFolderListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFolderListModel.stringdata0))
        return static_cast<void*>(const_cast< QQuickFolderListModel*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QQuickFolderListModel*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QQuickFolderListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int QQuickFolderListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickFolderListModel::folderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QQuickFolderListModel::rowCountChanged()const
{
    QMetaObject::activate(const_cast< QQuickFolderListModel *>(this), &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QQuickFolderListModel::countChanged()const
{
    QMetaObject::activate(const_cast< QQuickFolderListModel *>(this), &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
