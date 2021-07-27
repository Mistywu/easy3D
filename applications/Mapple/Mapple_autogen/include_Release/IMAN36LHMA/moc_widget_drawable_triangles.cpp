/****************************************************************************
** Meta object code from reading C++ file 'widget_drawable_triangles.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../applications/Mapple/widgets/widget_drawable_triangles.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_drawable_triangles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetTrianglesDrawable_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetTrianglesDrawable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetTrianglesDrawable_t qt_meta_stringdata_WidgetTrianglesDrawable = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WidgetTrianglesDrawable"
QT_MOC_LITERAL(1, 24, 17), // "setActiveDrawable"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "setPhongShading"
QT_MOC_LITERAL(4, 59, 14), // "setColorScheme"
QT_MOC_LITERAL(5, 74, 15), // "setDefaultColor"
QT_MOC_LITERAL(6, 90, 12), // "setBackColor"
QT_MOC_LITERAL(7, 103, 14), // "setTextureFile"
QT_MOC_LITERAL(8, 118, 10), // "setOpacity"
QT_MOC_LITERAL(9, 129, 19), // "setScalarFieldStyle"
QT_MOC_LITERAL(10, 149, 14), // "setVectorField"
QT_MOC_LITERAL(11, 164, 15), // "setHighlightMin"
QT_MOC_LITERAL(12, 180, 15) // "setHighlightMax"

    },
    "WidgetTrianglesDrawable\0setActiveDrawable\0"
    "\0setPhongShading\0setColorScheme\0"
    "setDefaultColor\0setBackColor\0"
    "setTextureFile\0setOpacity\0setScalarFieldStyle\0"
    "setVectorField\0setHighlightMin\0"
    "setHighlightMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetTrianglesDrawable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       3,    1,   72,    2, 0x0a /* Public */,
       4,    1,   75,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    1,   90,    2, 0x0a /* Public */,
      12,    1,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void WidgetTrianglesDrawable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetTrianglesDrawable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActiveDrawable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setPhongShading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setColorScheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setDefaultColor(); break;
        case 4: _t->setBackColor(); break;
        case 5: _t->setTextureFile(); break;
        case 6: _t->setOpacity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setScalarFieldStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setVectorField((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setHighlightMin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setHighlightMax((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetTrianglesDrawable::staticMetaObject = { {
    &WidgetDrawable::staticMetaObject,
    qt_meta_stringdata_WidgetTrianglesDrawable.data,
    qt_meta_data_WidgetTrianglesDrawable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetTrianglesDrawable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetTrianglesDrawable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetTrianglesDrawable.stringdata0))
        return static_cast<void*>(this);
    return WidgetDrawable::qt_metacast(_clname);
}

int WidgetTrianglesDrawable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WidgetDrawable::qt_metacall(_c, _id, _a);
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
