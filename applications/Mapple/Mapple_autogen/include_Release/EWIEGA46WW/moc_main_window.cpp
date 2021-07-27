/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../applications/Mapple/main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[71];
    char stringdata0[1680];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "enableCameraManipulation"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "onOpen"
QT_MOC_LITERAL(4, 44, 6), // "onSave"
QT_MOC_LITERAL(5, 51, 16), // "onOpenRecentFile"
QT_MOC_LITERAL(6, 68, 18), // "onClearRecentFiles"
QT_MOC_LITERAL(7, 87, 12), // "saveSnapshot"
QT_MOC_LITERAL(8, 100, 18), // "setBackgroundColor"
QT_MOC_LITERAL(9, 119, 21), // "saveCameraStateToFile"
QT_MOC_LITERAL(10, 141, 26), // "restoreCameraStateFromFile"
QT_MOC_LITERAL(11, 168, 31), // "showPrimitivePropertyUnderMouse"
QT_MOC_LITERAL(12, 200, 25), // "showCoordinatesUnderMouse"
QT_MOC_LITERAL(13, 226, 16), // "importCameraPath"
QT_MOC_LITERAL(14, 243, 16), // "exportCameraPath"
QT_MOC_LITERAL(15, 260, 17), // "setShowCameraPath"
QT_MOC_LITERAL(16, 278, 22), // "setShowKeyframeCameras"
QT_MOC_LITERAL(17, 301, 9), // "animation"
QT_MOC_LITERAL(18, 311, 20), // "manipulateProperties"
QT_MOC_LITERAL(19, 332, 18), // "computeHeightField"
QT_MOC_LITERAL(20, 351, 28), // "computeSurfaceMeshCurvatures"
QT_MOC_LITERAL(21, 380, 24), // "reportTopologyStatistics"
QT_MOC_LITERAL(22, 405, 16), // "addGaussianNoise"
QT_MOC_LITERAL(23, 422, 30), // "applyManipulatedTransformation"
QT_MOC_LITERAL(24, 453, 31), // "giveUpManipulatedTransformation"
QT_MOC_LITERAL(25, 485, 22), // "pointCloudDownsampling"
QT_MOC_LITERAL(26, 508, 25), // "pointCloudEstimateNormals"
QT_MOC_LITERAL(27, 534, 25), // "pointCloudReorientNormals"
QT_MOC_LITERAL(28, 560, 26), // "pointCloudNormalizeNormals"
QT_MOC_LITERAL(29, 587, 38), // "pointCloudPoissonSurfaceRecon..."
QT_MOC_LITERAL(30, 626, 35), // "pointCloudRansacPrimitiveExtr..."
QT_MOC_LITERAL(31, 662, 33), // "pointCloudDelaunayTriangulati..."
QT_MOC_LITERAL(32, 696, 33), // "pointCloudDelaunayTriangulati..."
QT_MOC_LITERAL(33, 730, 37), // "surfaceMeshExtractConnectedCo..."
QT_MOC_LITERAL(34, 768, 26), // "surfaceMeshPlanarPartition"
QT_MOC_LITERAL(35, 795, 25), // "surfaceMeshPolygonization"
QT_MOC_LITERAL(36, 821, 24), // "surfaceMeshTriangulation"
QT_MOC_LITERAL(37, 846, 29), // "surfaceMeshTetrahedralization"
QT_MOC_LITERAL(38, 876, 34), // "surfaceMeshStitchWithReorient..."
QT_MOC_LITERAL(39, 911, 37), // "surfaceMeshStitchWithoutReori..."
QT_MOC_LITERAL(40, 949, 35), // "surfaceMeshOrientClosedTriang..."
QT_MOC_LITERAL(41, 985, 29), // "surfaceMeshReverseOrientation"
QT_MOC_LITERAL(42, 1015, 33), // "surfaceMeshRemoveIsolatedVert..."
QT_MOC_LITERAL(43, 1049, 41), // "surfaceMeshRemoveDuplicateAnd..."
QT_MOC_LITERAL(44, 1091, 34), // "surfaceMeshDetectSelfIntersec..."
QT_MOC_LITERAL(45, 1126, 34), // "surfaceMeshRemeshSelfIntersec..."
QT_MOC_LITERAL(46, 1161, 28), // "surfaceMeshRepairPolygonSoup"
QT_MOC_LITERAL(47, 1190, 37), // "surfaceMeshOrientAndStitchPol..."
QT_MOC_LITERAL(48, 1228, 15), // "surfaceMeshClip"
QT_MOC_LITERAL(49, 1244, 16), // "surfaceMeshSplit"
QT_MOC_LITERAL(50, 1261, 16), // "surfaceMeshSlice"
QT_MOC_LITERAL(51, 1278, 19), // "surfaceMeshSampling"
QT_MOC_LITERAL(52, 1298, 34), // "surfaceMeshSubdivisionCatmull..."
QT_MOC_LITERAL(53, 1333, 26), // "surfaceMeshSubdivisionLoop"
QT_MOC_LITERAL(54, 1360, 27), // "surfaceMeshSubdivisionSqrt3"
QT_MOC_LITERAL(55, 1388, 20), // "surfaceMeshSmoothing"
QT_MOC_LITERAL(56, 1409, 18), // "surfaceMeshFairing"
QT_MOC_LITERAL(57, 1428, 22), // "surfaceMeshHoleFilling"
QT_MOC_LITERAL(58, 1451, 25), // "surfaceMeshSimplification"
QT_MOC_LITERAL(59, 1477, 20), // "surfaceMeshRemeshing"
QT_MOC_LITERAL(60, 1498, 27), // "surfaceMeshParameterization"
QT_MOC_LITERAL(61, 1526, 19), // "surfaceMeshGeodesic"
QT_MOC_LITERAL(62, 1546, 29), // "surfaceMeshCreateMeshFromText"
QT_MOC_LITERAL(63, 1576, 23), // "polymeshExtractBoundary"
QT_MOC_LITERAL(64, 1600, 20), // "operationModeChanged"
QT_MOC_LITERAL(65, 1621, 8), // "QAction*"
QT_MOC_LITERAL(66, 1630, 3), // "act"
QT_MOC_LITERAL(67, 1634, 15), // "updateStatusBar"
QT_MOC_LITERAL(68, 1650, 10), // "cancelTask"
QT_MOC_LITERAL(69, 1661, 7), // "onAbout"
QT_MOC_LITERAL(70, 1669, 10) // "showManual"

    },
    "MainWindow\0enableCameraManipulation\0"
    "\0onOpen\0onSave\0onOpenRecentFile\0"
    "onClearRecentFiles\0saveSnapshot\0"
    "setBackgroundColor\0saveCameraStateToFile\0"
    "restoreCameraStateFromFile\0"
    "showPrimitivePropertyUnderMouse\0"
    "showCoordinatesUnderMouse\0importCameraPath\0"
    "exportCameraPath\0setShowCameraPath\0"
    "setShowKeyframeCameras\0animation\0"
    "manipulateProperties\0computeHeightField\0"
    "computeSurfaceMeshCurvatures\0"
    "reportTopologyStatistics\0addGaussianNoise\0"
    "applyManipulatedTransformation\0"
    "giveUpManipulatedTransformation\0"
    "pointCloudDownsampling\0pointCloudEstimateNormals\0"
    "pointCloudReorientNormals\0"
    "pointCloudNormalizeNormals\0"
    "pointCloudPoissonSurfaceReconstruction\0"
    "pointCloudRansacPrimitiveExtraction\0"
    "pointCloudDelaunayTriangulation2D\0"
    "pointCloudDelaunayTriangulation3D\0"
    "surfaceMeshExtractConnectedComponents\0"
    "surfaceMeshPlanarPartition\0"
    "surfaceMeshPolygonization\0"
    "surfaceMeshTriangulation\0"
    "surfaceMeshTetrahedralization\0"
    "surfaceMeshStitchWithReorientation\0"
    "surfaceMeshStitchWithoutReorientation\0"
    "surfaceMeshOrientClosedTriangleMesh\0"
    "surfaceMeshReverseOrientation\0"
    "surfaceMeshRemoveIsolatedVertices\0"
    "surfaceMeshRemoveDuplicateAndFoldingFaces\0"
    "surfaceMeshDetectSelfIntersections\0"
    "surfaceMeshRemeshSelfIntersections\0"
    "surfaceMeshRepairPolygonSoup\0"
    "surfaceMeshOrientAndStitchPolygonSoup\0"
    "surfaceMeshClip\0surfaceMeshSplit\0"
    "surfaceMeshSlice\0surfaceMeshSampling\0"
    "surfaceMeshSubdivisionCatmullClark\0"
    "surfaceMeshSubdivisionLoop\0"
    "surfaceMeshSubdivisionSqrt3\0"
    "surfaceMeshSmoothing\0surfaceMeshFairing\0"
    "surfaceMeshHoleFilling\0surfaceMeshSimplification\0"
    "surfaceMeshRemeshing\0surfaceMeshParameterization\0"
    "surfaceMeshGeodesic\0surfaceMeshCreateMeshFromText\0"
    "polymeshExtractBoundary\0operationModeChanged\0"
    "QAction*\0act\0updateStatusBar\0cancelTask\0"
    "onAbout\0showManual"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      67,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  349,    2, 0x0a /* Public */,
       3,    0,  350,    2, 0x0a /* Public */,
       4,    0,  351,    2, 0x0a /* Public */,
       5,    0,  352,    2, 0x0a /* Public */,
       6,    0,  353,    2, 0x0a /* Public */,
       7,    0,  354,    2, 0x0a /* Public */,
       8,    0,  355,    2, 0x0a /* Public */,
       9,    0,  356,    2, 0x0a /* Public */,
      10,    0,  357,    2, 0x0a /* Public */,
      11,    1,  358,    2, 0x0a /* Public */,
      12,    1,  361,    2, 0x0a /* Public */,
      13,    0,  364,    2, 0x0a /* Public */,
      14,    0,  365,    2, 0x0a /* Public */,
      15,    1,  366,    2, 0x0a /* Public */,
      16,    1,  369,    2, 0x0a /* Public */,
      17,    0,  372,    2, 0x0a /* Public */,
      18,    0,  373,    2, 0x0a /* Public */,
      19,    0,  374,    2, 0x0a /* Public */,
      20,    0,  375,    2, 0x0a /* Public */,
      21,    0,  376,    2, 0x0a /* Public */,
      22,    0,  377,    2, 0x0a /* Public */,
      23,    0,  378,    2, 0x0a /* Public */,
      24,    0,  379,    2, 0x0a /* Public */,
      25,    0,  380,    2, 0x0a /* Public */,
      26,    0,  381,    2, 0x0a /* Public */,
      27,    0,  382,    2, 0x0a /* Public */,
      28,    0,  383,    2, 0x0a /* Public */,
      29,    0,  384,    2, 0x0a /* Public */,
      30,    0,  385,    2, 0x0a /* Public */,
      31,    0,  386,    2, 0x0a /* Public */,
      32,    0,  387,    2, 0x0a /* Public */,
      33,    0,  388,    2, 0x0a /* Public */,
      34,    0,  389,    2, 0x0a /* Public */,
      35,    0,  390,    2, 0x0a /* Public */,
      36,    0,  391,    2, 0x0a /* Public */,
      37,    0,  392,    2, 0x0a /* Public */,
      38,    0,  393,    2, 0x0a /* Public */,
      39,    0,  394,    2, 0x0a /* Public */,
      40,    0,  395,    2, 0x0a /* Public */,
      41,    0,  396,    2, 0x0a /* Public */,
      42,    0,  397,    2, 0x0a /* Public */,
      43,    0,  398,    2, 0x0a /* Public */,
      44,    0,  399,    2, 0x0a /* Public */,
      45,    0,  400,    2, 0x0a /* Public */,
      46,    0,  401,    2, 0x0a /* Public */,
      47,    0,  402,    2, 0x0a /* Public */,
      48,    0,  403,    2, 0x0a /* Public */,
      49,    0,  404,    2, 0x0a /* Public */,
      50,    0,  405,    2, 0x0a /* Public */,
      51,    0,  406,    2, 0x0a /* Public */,
      52,    0,  407,    2, 0x0a /* Public */,
      53,    0,  408,    2, 0x0a /* Public */,
      54,    0,  409,    2, 0x0a /* Public */,
      55,    0,  410,    2, 0x0a /* Public */,
      56,    0,  411,    2, 0x0a /* Public */,
      57,    0,  412,    2, 0x0a /* Public */,
      58,    0,  413,    2, 0x0a /* Public */,
      59,    0,  414,    2, 0x0a /* Public */,
      60,    0,  415,    2, 0x0a /* Public */,
      61,    0,  416,    2, 0x0a /* Public */,
      62,    0,  417,    2, 0x0a /* Public */,
      63,    0,  418,    2, 0x0a /* Public */,
      64,    1,  419,    2, 0x0a /* Public */,
      67,    0,  422,    2, 0x0a /* Public */,
      68,    0,  423,    2, 0x0a /* Public */,
      69,    0,  424,    2, 0x0a /* Public */,
      70,    0,  425,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableCameraManipulation(); break;
        case 1: { bool _r = _t->onOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->onSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->onOpenRecentFile(); break;
        case 4: _t->onClearRecentFiles(); break;
        case 5: _t->saveSnapshot(); break;
        case 6: _t->setBackgroundColor(); break;
        case 7: _t->saveCameraStateToFile(); break;
        case 8: _t->restoreCameraStateFromFile(); break;
        case 9: _t->showPrimitivePropertyUnderMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showCoordinatesUnderMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->importCameraPath(); break;
        case 12: _t->exportCameraPath(); break;
        case 13: _t->setShowCameraPath((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setShowKeyframeCameras((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->animation(); break;
        case 16: _t->manipulateProperties(); break;
        case 17: _t->computeHeightField(); break;
        case 18: _t->computeSurfaceMeshCurvatures(); break;
        case 19: _t->reportTopologyStatistics(); break;
        case 20: _t->addGaussianNoise(); break;
        case 21: _t->applyManipulatedTransformation(); break;
        case 22: _t->giveUpManipulatedTransformation(); break;
        case 23: _t->pointCloudDownsampling(); break;
        case 24: _t->pointCloudEstimateNormals(); break;
        case 25: _t->pointCloudReorientNormals(); break;
        case 26: _t->pointCloudNormalizeNormals(); break;
        case 27: _t->pointCloudPoissonSurfaceReconstruction(); break;
        case 28: _t->pointCloudRansacPrimitiveExtraction(); break;
        case 29: _t->pointCloudDelaunayTriangulation2D(); break;
        case 30: _t->pointCloudDelaunayTriangulation3D(); break;
        case 31: _t->surfaceMeshExtractConnectedComponents(); break;
        case 32: _t->surfaceMeshPlanarPartition(); break;
        case 33: _t->surfaceMeshPolygonization(); break;
        case 34: _t->surfaceMeshTriangulation(); break;
        case 35: _t->surfaceMeshTetrahedralization(); break;
        case 36: _t->surfaceMeshStitchWithReorientation(); break;
        case 37: _t->surfaceMeshStitchWithoutReorientation(); break;
        case 38: _t->surfaceMeshOrientClosedTriangleMesh(); break;
        case 39: _t->surfaceMeshReverseOrientation(); break;
        case 40: _t->surfaceMeshRemoveIsolatedVertices(); break;
        case 41: _t->surfaceMeshRemoveDuplicateAndFoldingFaces(); break;
        case 42: _t->surfaceMeshDetectSelfIntersections(); break;
        case 43: _t->surfaceMeshRemeshSelfIntersections(); break;
        case 44: _t->surfaceMeshRepairPolygonSoup(); break;
        case 45: _t->surfaceMeshOrientAndStitchPolygonSoup(); break;
        case 46: _t->surfaceMeshClip(); break;
        case 47: _t->surfaceMeshSplit(); break;
        case 48: _t->surfaceMeshSlice(); break;
        case 49: _t->surfaceMeshSampling(); break;
        case 50: _t->surfaceMeshSubdivisionCatmullClark(); break;
        case 51: _t->surfaceMeshSubdivisionLoop(); break;
        case 52: _t->surfaceMeshSubdivisionSqrt3(); break;
        case 53: _t->surfaceMeshSmoothing(); break;
        case 54: _t->surfaceMeshFairing(); break;
        case 55: _t->surfaceMeshHoleFilling(); break;
        case 56: _t->surfaceMeshSimplification(); break;
        case 57: _t->surfaceMeshRemeshing(); break;
        case 58: _t->surfaceMeshParameterization(); break;
        case 59: _t->surfaceMeshGeodesic(); break;
        case 60: _t->surfaceMeshCreateMeshFromText(); break;
        case 61: _t->polymeshExtractBoundary(); break;
        case 62: _t->operationModeChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 63: _t->updateStatusBar(); break;
        case 64: _t->cancelTask(); break;
        case 65: _t->onAbout(); break;
        case 66: _t->showManual(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "easy3d::ProgressClient"))
        return static_cast< easy3d::ProgressClient*>(this);
    if (!strcmp(_clname, "easy3d::logging::Logger"))
        return static_cast< easy3d::logging::Logger*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 67)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 67;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
