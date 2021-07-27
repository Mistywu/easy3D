/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/widget_log.h"
#include "widgets/widget_model_list.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveCameraStateToFile;
    QAction *actionRestoreCameraStateFromFile;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionClearRecentFiles;
    QAction *actionPoissonSurfaceReconstruction;
    QAction *actionRansacPrimitiveExtraction;
    QAction *actionSnapshot;
    QAction *actionSetBackgroundColor;
    QAction *actionSamplingSurfaceMesh;
    QAction *actionRemoveDuplicateAndFoldingFaces;
    QAction *actionTopologyStatistics;
    QAction *actionDetectSelfIntersections;
    QAction *actionRemeshSelfIntersections;
    QAction *actionEstimatePointCloudNormals;
    QAction *actionReorientPointCloudNormals;
    QAction *actionSelectLasso;
    QAction *actionInvertSelection;
    QAction *actionDeleteSelectedPrimitives;
    QAction *actionSelectRect;
    QAction *actionCameraManipulation;
    QAction *actionSelectClick;
    QAction *actionComputeHeightField;
    QAction *actionDownSampling;
    QAction *actionAddGaussianNoise;
    QAction *actionSettings;
    QAction *actionCopyCamera;
    QAction *actionPasteCamera;
    QAction *actionNormalizePointCloudNormals;
    QAction *actionExtractConnectedComponents;
    QAction *actionSurfaceMeshSubdivisionLoop;
    QAction *actionSurfaceMeshSubdivisionCatmullClark;
    QAction *actionSurfaceMeshSubdivisionSqrt3;
    QAction *actionSurfaceMeshSimplification;
    QAction *actionSurfaceMeshRemeshing;
    QAction *actionSurfaceMeshHoleFilling;
    QAction *actionSurfaceMeshSmoothing;
    QAction *actionSurfaceMeshParameterization;
    QAction *actionSurfaceMeshFairing;
    QAction *actionSurfaceMeshTriangulation;
    QAction *actionSurfaceMeshGeodesic;
    QAction *actionManual;
    QAction *actionComputeSurfaceMeshCurvatures;
    QAction *actionSurfaceMeshRemoveIsolatedVertices;
    QAction *actionManipulateProperties;
    QAction *actionDelaunayTriangulation2D;
    QAction *actionDelaunayTriangulation3D;
    QAction *actionCreateSurfaceMeshFromText;
    QAction *actionPlanarPartition;
    QAction *actionStitchWithReorientation;
    QAction *actionReverseOrientation;
    QAction *actionStitchWithoutReorientation;
    QAction *actionSurfaceMeshRepairPolygonSoup;
    QAction *actionSurfaceMeshOrientAndStitchPolygonSoup;
    QAction *actionOrientClosedTriangleMesh;
    QAction *actionSurfaceMeshClip;
    QAction *actionSurfaceMeshSplit;
    QAction *actionSurfaceMeshSlice;
    QAction *actionPolygonization;
    QAction *actionPolyMeshExtractBoundary;
    QAction *actionSurfaceMeshTetrahedralization;
    QAction *actionShowPrimitiveIDUnderMouse;
    QAction *actionShowCordinatesUnderMouse;
    QAction *actionAnimation;
    QAction *actionShowEasy3DLogo;
    QAction *actionShowFrameRate;
    QAction *actionShowAxes;
    QAction *actionPerspectiveOrthographic;
    QAction *actionFitScreen;
    QAction *actionApplyManipulatedTransformation;
    QAction *actionGiveUpManipulatedTransformation;
    QAction *actionSelectModel;
    QAction *actionImportCameraPath;
    QAction *actionExportCameraPath;
    QAction *actionShowKeyframeCameras;
    QAction *actionShowCameraPath;
    QAction *actionShowPrimitivePropertyUnderMouse;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecentFiles;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuPointCloud;
    QMenu *menuSelect;
    QMenu *menuProperty;
    QMenu *menuSurfaceMesh;
    QMenu *menuSubdivision;
    QMenu *menuPolygonSoupProcessing;
    QMenu *menuClippingPlane;
    QMenu *menuEdit;
    QMenu *menuPolyMesh;
    QMenu *menuCamera;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidgetRendering;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *toolBoxTrianglesDrawable;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayoutTrianglesDrawable;
    QWidget *toolBoxLinesDrawable;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayoutLinesDrawable;
    QWidget *toolBoxPointsDrawable;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayoutPointsDrawable;
    QWidget *toolBoxPageGlobal;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayoutGlobalSetting;
    QDockWidget *dockWidgetModels;
    QWidget *dockWidgetContentsModels;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxAutoFocus;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBoxSelectedOnly;
    QSpacerItem *horizontalSpacer_2;
    WidgetModelList *treeWidgetModels;
    QDockWidget *dockWidgetLog;
    QWidget *dockWidgetContentsLog;
    QVBoxLayout *verticalLayout_4;
    WidgetLog *listWidgetLog;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSaveCameraStateToFile = new QAction(MainWindow);
        actionSaveCameraStateToFile->setObjectName(QString::fromUtf8("actionSaveCameraStateToFile"));
        actionRestoreCameraStateFromFile = new QAction(MainWindow);
        actionRestoreCameraStateFromFile->setObjectName(QString::fromUtf8("actionRestoreCameraStateFromFile"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon3);
        actionClearRecentFiles = new QAction(MainWindow);
        actionClearRecentFiles->setObjectName(QString::fromUtf8("actionClearRecentFiles"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/icons/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearRecentFiles->setIcon(icon4);
        actionPoissonSurfaceReconstruction = new QAction(MainWindow);
        actionPoissonSurfaceReconstruction->setObjectName(QString::fromUtf8("actionPoissonSurfaceReconstruction"));
        actionRansacPrimitiveExtraction = new QAction(MainWindow);
        actionRansacPrimitiveExtraction->setObjectName(QString::fromUtf8("actionRansacPrimitiveExtraction"));
        actionSnapshot = new QAction(MainWindow);
        actionSnapshot->setObjectName(QString::fromUtf8("actionSnapshot"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/icons/snap_shot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSnapshot->setIcon(icon5);
        actionSetBackgroundColor = new QAction(MainWindow);
        actionSetBackgroundColor->setObjectName(QString::fromUtf8("actionSetBackgroundColor"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/icons/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetBackgroundColor->setIcon(icon6);
        actionSamplingSurfaceMesh = new QAction(MainWindow);
        actionSamplingSurfaceMesh->setObjectName(QString::fromUtf8("actionSamplingSurfaceMesh"));
        actionRemoveDuplicateAndFoldingFaces = new QAction(MainWindow);
        actionRemoveDuplicateAndFoldingFaces->setObjectName(QString::fromUtf8("actionRemoveDuplicateAndFoldingFaces"));
        actionTopologyStatistics = new QAction(MainWindow);
        actionTopologyStatistics->setObjectName(QString::fromUtf8("actionTopologyStatistics"));
        actionDetectSelfIntersections = new QAction(MainWindow);
        actionDetectSelfIntersections->setObjectName(QString::fromUtf8("actionDetectSelfIntersections"));
        actionRemeshSelfIntersections = new QAction(MainWindow);
        actionRemeshSelfIntersections->setObjectName(QString::fromUtf8("actionRemeshSelfIntersections"));
        actionEstimatePointCloudNormals = new QAction(MainWindow);
        actionEstimatePointCloudNormals->setObjectName(QString::fromUtf8("actionEstimatePointCloudNormals"));
        actionReorientPointCloudNormals = new QAction(MainWindow);
        actionReorientPointCloudNormals->setObjectName(QString::fromUtf8("actionReorientPointCloudNormals"));
        actionSelectLasso = new QAction(MainWindow);
        actionSelectLasso->setObjectName(QString::fromUtf8("actionSelectLasso"));
        actionSelectLasso->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/icons/select_lasso.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectLasso->setIcon(icon7);
        actionInvertSelection = new QAction(MainWindow);
        actionInvertSelection->setObjectName(QString::fromUtf8("actionInvertSelection"));
        actionDeleteSelectedPrimitives = new QAction(MainWindow);
        actionDeleteSelectedPrimitives->setObjectName(QString::fromUtf8("actionDeleteSelectedPrimitives"));
        actionSelectRect = new QAction(MainWindow);
        actionSelectRect->setObjectName(QString::fromUtf8("actionSelectRect"));
        actionSelectRect->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/icons/select_rect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectRect->setIcon(icon8);
        actionCameraManipulation = new QAction(MainWindow);
        actionCameraManipulation->setObjectName(QString::fromUtf8("actionCameraManipulation"));
        actionCameraManipulation->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/icons/manipulation.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCameraManipulation->setIcon(icon9);
        actionSelectClick = new QAction(MainWindow);
        actionSelectClick->setObjectName(QString::fromUtf8("actionSelectClick"));
        actionSelectClick->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/icons/select_click.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectClick->setIcon(icon10);
        actionComputeHeightField = new QAction(MainWindow);
        actionComputeHeightField->setObjectName(QString::fromUtf8("actionComputeHeightField"));
        actionDownSampling = new QAction(MainWindow);
        actionDownSampling->setObjectName(QString::fromUtf8("actionDownSampling"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/icons/down_sample.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDownSampling->setIcon(icon11);
        actionAddGaussianNoise = new QAction(MainWindow);
        actionAddGaussianNoise->setObjectName(QString::fromUtf8("actionAddGaussianNoise"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/icons/noise.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddGaussianNoise->setIcon(icon12);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resources/icons/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon13);
        actionCopyCamera = new QAction(MainWindow);
        actionCopyCamera->setObjectName(QString::fromUtf8("actionCopyCamera"));
        actionPasteCamera = new QAction(MainWindow);
        actionPasteCamera->setObjectName(QString::fromUtf8("actionPasteCamera"));
        actionNormalizePointCloudNormals = new QAction(MainWindow);
        actionNormalizePointCloudNormals->setObjectName(QString::fromUtf8("actionNormalizePointCloudNormals"));
        actionExtractConnectedComponents = new QAction(MainWindow);
        actionExtractConnectedComponents->setObjectName(QString::fromUtf8("actionExtractConnectedComponents"));
        actionSurfaceMeshSubdivisionLoop = new QAction(MainWindow);
        actionSurfaceMeshSubdivisionLoop->setObjectName(QString::fromUtf8("actionSurfaceMeshSubdivisionLoop"));
        actionSurfaceMeshSubdivisionCatmullClark = new QAction(MainWindow);
        actionSurfaceMeshSubdivisionCatmullClark->setObjectName(QString::fromUtf8("actionSurfaceMeshSubdivisionCatmullClark"));
        actionSurfaceMeshSubdivisionSqrt3 = new QAction(MainWindow);
        actionSurfaceMeshSubdivisionSqrt3->setObjectName(QString::fromUtf8("actionSurfaceMeshSubdivisionSqrt3"));
        actionSurfaceMeshSimplification = new QAction(MainWindow);
        actionSurfaceMeshSimplification->setObjectName(QString::fromUtf8("actionSurfaceMeshSimplification"));
        actionSurfaceMeshRemeshing = new QAction(MainWindow);
        actionSurfaceMeshRemeshing->setObjectName(QString::fromUtf8("actionSurfaceMeshRemeshing"));
        actionSurfaceMeshHoleFilling = new QAction(MainWindow);
        actionSurfaceMeshHoleFilling->setObjectName(QString::fromUtf8("actionSurfaceMeshHoleFilling"));
        actionSurfaceMeshSmoothing = new QAction(MainWindow);
        actionSurfaceMeshSmoothing->setObjectName(QString::fromUtf8("actionSurfaceMeshSmoothing"));
        actionSurfaceMeshParameterization = new QAction(MainWindow);
        actionSurfaceMeshParameterization->setObjectName(QString::fromUtf8("actionSurfaceMeshParameterization"));
        actionSurfaceMeshFairing = new QAction(MainWindow);
        actionSurfaceMeshFairing->setObjectName(QString::fromUtf8("actionSurfaceMeshFairing"));
        actionSurfaceMeshTriangulation = new QAction(MainWindow);
        actionSurfaceMeshTriangulation->setObjectName(QString::fromUtf8("actionSurfaceMeshTriangulation"));
        actionSurfaceMeshGeodesic = new QAction(MainWindow);
        actionSurfaceMeshGeodesic->setObjectName(QString::fromUtf8("actionSurfaceMeshGeodesic"));
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        actionComputeSurfaceMeshCurvatures = new QAction(MainWindow);
        actionComputeSurfaceMeshCurvatures->setObjectName(QString::fromUtf8("actionComputeSurfaceMeshCurvatures"));
        actionSurfaceMeshRemoveIsolatedVertices = new QAction(MainWindow);
        actionSurfaceMeshRemoveIsolatedVertices->setObjectName(QString::fromUtf8("actionSurfaceMeshRemoveIsolatedVertices"));
        actionManipulateProperties = new QAction(MainWindow);
        actionManipulateProperties->setObjectName(QString::fromUtf8("actionManipulateProperties"));
        actionDelaunayTriangulation2D = new QAction(MainWindow);
        actionDelaunayTriangulation2D->setObjectName(QString::fromUtf8("actionDelaunayTriangulation2D"));
        actionDelaunayTriangulation3D = new QAction(MainWindow);
        actionDelaunayTriangulation3D->setObjectName(QString::fromUtf8("actionDelaunayTriangulation3D"));
        actionCreateSurfaceMeshFromText = new QAction(MainWindow);
        actionCreateSurfaceMeshFromText->setObjectName(QString::fromUtf8("actionCreateSurfaceMeshFromText"));
        actionPlanarPartition = new QAction(MainWindow);
        actionPlanarPartition->setObjectName(QString::fromUtf8("actionPlanarPartition"));
        actionStitchWithReorientation = new QAction(MainWindow);
        actionStitchWithReorientation->setObjectName(QString::fromUtf8("actionStitchWithReorientation"));
        actionReverseOrientation = new QAction(MainWindow);
        actionReverseOrientation->setObjectName(QString::fromUtf8("actionReverseOrientation"));
        actionStitchWithoutReorientation = new QAction(MainWindow);
        actionStitchWithoutReorientation->setObjectName(QString::fromUtf8("actionStitchWithoutReorientation"));
        actionSurfaceMeshRepairPolygonSoup = new QAction(MainWindow);
        actionSurfaceMeshRepairPolygonSoup->setObjectName(QString::fromUtf8("actionSurfaceMeshRepairPolygonSoup"));
        actionSurfaceMeshOrientAndStitchPolygonSoup = new QAction(MainWindow);
        actionSurfaceMeshOrientAndStitchPolygonSoup->setObjectName(QString::fromUtf8("actionSurfaceMeshOrientAndStitchPolygonSoup"));
        actionOrientClosedTriangleMesh = new QAction(MainWindow);
        actionOrientClosedTriangleMesh->setObjectName(QString::fromUtf8("actionOrientClosedTriangleMesh"));
        actionSurfaceMeshClip = new QAction(MainWindow);
        actionSurfaceMeshClip->setObjectName(QString::fromUtf8("actionSurfaceMeshClip"));
        actionSurfaceMeshSplit = new QAction(MainWindow);
        actionSurfaceMeshSplit->setObjectName(QString::fromUtf8("actionSurfaceMeshSplit"));
        actionSurfaceMeshSlice = new QAction(MainWindow);
        actionSurfaceMeshSlice->setObjectName(QString::fromUtf8("actionSurfaceMeshSlice"));
        actionPolygonization = new QAction(MainWindow);
        actionPolygonization->setObjectName(QString::fromUtf8("actionPolygonization"));
        actionPolyMeshExtractBoundary = new QAction(MainWindow);
        actionPolyMeshExtractBoundary->setObjectName(QString::fromUtf8("actionPolyMeshExtractBoundary"));
        actionSurfaceMeshTetrahedralization = new QAction(MainWindow);
        actionSurfaceMeshTetrahedralization->setObjectName(QString::fromUtf8("actionSurfaceMeshTetrahedralization"));
        actionShowPrimitiveIDUnderMouse = new QAction(MainWindow);
        actionShowPrimitiveIDUnderMouse->setObjectName(QString::fromUtf8("actionShowPrimitiveIDUnderMouse"));
        actionShowPrimitiveIDUnderMouse->setCheckable(true);
        actionShowCordinatesUnderMouse = new QAction(MainWindow);
        actionShowCordinatesUnderMouse->setObjectName(QString::fromUtf8("actionShowCordinatesUnderMouse"));
        actionShowCordinatesUnderMouse->setCheckable(true);
        actionAnimation = new QAction(MainWindow);
        actionAnimation->setObjectName(QString::fromUtf8("actionAnimation"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resources/icons/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAnimation->setIcon(icon14);
        actionShowEasy3DLogo = new QAction(MainWindow);
        actionShowEasy3DLogo->setObjectName(QString::fromUtf8("actionShowEasy3DLogo"));
        actionShowEasy3DLogo->setCheckable(true);
        actionShowEasy3DLogo->setChecked(true);
        actionShowFrameRate = new QAction(MainWindow);
        actionShowFrameRate->setObjectName(QString::fromUtf8("actionShowFrameRate"));
        actionShowFrameRate->setCheckable(true);
        actionShowAxes = new QAction(MainWindow);
        actionShowAxes->setObjectName(QString::fromUtf8("actionShowAxes"));
        actionShowAxes->setCheckable(true);
        actionShowAxes->setChecked(true);
        actionPerspectiveOrthographic = new QAction(MainWindow);
        actionPerspectiveOrthographic->setObjectName(QString::fromUtf8("actionPerspectiveOrthographic"));
        actionPerspectiveOrthographic->setCheckable(true);
        actionPerspectiveOrthographic->setChecked(true);
        actionFitScreen = new QAction(MainWindow);
        actionFitScreen->setObjectName(QString::fromUtf8("actionFitScreen"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/resources/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFitScreen->setIcon(icon15);
        actionApplyManipulatedTransformation = new QAction(MainWindow);
        actionApplyManipulatedTransformation->setObjectName(QString::fromUtf8("actionApplyManipulatedTransformation"));
        actionGiveUpManipulatedTransformation = new QAction(MainWindow);
        actionGiveUpManipulatedTransformation->setObjectName(QString::fromUtf8("actionGiveUpManipulatedTransformation"));
        actionSelectModel = new QAction(MainWindow);
        actionSelectModel->setObjectName(QString::fromUtf8("actionSelectModel"));
        actionSelectModel->setCheckable(true);
        actionImportCameraPath = new QAction(MainWindow);
        actionImportCameraPath->setObjectName(QString::fromUtf8("actionImportCameraPath"));
        actionExportCameraPath = new QAction(MainWindow);
        actionExportCameraPath->setObjectName(QString::fromUtf8("actionExportCameraPath"));
        actionShowKeyframeCameras = new QAction(MainWindow);
        actionShowKeyframeCameras->setObjectName(QString::fromUtf8("actionShowKeyframeCameras"));
        actionShowKeyframeCameras->setCheckable(true);
        actionShowCameraPath = new QAction(MainWindow);
        actionShowCameraPath->setObjectName(QString::fromUtf8("actionShowCameraPath"));
        actionShowCameraPath->setCheckable(true);
        actionShowPrimitivePropertyUnderMouse = new QAction(MainWindow);
        actionShowPrimitivePropertyUnderMouse->setObjectName(QString::fromUtf8("actionShowPrimitivePropertyUnderMouse"));
        actionShowPrimitivePropertyUnderMouse->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuRecentFiles = new QMenu(menuFile);
        menuRecentFiles->setObjectName(QString::fromUtf8("menuRecentFiles"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuPointCloud = new QMenu(menuBar);
        menuPointCloud->setObjectName(QString::fromUtf8("menuPointCloud"));
        menuSelect = new QMenu(menuBar);
        menuSelect->setObjectName(QString::fromUtf8("menuSelect"));
        menuProperty = new QMenu(menuBar);
        menuProperty->setObjectName(QString::fromUtf8("menuProperty"));
        menuSurfaceMesh = new QMenu(menuBar);
        menuSurfaceMesh->setObjectName(QString::fromUtf8("menuSurfaceMesh"));
        menuSubdivision = new QMenu(menuSurfaceMesh);
        menuSubdivision->setObjectName(QString::fromUtf8("menuSubdivision"));
        menuPolygonSoupProcessing = new QMenu(menuSurfaceMesh);
        menuPolygonSoupProcessing->setObjectName(QString::fromUtf8("menuPolygonSoupProcessing"));
        menuClippingPlane = new QMenu(menuSurfaceMesh);
        menuClippingPlane->setObjectName(QString::fromUtf8("menuClippingPlane"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuPolyMesh = new QMenu(menuBar);
        menuPolyMesh->setObjectName(QString::fromUtf8("menuPolyMesh"));
        menuCamera = new QMenu(menuBar);
        menuCamera->setObjectName(QString::fromUtf8("menuCamera"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidgetRendering = new QDockWidget(MainWindow);
        dockWidgetRendering->setObjectName(QString::fromUtf8("dockWidgetRendering"));
        dockWidgetRendering->setMinimumSize(QSize(200, 280));
        dockWidgetRendering->setWindowIcon(icon13);
        dockWidgetRendering->setFeatures(QDockWidget::DockWidgetClosable);
        dockWidgetRendering->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 8, 0, 8);
        toolBox = new QToolBox(dockWidgetContents);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBoxTrianglesDrawable = new QWidget();
        toolBoxTrianglesDrawable->setObjectName(QString::fromUtf8("toolBoxTrianglesDrawable"));
        toolBoxTrianglesDrawable->setGeometry(QRect(0, 0, 200, 333));
        verticalLayout_6 = new QVBoxLayout(toolBoxTrianglesDrawable);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTrianglesDrawable = new QVBoxLayout();
        verticalLayoutTrianglesDrawable->setSpacing(6);
        verticalLayoutTrianglesDrawable->setObjectName(QString::fromUtf8("verticalLayoutTrianglesDrawable"));

        verticalLayout_6->addLayout(verticalLayoutTrianglesDrawable);

        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/resources/icons/drawable_triangles.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(toolBoxTrianglesDrawable, icon16, QString::fromUtf8("Surface"));
        toolBoxLinesDrawable = new QWidget();
        toolBoxLinesDrawable->setObjectName(QString::fromUtf8("toolBoxLinesDrawable"));
        toolBoxLinesDrawable->setGeometry(QRect(0, 0, 200, 333));
        verticalLayout_5 = new QVBoxLayout(toolBoxLinesDrawable);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayoutLinesDrawable = new QVBoxLayout();
        verticalLayoutLinesDrawable->setSpacing(6);
        verticalLayoutLinesDrawable->setObjectName(QString::fromUtf8("verticalLayoutLinesDrawable"));

        verticalLayout_5->addLayout(verticalLayoutLinesDrawable);

        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/resources/icons/drawable_lines.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(toolBoxLinesDrawable, icon17, QString::fromUtf8("Lines"));
        toolBoxPointsDrawable = new QWidget();
        toolBoxPointsDrawable->setObjectName(QString::fromUtf8("toolBoxPointsDrawable"));
        toolBoxPointsDrawable->setGeometry(QRect(0, 0, 200, 333));
        verticalLayout_9 = new QVBoxLayout(toolBoxPointsDrawable);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayoutPointsDrawable = new QVBoxLayout();
        verticalLayoutPointsDrawable->setSpacing(6);
        verticalLayoutPointsDrawable->setObjectName(QString::fromUtf8("verticalLayoutPointsDrawable"));

        verticalLayout_9->addLayout(verticalLayoutPointsDrawable);

        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/resources/icons/drawable_points.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(toolBoxPointsDrawable, icon18, QString::fromUtf8("Points"));
        toolBoxPageGlobal = new QWidget();
        toolBoxPageGlobal->setObjectName(QString::fromUtf8("toolBoxPageGlobal"));
        toolBoxPageGlobal->setGeometry(QRect(0, 0, 200, 333));
        verticalLayout_7 = new QVBoxLayout(toolBoxPageGlobal);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayoutGlobalSetting = new QVBoxLayout();
        verticalLayoutGlobalSetting->setSpacing(6);
        verticalLayoutGlobalSetting->setObjectName(QString::fromUtf8("verticalLayoutGlobalSetting"));

        verticalLayout_7->addLayout(verticalLayoutGlobalSetting);

        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/resources/icons/light.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(toolBoxPageGlobal, icon19, QString::fromUtf8("Global"));

        verticalLayout->addWidget(toolBox);

        dockWidgetRendering->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidgetRendering);
        dockWidgetModels = new QDockWidget(MainWindow);
        dockWidgetModels->setObjectName(QString::fromUtf8("dockWidgetModels"));
        dockWidgetModels->setMinimumSize(QSize(350, 197));
        dockWidgetModels->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dockWidgetModels->setFeatures(QDockWidget::DockWidgetClosable);
        dockWidgetModels->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContentsModels = new QWidget();
        dockWidgetContentsModels->setObjectName(QString::fromUtf8("dockWidgetContentsModels"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContentsModels);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBoxAutoFocus = new QCheckBox(dockWidgetContentsModels);
        checkBoxAutoFocus->setObjectName(QString::fromUtf8("checkBoxAutoFocus"));

        horizontalLayout->addWidget(checkBoxAutoFocus);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        checkBoxSelectedOnly = new QCheckBox(dockWidgetContentsModels);
        checkBoxSelectedOnly->setObjectName(QString::fromUtf8("checkBoxSelectedOnly"));

        horizontalLayout->addWidget(checkBoxSelectedOnly);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        treeWidgetModels = new WidgetModelList(dockWidgetContentsModels);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetModels->setHeaderItem(__qtreewidgetitem);
        treeWidgetModels->setObjectName(QString::fromUtf8("treeWidgetModels"));
        treeWidgetModels->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidgetModels->setAlternatingRowColors(true);
        treeWidgetModels->setSelectionMode(QAbstractItemView::MultiSelection);
        treeWidgetModels->setIndentation(5);
        treeWidgetModels->setColumnCount(3);

        verticalLayout_2->addWidget(treeWidgetModels);

        dockWidgetModels->setWidget(dockWidgetContentsModels);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidgetModels);
        dockWidgetLog = new QDockWidget(MainWindow);
        dockWidgetLog->setObjectName(QString::fromUtf8("dockWidgetLog"));
        dockWidgetLog->setMinimumSize(QSize(350, 96));
        dockWidgetLog->setFeatures(QDockWidget::DockWidgetClosable);
        dockWidgetLog->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContentsLog = new QWidget();
        dockWidgetContentsLog->setObjectName(QString::fromUtf8("dockWidgetContentsLog"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContentsLog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        listWidgetLog = new WidgetLog(dockWidgetContentsLog);
        listWidgetLog->setObjectName(QString::fromUtf8("listWidgetLog"));
        listWidgetLog->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidgetLog->setSelectionMode(QAbstractItemView::ContiguousSelection);

        verticalLayout_4->addWidget(listWidgetLog);

        dockWidgetLog->setWidget(dockWidgetContentsLog);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidgetLog);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuCamera->menuAction());
        menuBar->addAction(menuProperty->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuSelect->menuAction());
        menuBar->addAction(menuPointCloud->menuAction());
        menuBar->addAction(menuSurfaceMesh->menuAction());
        menuBar->addAction(menuPolyMesh->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(menuRecentFiles->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuRecentFiles->addSeparator();
        menuRecentFiles->addAction(actionClearRecentFiles);
        menuView->addAction(actionShowPrimitiveIDUnderMouse);
        menuView->addAction(actionShowPrimitivePropertyUnderMouse);
        menuView->addAction(actionShowCordinatesUnderMouse);
        menuView->addSeparator();
        menuView->addAction(actionShowEasy3DLogo);
        menuView->addAction(actionShowFrameRate);
        menuView->addAction(actionShowAxes);
        menuView->addSeparator();
        menuView->addAction(actionShowCameraPath);
        menuView->addAction(actionShowKeyframeCameras);
        menuView->addSeparator();
        menuView->addAction(actionSetBackgroundColor);
        menuView->addSeparator();
        menuView->addAction(actionSettings);
        menuHelp->addAction(actionAbout);
        menuHelp->addSeparator();
        menuHelp->addAction(actionManual);
        menuPointCloud->addAction(actionDownSampling);
        menuPointCloud->addSeparator();
        menuPointCloud->addAction(actionEstimatePointCloudNormals);
        menuPointCloud->addAction(actionReorientPointCloudNormals);
        menuPointCloud->addAction(actionNormalizePointCloudNormals);
        menuPointCloud->addSeparator();
        menuPointCloud->addAction(actionRansacPrimitiveExtraction);
        menuPointCloud->addAction(actionPoissonSurfaceReconstruction);
        menuPointCloud->addSeparator();
        menuPointCloud->addAction(actionDelaunayTriangulation3D);
        menuPointCloud->addAction(actionDelaunayTriangulation2D);
        menuSelect->addAction(actionSelectModel);
        menuSelect->addSeparator();
        menuSelect->addAction(actionSelectClick);
        menuSelect->addAction(actionSelectRect);
        menuSelect->addAction(actionSelectLasso);
        menuSelect->addSeparator();
        menuSelect->addAction(actionInvertSelection);
        menuSelect->addSeparator();
        menuSelect->addAction(actionDeleteSelectedPrimitives);
        menuProperty->addAction(actionManipulateProperties);
        menuProperty->addSeparator();
        menuProperty->addAction(actionComputeHeightField);
        menuProperty->addAction(actionComputeSurfaceMeshCurvatures);
        menuProperty->addSeparator();
        menuProperty->addAction(actionTopologyStatistics);
        menuSurfaceMesh->addAction(actionExtractConnectedComponents);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionPlanarPartition);
        menuSurfaceMesh->addAction(actionPolygonization);
        menuSurfaceMesh->addAction(actionSurfaceMeshTetrahedralization);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(menuPolygonSoupProcessing->menuAction());
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionStitchWithReorientation);
        menuSurfaceMesh->addAction(actionStitchWithoutReorientation);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionOrientClosedTriangleMesh);
        menuSurfaceMesh->addAction(actionReverseOrientation);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionSurfaceMeshRemoveIsolatedVertices);
        menuSurfaceMesh->addAction(actionRemoveDuplicateAndFoldingFaces);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionDetectSelfIntersections);
        menuSurfaceMesh->addAction(actionRemeshSelfIntersections);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionSurfaceMeshTriangulation);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionSurfaceMeshFairing);
        menuSurfaceMesh->addAction(actionSurfaceMeshSmoothing);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionSurfaceMeshGeodesic);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(menuSubdivision->menuAction());
        menuSurfaceMesh->addAction(actionSurfaceMeshSimplification);
        menuSurfaceMesh->addAction(actionSurfaceMeshRemeshing);
        menuSurfaceMesh->addAction(actionSurfaceMeshHoleFilling);
        menuSurfaceMesh->addAction(actionSurfaceMeshParameterization);
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(menuClippingPlane->menuAction());
        menuSurfaceMesh->addSeparator();
        menuSurfaceMesh->addAction(actionSamplingSurfaceMesh);
        menuSurfaceMesh->addAction(actionCreateSurfaceMeshFromText);
        menuSubdivision->addAction(actionSurfaceMeshSubdivisionLoop);
        menuSubdivision->addAction(actionSurfaceMeshSubdivisionCatmullClark);
        menuSubdivision->addAction(actionSurfaceMeshSubdivisionSqrt3);
        menuPolygonSoupProcessing->addAction(actionSurfaceMeshRepairPolygonSoup);
        menuPolygonSoupProcessing->addAction(actionSurfaceMeshOrientAndStitchPolygonSoup);
        menuClippingPlane->addAction(actionSurfaceMeshClip);
        menuClippingPlane->addAction(actionSurfaceMeshSplit);
        menuClippingPlane->addAction(actionSurfaceMeshSlice);
        menuEdit->addAction(actionAddGaussianNoise);
        menuEdit->addSeparator();
        menuEdit->addAction(actionApplyManipulatedTransformation);
        menuEdit->addAction(actionGiveUpManipulatedTransformation);
        menuPolyMesh->addAction(actionPolyMeshExtractBoundary);
        menuCamera->addAction(actionPerspectiveOrthographic);
        menuCamera->addSeparator();
        menuCamera->addAction(actionFitScreen);
        menuCamera->addSeparator();
        menuCamera->addAction(actionSnapshot);
        menuCamera->addSeparator();
        menuCamera->addAction(actionCopyCamera);
        menuCamera->addAction(actionPasteCamera);
        menuCamera->addSeparator();
        menuCamera->addAction(actionSaveCameraStateToFile);
        menuCamera->addAction(actionRestoreCameraStateFromFile);
        menuCamera->addSeparator();
        menuCamera->addAction(actionImportCameraPath);
        menuCamera->addAction(actionExportCameraPath);
        menuCamera->addSeparator();
        menuCamera->addAction(actionAnimation);
        menuCamera->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionFitScreen);
        mainToolBar->addAction(actionSnapshot);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCameraManipulation);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSelectClick);
        mainToolBar->addAction(actionSelectRect);
        mainToolBar->addAction(actionSelectLasso);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveCameraStateToFile->setText(QApplication::translate("MainWindow", "Save camera state", nullptr));
        actionRestoreCameraStateFromFile->setText(QApplication::translate("MainWindow", "Restore camera state", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About Mapple", nullptr));
        actionClearRecentFiles->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionPoissonSurfaceReconstruction->setText(QApplication::translate("MainWindow", "Poisson surface reconstruction", nullptr));
        actionRansacPrimitiveExtraction->setText(QApplication::translate("MainWindow", "RANSAC primitive extraction", nullptr));
        actionSnapshot->setText(QApplication::translate("MainWindow", "Snapshot", nullptr));
        actionSetBackgroundColor->setText(QApplication::translate("MainWindow", "Set background color", nullptr));
        actionSamplingSurfaceMesh->setText(QApplication::translate("MainWindow", "Sampling (to a point cloud)", nullptr));
        actionRemoveDuplicateAndFoldingFaces->setText(QApplication::translate("MainWindow", "Remove degenerate/duplicate/folding faces", nullptr));
        actionTopologyStatistics->setText(QApplication::translate("MainWindow", "Topology statistics", nullptr));
        actionDetectSelfIntersections->setText(QApplication::translate("MainWindow", "Detect self-intersections", nullptr));
        actionRemeshSelfIntersections->setText(QApplication::translate("MainWindow", "Remesh self-intersections", nullptr));
        actionEstimatePointCloudNormals->setText(QApplication::translate("MainWindow", "Estimate normals", nullptr));
        actionReorientPointCloudNormals->setText(QApplication::translate("MainWindow", "Re-orient normals", nullptr));
        actionSelectLasso->setText(QApplication::translate("MainWindow", "Select primitives by lasso", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelectLasso->setToolTip(QApplication::translate("MainWindow", "Select Using the Lasso Tool", nullptr));
#endif // QT_NO_TOOLTIP
        actionInvertSelection->setText(QApplication::translate("MainWindow", "Invert selection", nullptr));
#ifndef QT_NO_TOOLTIP
        actionInvertSelection->setToolTip(QApplication::translate("MainWindow", "Invert Selection", nullptr));
#endif // QT_NO_TOOLTIP
        actionDeleteSelectedPrimitives->setText(QApplication::translate("MainWindow", "Delete selected primitives", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDeleteSelectedPrimitives->setToolTip(QApplication::translate("MainWindow", "Delete Selected Primitives", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelectRect->setText(QApplication::translate("MainWindow", "Select primitives by sketching tool", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelectRect->setToolTip(QApplication::translate("MainWindow", "Select Using the Sketch Tool", nullptr));
#endif // QT_NO_TOOLTIP
        actionCameraManipulation->setText(QApplication::translate("MainWindow", "Camera Manipulation", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCameraManipulation->setToolTip(QApplication::translate("MainWindow", "Camera Manipulation", nullptr));
#endif // QT_NO_TOOLTIP
        actionSelectClick->setText(QApplication::translate("MainWindow", "Select primitives by clicking", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSelectClick->setToolTip(QApplication::translate("MainWindow", "Select by Clicking", nullptr));
#endif // QT_NO_TOOLTIP
        actionComputeHeightField->setText(QApplication::translate("MainWindow", "Compute height-field", nullptr));
        actionDownSampling->setText(QApplication::translate("MainWindow", "Down sampling", nullptr));
        actionAddGaussianNoise->setText(QApplication::translate("MainWindow", "Add Gaussian noise", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        actionCopyCamera->setText(QApplication::translate("MainWindow", "Copy camera", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopyCamera->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPasteCamera->setText(QApplication::translate("MainWindow", "Paste camera", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPasteCamera->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionNormalizePointCloudNormals->setText(QApplication::translate("MainWindow", "Normalize normals", nullptr));
        actionExtractConnectedComponents->setText(QApplication::translate("MainWindow", "Extract connected components", nullptr));
        actionSurfaceMeshSubdivisionLoop->setText(QApplication::translate("MainWindow", "Loop", nullptr));
        actionSurfaceMeshSubdivisionCatmullClark->setText(QApplication::translate("MainWindow", "Catmull-Clark", nullptr));
        actionSurfaceMeshSubdivisionSqrt3->setText(QApplication::translate("MainWindow", "Sqrt_3", nullptr));
        actionSurfaceMeshSimplification->setText(QApplication::translate("MainWindow", "Simplification", nullptr));
        actionSurfaceMeshRemeshing->setText(QApplication::translate("MainWindow", "Remeshing", nullptr));
        actionSurfaceMeshHoleFilling->setText(QApplication::translate("MainWindow", "Fill Holes", nullptr));
        actionSurfaceMeshSmoothing->setText(QApplication::translate("MainWindow", "Smoothing", nullptr));
        actionSurfaceMeshParameterization->setText(QApplication::translate("MainWindow", "Parameterization", nullptr));
        actionSurfaceMeshFairing->setText(QApplication::translate("MainWindow", "Fairing", nullptr));
        actionSurfaceMeshTriangulation->setText(QApplication::translate("MainWindow", "Triangulation", nullptr));
        actionSurfaceMeshGeodesic->setText(QApplication::translate("MainWindow", "Geodesic (w.r.t. a random vertex)", nullptr));
        actionManual->setText(QApplication::translate("MainWindow", "Manual", nullptr));
#ifndef QT_NO_SHORTCUT
        actionManual->setShortcut(QApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_NO_SHORTCUT
        actionComputeSurfaceMeshCurvatures->setText(QApplication::translate("MainWindow", "Compute surface mesh curvatures", nullptr));
        actionSurfaceMeshRemoveIsolatedVertices->setText(QApplication::translate("MainWindow", "Remove isolated vertices", nullptr));
        actionManipulateProperties->setText(QApplication::translate("MainWindow", "Manipulate properties", nullptr));
        actionDelaunayTriangulation2D->setText(QApplication::translate("MainWindow", "Delaunay triangulation 2D (XY only)", nullptr));
        actionDelaunayTriangulation3D->setText(QApplication::translate("MainWindow", "Delaunay triangulation 3D", nullptr));
        actionCreateSurfaceMeshFromText->setText(QApplication::translate("MainWindow", "Create from text", nullptr));
        actionPlanarPartition->setText(QApplication::translate("MainWindow", "Planar partition", nullptr));
        actionStitchWithReorientation->setText(QApplication::translate("MainWindow", "Stitch (reorient if needed)", nullptr));
        actionReverseOrientation->setText(QApplication::translate("MainWindow", "Reverse orientation", nullptr));
        actionStitchWithoutReorientation->setText(QApplication::translate("MainWindow", "Stitch (no reorientation)", nullptr));
        actionSurfaceMeshRepairPolygonSoup->setText(QApplication::translate("MainWindow", "Repair", nullptr));
        actionSurfaceMeshOrientAndStitchPolygonSoup->setText(QApplication::translate("MainWindow", "Orient and stitch", nullptr));
        actionOrientClosedTriangleMesh->setText(QApplication::translate("MainWindow", "Orient outward", nullptr));
        actionSurfaceMeshClip->setText(QApplication::translate("MainWindow", "Clip", nullptr));
        actionSurfaceMeshSplit->setText(QApplication::translate("MainWindow", "Split", nullptr));
        actionSurfaceMeshSlice->setText(QApplication::translate("MainWindow", "Slice", nullptr));
        actionPolygonization->setText(QApplication::translate("MainWindow", "Polygonization", nullptr));
        actionPolyMeshExtractBoundary->setText(QApplication::translate("MainWindow", "Extract boundary", nullptr));
        actionSurfaceMeshTetrahedralization->setText(QApplication::translate("MainWindow", "Tetrahedralization", nullptr));
        actionShowPrimitiveIDUnderMouse->setText(QApplication::translate("MainWindow", "Show primitive ID under mouse", nullptr));
#ifndef QT_NO_STATUSTIP
        actionShowPrimitiveIDUnderMouse->setStatusTip(QApplication::translate("MainWindow", "Show the IDs of face and its vertices under mouse", nullptr));
#endif // QT_NO_STATUSTIP
        actionShowCordinatesUnderMouse->setText(QApplication::translate("MainWindow", "Show coordinates under mouse", nullptr));
#ifndef QT_NO_STATUSTIP
        actionShowCordinatesUnderMouse->setStatusTip(QApplication::translate("MainWindow", "Show the XYZ coordinates under mouse", nullptr));
#endif // QT_NO_STATUSTIP
        actionAnimation->setText(QApplication::translate("MainWindow", "Animation", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAnimation->setToolTip(QApplication::translate("MainWindow", "Animation from a set of viewpoints  ", nullptr));
#endif // QT_NO_TOOLTIP
        actionShowEasy3DLogo->setText(QApplication::translate("MainWindow", "Show Easy3D logo", nullptr));
        actionShowFrameRate->setText(QApplication::translate("MainWindow", "Show frame rate", nullptr));
        actionShowAxes->setText(QApplication::translate("MainWindow", "Show axes", nullptr));
        actionPerspectiveOrthographic->setText(QApplication::translate("MainWindow", "Perspective/Orthographic", nullptr));
        actionFitScreen->setText(QApplication::translate("MainWindow", "Fit screen", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFitScreen->setShortcut(QApplication::translate("MainWindow", "F", nullptr));
#endif // QT_NO_SHORTCUT
        actionApplyManipulatedTransformation->setText(QApplication::translate("MainWindow", "Apply manipulated transformation", nullptr));
        actionGiveUpManipulatedTransformation->setText(QApplication::translate("MainWindow", "Give up manipulated transformation", nullptr));
        actionSelectModel->setText(QApplication::translate("MainWindow", "Select model", nullptr));
        actionImportCameraPath->setText(QApplication::translate("MainWindow", "Import camera path", nullptr));
        actionExportCameraPath->setText(QApplication::translate("MainWindow", "Export camera path", nullptr));
        actionShowKeyframeCameras->setText(QApplication::translate("MainWindow", "Show keyframe cameras", nullptr));
        actionShowCameraPath->setText(QApplication::translate("MainWindow", "Show camera path", nullptr));
        actionShowPrimitivePropertyUnderMouse->setText(QApplication::translate("MainWindow", "Show primitive property under mouse", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuRecentFiles->setTitle(QApplication::translate("MainWindow", "Recent files", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuPointCloud->setTitle(QApplication::translate("MainWindow", "Point Cloud", nullptr));
        menuSelect->setTitle(QApplication::translate("MainWindow", "Select", nullptr));
        menuProperty->setTitle(QApplication::translate("MainWindow", "Property", nullptr));
        menuSurfaceMesh->setTitle(QApplication::translate("MainWindow", "Surface Mesh", nullptr));
        menuSubdivision->setTitle(QApplication::translate("MainWindow", "Subdivision", nullptr));
#ifndef QT_NO_TOOLTIP
        menuPolygonSoupProcessing->setToolTip(QApplication::translate("MainWindow", "Process surface mesh as a polygon soup", nullptr));
#endif // QT_NO_TOOLTIP
        menuPolygonSoupProcessing->setTitle(QApplication::translate("MainWindow", "Polygon soup", nullptr));
        menuClippingPlane->setTitle(QApplication::translate("MainWindow", "Clipping plane", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuPolyMesh->setTitle(QApplication::translate("MainWindow", "Polyhedral Mesh", nullptr));
        menuCamera->setTitle(QApplication::translate("MainWindow", "Camera", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxTrianglesDrawable), QApplication::translate("MainWindow", "Surface", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxLinesDrawable), QApplication::translate("MainWindow", "Lines", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxPointsDrawable), QApplication::translate("MainWindow", "Points", nullptr));
        toolBox->setItemText(toolBox->indexOf(toolBoxPageGlobal), QApplication::translate("MainWindow", "Global", nullptr));
#ifndef QT_NO_STATUSTIP
        checkBoxAutoFocus->setStatusTip(QApplication::translate("MainWindow", "Center scree the selected model", nullptr));
#endif // QT_NO_STATUSTIP
        checkBoxAutoFocus->setText(QApplication::translate("MainWindow", "Auto focus", nullptr));
#ifndef QT_NO_STATUSTIP
        checkBoxSelectedOnly->setStatusTip(QApplication::translate("MainWindow", "Show only the selected model", nullptr));
#endif // QT_NO_STATUSTIP
        checkBoxSelectedOnly->setText(QApplication::translate("MainWindow", "Selected only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
