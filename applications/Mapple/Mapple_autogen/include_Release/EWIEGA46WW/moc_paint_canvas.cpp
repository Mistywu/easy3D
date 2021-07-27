/****************************************************************************
** Meta object code from reading C++ file 'paint_canvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../applications/Mapple/paint_canvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paint_canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PaintCanvas_t {
    QByteArrayData data[18];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaintCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaintCanvas_t qt_meta_stringdata_PaintCanvas = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PaintCanvas"
QT_MOC_LITERAL(1, 12, 12), // "drawFinished"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "fitScreen"
QT_MOC_LITERAL(4, 36, 25), // "showPrimitiveIDUnderMouse"
QT_MOC_LITERAL(5, 62, 31), // "showPrimitivePropertyUnderMouse"
QT_MOC_LITERAL(6, 94, 25), // "showCoordinatesUnderMouse"
QT_MOC_LITERAL(7, 120, 14), // "showEasy3DLogo"
QT_MOC_LITERAL(8, 135, 13), // "showFrameRate"
QT_MOC_LITERAL(9, 149, 8), // "showAxes"
QT_MOC_LITERAL(10, 158, 17), // "enableSelectModel"
QT_MOC_LITERAL(11, 176, 1), // "b"
QT_MOC_LITERAL(12, 178, 20), // "isSelectModelEnabled"
QT_MOC_LITERAL(13, 199, 15), // "invertSelection"
QT_MOC_LITERAL(14, 215, 24), // "deleteSelectedPrimitives"
QT_MOC_LITERAL(15, 240, 14), // "setPerspective"
QT_MOC_LITERAL(16, 255, 10), // "copyCamera"
QT_MOC_LITERAL(17, 266, 11) // "pasteCamera"

    },
    "PaintCanvas\0drawFinished\0\0fitScreen\0"
    "showPrimitiveIDUnderMouse\0"
    "showPrimitivePropertyUnderMouse\0"
    "showCoordinatesUnderMouse\0showEasy3DLogo\0"
    "showFrameRate\0showAxes\0enableSelectModel\0"
    "b\0isSelectModelEnabled\0invertSelection\0"
    "deleteSelectedPrimitives\0setPerspective\0"
    "copyCamera\0pasteCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,
       4,    1,   91,    2, 0x0a /* Public */,
       5,    1,   94,    2, 0x0a /* Public */,
       6,    1,   97,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x0a /* Public */,
       8,    1,  103,    2, 0x0a /* Public */,
       9,    1,  106,    2, 0x0a /* Public */,
      10,    1,  109,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    0,  113,    2, 0x0a /* Public */,
      14,    0,  114,    2, 0x0a /* Public */,
      15,    1,  115,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PaintCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaintCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->drawFinished(); break;
        case 1: _t->fitScreen(); break;
        case 2: _t->showPrimitiveIDUnderMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showPrimitivePropertyUnderMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showCoordinatesUnderMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->showEasy3DLogo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showFrameRate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->enableSelectModel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { bool _r = _t->isSelectModelEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->invertSelection(); break;
        case 11: _t->deleteSelectedPrimitives(); break;
        case 12: _t->setPerspective((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->copyCamera(); break;
        case 14: _t->pasteCamera(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaintCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaintCanvas::drawFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PaintCanvas::staticMetaObject = { {
    &QOpenGLWidget::staticMetaObject,
    qt_meta_stringdata_PaintCanvas.data,
    qt_meta_data_PaintCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PaintCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PaintCanvas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "easy3d::Canvas"))
        return static_cast< easy3d::Canvas*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int PaintCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PaintCanvas::drawFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
