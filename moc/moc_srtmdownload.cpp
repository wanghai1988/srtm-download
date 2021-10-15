/****************************************************************************
** Meta object code from reading C++ file 'srtmdownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../srtmdownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'srtmdownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_srtmdownload_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_srtmdownload_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_srtmdownload_t qt_meta_stringdata_srtmdownload = {
    {
QT_MOC_LITERAL(0, 0, 12), // "srtmdownload"
QT_MOC_LITERAL(1, 13, 16), // "setExtentFromMap"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 26), // "on_btn_file_dialog_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_btn_download_clicked"
QT_MOC_LITERAL(5, 82, 15), // "on_one_finished"
QT_MOC_LITERAL(6, 98, 8), // "filename"
QT_MOC_LITERAL(7, 107, 9) // "successed"

    },
    "srtmdownload\0setExtentFromMap\0\0"
    "on_btn_file_dialog_clicked\0"
    "on_btn_download_clicked\0on_one_finished\0"
    "filename\0successed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_srtmdownload[] = {

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
       4,    0,   36,    2, 0x08 /* Private */,
       5,    2,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,

       0        // eod
};

void srtmdownload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        srtmdownload *_t = static_cast<srtmdownload *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setExtentFromMap(); break;
        case 1: _t->on_btn_file_dialog_clicked(); break;
        case 2: _t->on_btn_download_clicked(); break;
        case 3: _t->on_one_finished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject srtmdownload::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_srtmdownload.data,
    qt_meta_data_srtmdownload,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *srtmdownload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *srtmdownload::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_srtmdownload.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int srtmdownload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
