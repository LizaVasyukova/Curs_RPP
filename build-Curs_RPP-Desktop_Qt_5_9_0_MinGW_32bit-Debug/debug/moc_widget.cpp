/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Curs_RPP/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[17];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 15), // "on_load_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "checked"
QT_MOC_LITERAL(4, 32, 14), // "on_add_clicked"
QT_MOC_LITERAL(5, 47, 17), // "on_quest1_clicked"
QT_MOC_LITERAL(6, 65, 17), // "on_quest2_clicked"
QT_MOC_LITERAL(7, 83, 17), // "on_quest3_clicked"
QT_MOC_LITERAL(8, 101, 17), // "on_quest4_clicked"
QT_MOC_LITERAL(9, 119, 15), // "on_save_clicked"
QT_MOC_LITERAL(10, 135, 20), // "on_tableView_clicked"
QT_MOC_LITERAL(11, 156, 5), // "index"
QT_MOC_LITERAL(12, 162, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(13, 189, 14), // "on_del_clicked"
QT_MOC_LITERAL(14, 204, 8), // "get_data"
QT_MOC_LITERAL(15, 213, 9), // "Orchestra"
QT_MOC_LITERAL(16, 223, 3) // "orc"

    },
    "Widget\0on_load_clicked\0\0checked\0"
    "on_add_clicked\0on_quest1_clicked\0"
    "on_quest2_clicked\0on_quest3_clicked\0"
    "on_quest4_clicked\0on_save_clicked\0"
    "on_tableView_clicked\0index\0"
    "on_tableView_doubleClicked\0on_del_clicked\0"
    "get_data\0Orchestra\0orc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       7,    1,   81,    2, 0x08 /* Private */,
       8,    1,   84,    2, 0x08 /* Private */,
       9,    1,   87,    2, 0x08 /* Private */,
      10,    1,   90,    2, 0x08 /* Private */,
      12,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QModelIndex,   11,
    QMetaType::Void, QMetaType::QModelIndex,   11,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_load_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_add_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_quest1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_quest2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_quest3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_quest4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_save_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_del_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->get_data((*reinterpret_cast< Orchestra(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
