/****************************************************************************
** Meta object code from reading C++ file 'zmnsccontroldialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/zmnsccontroldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zmnsccontroldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZmnscControlDialog_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZmnscControlDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZmnscControlDialog_t qt_meta_stringdata_ZmnscControlDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ZmnscControlDialog"
QT_MOC_LITERAL(1, 19, 15), // "updateSelection"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 53, 4), // "item"
QT_MOC_LITERAL(5, 58, 6), // "column"
QT_MOC_LITERAL(6, 65, 16) // "ButtonAllClicked"

    },
    "ZmnscControlDialog\0updateSelection\0\0"
    "QTreeWidgetItem*\0item\0column\0"
    "ButtonAllClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZmnscControlDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       6,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,

       0        // eod
};

void ZmnscControlDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZmnscControlDialog *_t = static_cast<ZmnscControlDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->ButtonAllClicked(); break;
        default: ;
        }
    }
}

const QMetaObject ZmnscControlDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ZmnscControlDialog.data,
      qt_meta_data_ZmnscControlDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ZmnscControlDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZmnscControlDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZmnscControlDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ZmnscControlDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
