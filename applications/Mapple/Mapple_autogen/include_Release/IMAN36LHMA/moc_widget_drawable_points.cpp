/****************************************************************************
** Meta object code from reading C++ file 'widget_drawable_points.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../applications/Mapple/widgets/widget_drawable_points.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_drawable_points.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetPointsDrawable_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetPointsDrawable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetPointsDrawable_t qt_meta_stringdata_WidgetPointsDrawable = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WidgetPointsDrawable"
QT_MOC_LITERAL(1, 21, 17), // "setActiveDrawable"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "setPointSize"
QT_MOC_LITERAL(4, 53, 16), // "setImposterStyle"
QT_MOC_LITERAL(5, 70, 14), // "setColorScheme"
QT_MOC_LITERAL(6, 85, 15), // "setDefaultColor"
QT_MOC_LITERAL(7, 101, 12), // "setBackColor"
QT_MOC_LITERAL(8, 114, 14) // "setVectorField"

    },
    "WidgetPointsDrawable\0setActiveDrawable\0"
    "\0setPointSize\0setImposterStyle\0"
    "setColorScheme\0setDefaultColor\0"
    "setBackColor\0setVectorField"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetPointsDrawable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       3,    1,   52,    2, 0x0a /* Public */,
       4,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void WidgetPointsDrawable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetPointsDrawable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActiveDrawable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setPointSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setImposterStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setColorScheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setDefaultColor(); break;
        case 5: _t->setBackColor(); break;
        case 6: _t->setVectorField((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetPointsDrawable::staticMetaObject = { {
    &WidgetDrawable::staticMetaObject,
    qt_meta_stringdata_WidgetPointsDrawable.data,
    qt_meta_data_WidgetPointsDrawable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetPointsDrawable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetPointsDrawable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetPointsDrawable.stringdata0))
        return static_cast<void*>(this);
    return WidgetDrawable::qt_metacast(_clname);
}

int WidgetPointsDrawable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WidgetDrawable::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
