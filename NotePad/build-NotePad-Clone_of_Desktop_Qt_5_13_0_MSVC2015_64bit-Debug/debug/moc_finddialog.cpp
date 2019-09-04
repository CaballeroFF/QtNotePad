/****************************************************************************
** Meta object code from reading C++ file 'finddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../NotePad/finddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindDialog_t {
    QByteArrayData data[14];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindDialog_t qt_meta_stringdata_FindDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FindDialog"
QT_MOC_LITERAL(1, 11, 13), // "sendFindValue"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "QString&"
QT_MOC_LITERAL(4, 35, 1), // "s"
QT_MOC_LITERAL(5, 37, 18), // "sendDirectionValue"
QT_MOC_LITERAL(6, 56, 5), // "bool&"
QT_MOC_LITERAL(7, 62, 9), // "direction"
QT_MOC_LITERAL(8, 72, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(9, 95, 4), // "arg1"
QT_MOC_LITERAL(10, 100, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 124, 25), // "on_findNextButton_clicked"
QT_MOC_LITERAL(12, 150, 26), // "on_downRadioButton_toggled"
QT_MOC_LITERAL(13, 177, 7) // "checked"

    },
    "FindDialog\0sendFindValue\0\0QString&\0s\0"
    "sendDirectionValue\0bool&\0direction\0"
    "on_lineEdit_textEdited\0arg1\0"
    "on_pushButton_2_clicked\0"
    "on_findNextButton_clicked\0"
    "on_downRadioButton_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   50,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,
      11,    0,   54,    2, 0x08 /* Private */,
      12,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void FindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFindValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendDirectionValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_findNextButton_clicked(); break;
        case 5: _t->on_downRadioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindDialog::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindDialog::sendFindValue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FindDialog::*)(bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindDialog::sendDirectionValue)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_FindDialog.data,
    qt_meta_data_FindDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void FindDialog::sendFindValue(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FindDialog::sendDirectionValue(bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
