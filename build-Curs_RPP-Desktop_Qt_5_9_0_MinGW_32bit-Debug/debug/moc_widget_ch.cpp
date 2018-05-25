/****************************************************************************
** Meta object code from reading C++ file 'widget_ch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Curs_RPP/widget_ch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_ch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_ch_t {
    QByteArrayData data[13];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_ch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_ch_t qt_meta_stringdata_Widget_ch = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Widget_ch"
QT_MOC_LITERAL(1, 10, 11), // "firstWindow"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "Orchestra"
QT_MOC_LITERAL(4, 33, 3), // "orc"
QT_MOC_LITERAL(5, 37, 14), // "on_add_clicked"
QT_MOC_LITERAL(6, 52, 7), // "checked"
QT_MOC_LITERAL(7, 60, 14), // "on_str_clicked"
QT_MOC_LITERAL(8, 75, 15), // "on_perc_clicked"
QT_MOC_LITERAL(9, 91, 15), // "on_wind_clicked"
QT_MOC_LITERAL(10, 107, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(11, 128, 5), // "index"
QT_MOC_LITERAL(12, 134, 14) // "on_del_clicked"

    },
    "Widget_ch\0firstWindow\0\0Orchestra\0orc\0"
    "on_add_clicked\0checked\0on_str_clicked\0"
    "on_perc_clicked\0on_wind_clicked\0"
    "on_tableView_clicked\0index\0on_del_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget_ch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
       9,    1,   61,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QModelIndex,   11,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void Widget_ch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget_ch *_t = static_cast<Widget_ch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow((*reinterpret_cast< Orchestra(*)>(_a[1]))); break;
        case 1: _t->on_add_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_str_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_perc_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_wind_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_del_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget_ch::*_t)(Orchestra );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget_ch::firstWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Widget_ch::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget_ch.data,
      qt_meta_data_Widget_ch,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget_ch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget_ch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget_ch.stringdata0))
        return static_cast<void*>(const_cast< Widget_ch*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget_ch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Widget_ch::firstWindow(Orchestra _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
