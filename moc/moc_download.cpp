/****************************************************************************
** Meta object code from reading C++ file 'download.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../download.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'download.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_download_t {
    QByteArrayData data[14];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_download_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_download_t qt_meta_stringdata_download = {
    {
QT_MOC_LITERAL(0, 0, 8), // "download"
QT_MOC_LITERAL(1, 9, 12), // "one_finished"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "filename"
QT_MOC_LITERAL(4, 32, 9), // "successed"
QT_MOC_LITERAL(5, 42, 14), // "reply_finished"
QT_MOC_LITERAL(6, 57, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 72, 5), // "reply"
QT_MOC_LITERAL(8, 78, 15), // "set_credentials"
QT_MOC_LITERAL(9, 94, 15), // "QAuthenticator*"
QT_MOC_LITERAL(10, 110, 13), // "authenticator"
QT_MOC_LITERAL(11, 124, 8), // "progress"
QT_MOC_LITERAL(12, 133, 13), // "bytesReceived"
QT_MOC_LITERAL(13, 147, 10) // "bytesTotal"

    },
    "download\0one_finished\0\0filename\0"
    "successed\0reply_finished\0QNetworkReply*\0"
    "reply\0set_credentials\0QAuthenticator*\0"
    "authenticator\0progress\0bytesReceived\0"
    "bytesTotal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_download[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   39,    2, 0x08 /* Private */,
       8,    2,   42,    2, 0x08 /* Private */,
      11,    2,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 9,    7,   10,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,

       0        // eod
};

void download::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        download *_t = static_cast<download *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->one_finished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->reply_finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->set_credentials((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 3: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (download::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&download::one_finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject download::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_download.data,
    qt_meta_data_download,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *download::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *download::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_download.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int download::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void download::one_finished(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
