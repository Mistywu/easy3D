/****************************************************************************
** Meta object code from reading C++ file 'dialog_properties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../applications/Mapple/dialogs/dialog_properties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_properties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogProperties_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogProperties_t qt_meta_stringdata_DialogProperties = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DialogProperties"
QT_MOC_LITERAL(1, 17, 16), // "updateProperties"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "applyCommand"
QT_MOC_LITERAL(4, 48, 14), // "commandChanged"
QT_MOC_LITERAL(5, 63, 12), // "modelChanged"
QT_MOC_LITERAL(6, 76, 15), // "locationChanged"
QT_MOC_LITERAL(7, 92, 15) // "propertyChanged"

    },
    "DialogProperties\0updateProperties\0\0"
    "applyCommand\0commandChanged\0modelChanged\0"
    "locationChanged\0propertyChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogProperties[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       5,    1,   49,    2, 0x08 /* Private */,
       6,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void DialogProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProperties(); break;
        case 1: _t->applyCommand(); break;
        case 2: _t->commandChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->modelChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->locationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogProperties::staticMetaObject = { {
    &Dialog::staticMetaObject,
    qt_meta_stringdata_DialogProperties.data,
    qt_meta_data_DialogProperties,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogProperties.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DialogProperties"))
        return static_cast< Ui::DialogProperties*>(this);
    return Dialog::qt_metacast(_clname);
}

int DialogProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
