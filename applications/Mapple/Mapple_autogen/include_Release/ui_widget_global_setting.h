/********************************************************************************
** Form generated from reading UI file 'widget_global_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_GLOBAL_SETTING_H
#define UI_WIDGET_GLOBAL_SETTING_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/widget_checker_sphere.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetGlobalSetting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    WidgetCheckerSphere *checkerSphere;
    QGridLayout *gridLayout;
    QFrame *line_5;
    QLabel *labelGroundPlaneTexture_2;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBoxGroundPlane;
    QSpinBox *spinBoxGroundPlaneSize;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labelGroundPlaneTexture;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBoxGroundPlaneTexture;
    QToolButton *toolButtonGroundPlaneTexture;
    QSpacerItem *horizontalSpacer_20;
    QLabel *labelGroundPlaneConstraint;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxGroundPlaneConstraint;
    QSpacerItem *horizontalSpacer_19;
    QFrame *line_4;
    QLabel *labelClippingPlaneEnable;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxClippingPlaneEnable;
    QToolButton *toolButtonRecenterClippingPlane;
    QSpacerItem *horizontalSpacer_22;
    QLabel *labelClippingPlaneVisible;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxClippingPlaneVisible;
    QToolButton *toolButtonClippingPlaneColor;
    QSpacerItem *horizontalSpacer_23;
    QLabel *labelCrossSectionEnable;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBoxCrossSectionEnable;
    QDoubleSpinBox *doubleSpinBoxCrossSectionThickness;
    QSpacerItem *horizontalSpacer_24;
    QFrame *line_2;
    QComboBox *comboBoxSSAOAlgorithm;
    QLabel *labelSSAO;
    QLabel *labelSSAORadius;
    QSlider *horizontalSliderSSAORadius;
    QLabel *labelSSAOIntensity;
    QSlider *horizontalSliderSSAOIntensity;
    QLabel *labelSSAOBias;
    QSlider *horizontalSliderSSAOBias;
    QLabel *labelSSAOSharpness;
    QSlider *horizontalSliderSSAOSharpness;
    QLabel *labelEDL;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBoxEyeDomeLighting;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelTransparent;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBoxTransparency;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line_3;
    QLabel *labelShadow;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBoxShadow;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelShadowSmoothPattern;
    QComboBox *comboBoxShadowSmoothPattern;
    QLabel *labelShadowLightDistance;
    QSlider *horizontalSliderShadowLightDistance;
    QLabel *labelShadowSoftness;
    QSlider *horizontalSliderShadowSoftness;
    QLabel *labelShadowDarkness;
    QSlider *horizontalSliderShadowDarkness;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetGlobalSetting)
    {
        if (WidgetGlobalSetting->objectName().isEmpty())
            WidgetGlobalSetting->setObjectName(QString::fromUtf8("WidgetGlobalSetting"));
        WidgetGlobalSetting->resize(278, 880);
        WidgetGlobalSetting->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(WidgetGlobalSetting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkerSphere = new WidgetCheckerSphere(WidgetGlobalSetting);
        checkerSphere->setObjectName(QString::fromUtf8("checkerSphere"));
        checkerSphere->setMinimumSize(QSize(120, 120));
        checkerSphere->setMaximumSize(QSize(120, 120));

        horizontalLayout->addWidget(checkerSphere);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line_5 = new QFrame(WidgetGlobalSetting);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 0, 0, 1, 2);

        labelGroundPlaneTexture_2 = new QLabel(WidgetGlobalSetting);
        labelGroundPlaneTexture_2->setObjectName(QString::fromUtf8("labelGroundPlaneTexture_2"));
        labelGroundPlaneTexture_2->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(labelGroundPlaneTexture_2, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        checkBoxGroundPlane = new QCheckBox(WidgetGlobalSetting);
        checkBoxGroundPlane->setObjectName(QString::fromUtf8("checkBoxGroundPlane"));
        checkBoxGroundPlane->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_6->addWidget(checkBoxGroundPlane);

        spinBoxGroundPlaneSize = new QSpinBox(WidgetGlobalSetting);
        spinBoxGroundPlaneSize->setObjectName(QString::fromUtf8("spinBoxGroundPlaneSize"));
        spinBoxGroundPlaneSize->setMinimum(1);
        spinBoxGroundPlaneSize->setMaximum(10000000);
        spinBoxGroundPlaneSize->setSingleStep(1);
        spinBoxGroundPlaneSize->setValue(15);
        spinBoxGroundPlaneSize->setDisplayIntegerBase(10);

        horizontalLayout_6->addWidget(spinBoxGroundPlaneSize);

        horizontalSpacer_21 = new QSpacerItem(38, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_21);


        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        labelGroundPlaneTexture = new QLabel(WidgetGlobalSetting);
        labelGroundPlaneTexture->setObjectName(QString::fromUtf8("labelGroundPlaneTexture"));
        labelGroundPlaneTexture->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(labelGroundPlaneTexture, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBoxGroundPlaneTexture = new QCheckBox(WidgetGlobalSetting);
        checkBoxGroundPlaneTexture->setObjectName(QString::fromUtf8("checkBoxGroundPlaneTexture"));
        checkBoxGroundPlaneTexture->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_5->addWidget(checkBoxGroundPlaneTexture);

        toolButtonGroundPlaneTexture = new QToolButton(WidgetGlobalSetting);
        toolButtonGroundPlaneTexture->setObjectName(QString::fromUtf8("toolButtonGroundPlaneTexture"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonGroundPlaneTexture->sizePolicy().hasHeightForWidth());
        toolButtonGroundPlaneTexture->setSizePolicy(sizePolicy);
        toolButtonGroundPlaneTexture->setMinimumSize(QSize(20, 22));

        horizontalLayout_5->addWidget(toolButtonGroundPlaneTexture);

        horizontalSpacer_20 = new QSpacerItem(38, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_20);


        gridLayout->addLayout(horizontalLayout_5, 2, 1, 1, 1);

        labelGroundPlaneConstraint = new QLabel(WidgetGlobalSetting);
        labelGroundPlaneConstraint->setObjectName(QString::fromUtf8("labelGroundPlaneConstraint"));
        labelGroundPlaneConstraint->setMinimumSize(QSize(0, 22));

        gridLayout->addWidget(labelGroundPlaneConstraint, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBoxGroundPlaneConstraint = new QCheckBox(WidgetGlobalSetting);
        checkBoxGroundPlaneConstraint->setObjectName(QString::fromUtf8("checkBoxGroundPlaneConstraint"));
        checkBoxGroundPlaneConstraint->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_4->addWidget(checkBoxGroundPlaneConstraint);

        horizontalSpacer_19 = new QSpacerItem(68, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_19);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        line_4 = new QFrame(WidgetGlobalSetting);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 4, 0, 1, 2);

        labelClippingPlaneEnable = new QLabel(WidgetGlobalSetting);
        labelClippingPlaneEnable->setObjectName(QString::fromUtf8("labelClippingPlaneEnable"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelClippingPlaneEnable->sizePolicy().hasHeightForWidth());
        labelClippingPlaneEnable->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelClippingPlaneEnable, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBoxClippingPlaneEnable = new QCheckBox(WidgetGlobalSetting);
        checkBoxClippingPlaneEnable->setObjectName(QString::fromUtf8("checkBoxClippingPlaneEnable"));
        sizePolicy.setHeightForWidth(checkBoxClippingPlaneEnable->sizePolicy().hasHeightForWidth());
        checkBoxClippingPlaneEnable->setSizePolicy(sizePolicy);
        checkBoxClippingPlaneEnable->setMinimumSize(QSize(0, 22));

        horizontalLayout_3->addWidget(checkBoxClippingPlaneEnable);

        toolButtonRecenterClippingPlane = new QToolButton(WidgetGlobalSetting);
        toolButtonRecenterClippingPlane->setObjectName(QString::fromUtf8("toolButtonRecenterClippingPlane"));
        toolButtonRecenterClippingPlane->setMinimumSize(QSize(20, 20));
        toolButtonRecenterClippingPlane->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/icons/recenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonRecenterClippingPlane->setIcon(icon);
        toolButtonRecenterClippingPlane->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(toolButtonRecenterClippingPlane);

        horizontalSpacer_22 = new QSpacerItem(38, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_22);


        gridLayout->addLayout(horizontalLayout_3, 5, 1, 1, 1);

        labelClippingPlaneVisible = new QLabel(WidgetGlobalSetting);
        labelClippingPlaneVisible->setObjectName(QString::fromUtf8("labelClippingPlaneVisible"));
        sizePolicy1.setHeightForWidth(labelClippingPlaneVisible->sizePolicy().hasHeightForWidth());
        labelClippingPlaneVisible->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelClippingPlaneVisible, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxClippingPlaneVisible = new QCheckBox(WidgetGlobalSetting);
        checkBoxClippingPlaneVisible->setObjectName(QString::fromUtf8("checkBoxClippingPlaneVisible"));
        sizePolicy.setHeightForWidth(checkBoxClippingPlaneVisible->sizePolicy().hasHeightForWidth());
        checkBoxClippingPlaneVisible->setSizePolicy(sizePolicy);
        checkBoxClippingPlaneVisible->setMinimumSize(QSize(0, 22));

        horizontalLayout_2->addWidget(checkBoxClippingPlaneVisible);

        toolButtonClippingPlaneColor = new QToolButton(WidgetGlobalSetting);
        toolButtonClippingPlaneColor->setObjectName(QString::fromUtf8("toolButtonClippingPlaneColor"));
        toolButtonClippingPlaneColor->setMinimumSize(QSize(20, 20));
        toolButtonClippingPlaneColor->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Resources/icons/transparency.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonClippingPlaneColor->setIcon(icon1);
        toolButtonClippingPlaneColor->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(toolButtonClippingPlaneColor);

        horizontalSpacer_23 = new QSpacerItem(38, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_23);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        labelCrossSectionEnable = new QLabel(WidgetGlobalSetting);
        labelCrossSectionEnable->setObjectName(QString::fromUtf8("labelCrossSectionEnable"));
        sizePolicy1.setHeightForWidth(labelCrossSectionEnable->sizePolicy().hasHeightForWidth());
        labelCrossSectionEnable->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelCrossSectionEnable, 7, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        checkBoxCrossSectionEnable = new QCheckBox(WidgetGlobalSetting);
        checkBoxCrossSectionEnable->setObjectName(QString::fromUtf8("checkBoxCrossSectionEnable"));
        sizePolicy.setHeightForWidth(checkBoxCrossSectionEnable->sizePolicy().hasHeightForWidth());
        checkBoxCrossSectionEnable->setSizePolicy(sizePolicy);
        checkBoxCrossSectionEnable->setMinimumSize(QSize(0, 22));

        horizontalLayout_10->addWidget(checkBoxCrossSectionEnable);

        doubleSpinBoxCrossSectionThickness = new QDoubleSpinBox(WidgetGlobalSetting);
        doubleSpinBoxCrossSectionThickness->setObjectName(QString::fromUtf8("doubleSpinBoxCrossSectionThickness"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(doubleSpinBoxCrossSectionThickness->sizePolicy().hasHeightForWidth());
        doubleSpinBoxCrossSectionThickness->setSizePolicy(sizePolicy2);
        doubleSpinBoxCrossSectionThickness->setMinimumSize(QSize(0, 0));
        doubleSpinBoxCrossSectionThickness->setDecimals(3);
        doubleSpinBoxCrossSectionThickness->setMinimum(0.001000000000000);
        doubleSpinBoxCrossSectionThickness->setMaximum(100.000000000000000);
        doubleSpinBoxCrossSectionThickness->setSingleStep(0.001000000000000);
        doubleSpinBoxCrossSectionThickness->setValue(0.001000000000000);

        horizontalLayout_10->addWidget(doubleSpinBoxCrossSectionThickness);

        horizontalSpacer_24 = new QSpacerItem(38, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_24);


        gridLayout->addLayout(horizontalLayout_10, 7, 1, 1, 1);

        line_2 = new QFrame(WidgetGlobalSetting);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 8, 0, 2, 2);

        comboBoxSSAOAlgorithm = new QComboBox(WidgetGlobalSetting);
        comboBoxSSAOAlgorithm->setObjectName(QString::fromUtf8("comboBoxSSAOAlgorithm"));

        gridLayout->addWidget(comboBoxSSAOAlgorithm, 9, 1, 2, 1);

        labelSSAO = new QLabel(WidgetGlobalSetting);
        labelSSAO->setObjectName(QString::fromUtf8("labelSSAO"));

        gridLayout->addWidget(labelSSAO, 10, 0, 1, 1);

        labelSSAORadius = new QLabel(WidgetGlobalSetting);
        labelSSAORadius->setObjectName(QString::fromUtf8("labelSSAORadius"));

        gridLayout->addWidget(labelSSAORadius, 11, 0, 1, 1);

        horizontalSliderSSAORadius = new QSlider(WidgetGlobalSetting);
        horizontalSliderSSAORadius->setObjectName(QString::fromUtf8("horizontalSliderSSAORadius"));
        sizePolicy2.setHeightForWidth(horizontalSliderSSAORadius->sizePolicy().hasHeightForWidth());
        horizontalSliderSSAORadius->setSizePolicy(sizePolicy2);
        horizontalSliderSSAORadius->setMinimum(0);
        horizontalSliderSSAORadius->setMaximum(400);
        horizontalSliderSSAORadius->setSingleStep(5);
        horizontalSliderSSAORadius->setPageStep(10);
        horizontalSliderSSAORadius->setValue(200);
        horizontalSliderSSAORadius->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSSAORadius, 11, 1, 1, 1);

        labelSSAOIntensity = new QLabel(WidgetGlobalSetting);
        labelSSAOIntensity->setObjectName(QString::fromUtf8("labelSSAOIntensity"));

        gridLayout->addWidget(labelSSAOIntensity, 12, 0, 1, 1);

        horizontalSliderSSAOIntensity = new QSlider(WidgetGlobalSetting);
        horizontalSliderSSAOIntensity->setObjectName(QString::fromUtf8("horizontalSliderSSAOIntensity"));
        sizePolicy2.setHeightForWidth(horizontalSliderSSAOIntensity->sizePolicy().hasHeightForWidth());
        horizontalSliderSSAOIntensity->setSizePolicy(sizePolicy2);
        horizontalSliderSSAOIntensity->setMinimum(0);
        horizontalSliderSSAOIntensity->setMaximum(400);
        horizontalSliderSSAOIntensity->setSingleStep(5);
        horizontalSliderSSAOIntensity->setPageStep(10);
        horizontalSliderSSAOIntensity->setValue(150);
        horizontalSliderSSAOIntensity->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSSAOIntensity, 12, 1, 1, 1);

        labelSSAOBias = new QLabel(WidgetGlobalSetting);
        labelSSAOBias->setObjectName(QString::fromUtf8("labelSSAOBias"));

        gridLayout->addWidget(labelSSAOBias, 13, 0, 1, 1);

        horizontalSliderSSAOBias = new QSlider(WidgetGlobalSetting);
        horizontalSliderSSAOBias->setObjectName(QString::fromUtf8("horizontalSliderSSAOBias"));
        sizePolicy2.setHeightForWidth(horizontalSliderSSAOBias->sizePolicy().hasHeightForWidth());
        horizontalSliderSSAOBias->setSizePolicy(sizePolicy2);
        horizontalSliderSSAOBias->setMinimum(0);
        horizontalSliderSSAOBias->setMaximum(100);
        horizontalSliderSSAOBias->setPageStep(5);
        horizontalSliderSSAOBias->setValue(10);
        horizontalSliderSSAOBias->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSSAOBias, 13, 1, 1, 1);

        labelSSAOSharpness = new QLabel(WidgetGlobalSetting);
        labelSSAOSharpness->setObjectName(QString::fromUtf8("labelSSAOSharpness"));

        gridLayout->addWidget(labelSSAOSharpness, 14, 0, 1, 1);

        horizontalSliderSSAOSharpness = new QSlider(WidgetGlobalSetting);
        horizontalSliderSSAOSharpness->setObjectName(QString::fromUtf8("horizontalSliderSSAOSharpness"));
        sizePolicy2.setHeightForWidth(horizontalSliderSSAOSharpness->sizePolicy().hasHeightForWidth());
        horizontalSliderSSAOSharpness->setSizePolicy(sizePolicy2);
        horizontalSliderSSAOSharpness->setMinimum(0);
        horizontalSliderSSAOSharpness->setMaximum(12800);
        horizontalSliderSSAOSharpness->setPageStep(5);
        horizontalSliderSSAOSharpness->setValue(4000);
        horizontalSliderSSAOSharpness->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderSSAOSharpness, 14, 1, 1, 1);

        labelEDL = new QLabel(WidgetGlobalSetting);
        labelEDL->setObjectName(QString::fromUtf8("labelEDL"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelEDL->sizePolicy().hasHeightForWidth());
        labelEDL->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(labelEDL, 15, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        checkBoxEyeDomeLighting = new QCheckBox(WidgetGlobalSetting);
        checkBoxEyeDomeLighting->setObjectName(QString::fromUtf8("checkBoxEyeDomeLighting"));

        horizontalLayout_9->addWidget(checkBoxEyeDomeLighting);

        horizontalSpacer_5 = new QSpacerItem(63, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_9, 15, 1, 1, 1);

        labelTransparent = new QLabel(WidgetGlobalSetting);
        labelTransparent->setObjectName(QString::fromUtf8("labelTransparent"));

        gridLayout->addWidget(labelTransparent, 16, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBoxTransparency = new QCheckBox(WidgetGlobalSetting);
        checkBoxTransparency->setObjectName(QString::fromUtf8("checkBoxTransparency"));

        horizontalLayout_8->addWidget(checkBoxTransparency);

        horizontalSpacer_6 = new QSpacerItem(63, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_8, 16, 1, 1, 1);

        line_3 = new QFrame(WidgetGlobalSetting);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 17, 0, 1, 2);

        labelShadow = new QLabel(WidgetGlobalSetting);
        labelShadow->setObjectName(QString::fromUtf8("labelShadow"));

        gridLayout->addWidget(labelShadow, 18, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        checkBoxShadow = new QCheckBox(WidgetGlobalSetting);
        checkBoxShadow->setObjectName(QString::fromUtf8("checkBoxShadow"));

        horizontalLayout_7->addWidget(checkBoxShadow);

        horizontalSpacer_7 = new QSpacerItem(58, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_7, 18, 1, 1, 1);

        labelShadowSmoothPattern = new QLabel(WidgetGlobalSetting);
        labelShadowSmoothPattern->setObjectName(QString::fromUtf8("labelShadowSmoothPattern"));

        gridLayout->addWidget(labelShadowSmoothPattern, 19, 0, 1, 1);

        comboBoxShadowSmoothPattern = new QComboBox(WidgetGlobalSetting);
        comboBoxShadowSmoothPattern->setObjectName(QString::fromUtf8("comboBoxShadowSmoothPattern"));

        gridLayout->addWidget(comboBoxShadowSmoothPattern, 19, 1, 1, 1);

        labelShadowLightDistance = new QLabel(WidgetGlobalSetting);
        labelShadowLightDistance->setObjectName(QString::fromUtf8("labelShadowLightDistance"));

        gridLayout->addWidget(labelShadowLightDistance, 20, 0, 1, 1);

        horizontalSliderShadowLightDistance = new QSlider(WidgetGlobalSetting);
        horizontalSliderShadowLightDistance->setObjectName(QString::fromUtf8("horizontalSliderShadowLightDistance"));
        sizePolicy2.setHeightForWidth(horizontalSliderShadowLightDistance->sizePolicy().hasHeightForWidth());
        horizontalSliderShadowLightDistance->setSizePolicy(sizePolicy2);
        horizontalSliderShadowLightDistance->setMinimum(3);
        horizontalSliderShadowLightDistance->setMaximum(50);
        horizontalSliderShadowLightDistance->setPageStep(5);
        horizontalSliderShadowLightDistance->setValue(50);
        horizontalSliderShadowLightDistance->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderShadowLightDistance, 20, 1, 1, 1);

        labelShadowSoftness = new QLabel(WidgetGlobalSetting);
        labelShadowSoftness->setObjectName(QString::fromUtf8("labelShadowSoftness"));

        gridLayout->addWidget(labelShadowSoftness, 21, 0, 1, 1);

        horizontalSliderShadowSoftness = new QSlider(WidgetGlobalSetting);
        horizontalSliderShadowSoftness->setObjectName(QString::fromUtf8("horizontalSliderShadowSoftness"));
        sizePolicy2.setHeightForWidth(horizontalSliderShadowSoftness->sizePolicy().hasHeightForWidth());
        horizontalSliderShadowSoftness->setSizePolicy(sizePolicy2);
        horizontalSliderShadowSoftness->setMinimum(1);
        horizontalSliderShadowSoftness->setMaximum(100);
        horizontalSliderShadowSoftness->setPageStep(5);
        horizontalSliderShadowSoftness->setValue(60);
        horizontalSliderShadowSoftness->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderShadowSoftness, 21, 1, 1, 1);

        labelShadowDarkness = new QLabel(WidgetGlobalSetting);
        labelShadowDarkness->setObjectName(QString::fromUtf8("labelShadowDarkness"));

        gridLayout->addWidget(labelShadowDarkness, 22, 0, 1, 1);

        horizontalSliderShadowDarkness = new QSlider(WidgetGlobalSetting);
        horizontalSliderShadowDarkness->setObjectName(QString::fromUtf8("horizontalSliderShadowDarkness"));
        sizePolicy2.setHeightForWidth(horizontalSliderShadowDarkness->sizePolicy().hasHeightForWidth());
        horizontalSliderShadowDarkness->setSizePolicy(sizePolicy2);
        horizontalSliderShadowDarkness->setMinimum(1);
        horizontalSliderShadowDarkness->setMaximum(100);
        horizontalSliderShadowDarkness->setPageStep(5);
        horizontalSliderShadowDarkness->setValue(60);
        horizontalSliderShadowDarkness->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderShadowDarkness, 22, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(checkBoxGroundPlane, spinBoxGroundPlaneSize);
        QWidget::setTabOrder(spinBoxGroundPlaneSize, checkBoxGroundPlaneTexture);
        QWidget::setTabOrder(checkBoxGroundPlaneTexture, toolButtonGroundPlaneTexture);
        QWidget::setTabOrder(toolButtonGroundPlaneTexture, checkBoxGroundPlaneConstraint);
        QWidget::setTabOrder(checkBoxGroundPlaneConstraint, checkBoxClippingPlaneEnable);
        QWidget::setTabOrder(checkBoxClippingPlaneEnable, toolButtonRecenterClippingPlane);
        QWidget::setTabOrder(toolButtonRecenterClippingPlane, checkBoxClippingPlaneVisible);
        QWidget::setTabOrder(checkBoxClippingPlaneVisible, toolButtonClippingPlaneColor);
        QWidget::setTabOrder(toolButtonClippingPlaneColor, checkBoxCrossSectionEnable);
        QWidget::setTabOrder(checkBoxCrossSectionEnable, doubleSpinBoxCrossSectionThickness);
        QWidget::setTabOrder(doubleSpinBoxCrossSectionThickness, comboBoxSSAOAlgorithm);
        QWidget::setTabOrder(comboBoxSSAOAlgorithm, horizontalSliderSSAORadius);
        QWidget::setTabOrder(horizontalSliderSSAORadius, horizontalSliderSSAOIntensity);
        QWidget::setTabOrder(horizontalSliderSSAOIntensity, horizontalSliderSSAOBias);
        QWidget::setTabOrder(horizontalSliderSSAOBias, horizontalSliderSSAOSharpness);
        QWidget::setTabOrder(horizontalSliderSSAOSharpness, checkBoxEyeDomeLighting);
        QWidget::setTabOrder(checkBoxEyeDomeLighting, checkBoxTransparency);
        QWidget::setTabOrder(checkBoxTransparency, checkBoxShadow);
        QWidget::setTabOrder(checkBoxShadow, comboBoxShadowSmoothPattern);
        QWidget::setTabOrder(comboBoxShadowSmoothPattern, horizontalSliderShadowLightDistance);
        QWidget::setTabOrder(horizontalSliderShadowLightDistance, horizontalSliderShadowSoftness);
        QWidget::setTabOrder(horizontalSliderShadowSoftness, horizontalSliderShadowDarkness);

        retranslateUi(WidgetGlobalSetting);

        QMetaObject::connectSlotsByName(WidgetGlobalSetting);
    } // setupUi

    void retranslateUi(QWidget *WidgetGlobalSetting)
    {
        WidgetGlobalSetting->setWindowTitle(QApplication::translate("WidgetGlobalSetting", "Global Setting", nullptr));
        labelGroundPlaneTexture_2->setText(QApplication::translate("WidgetGlobalSetting", "Ground", nullptr));
        checkBoxGroundPlane->setText(QString());
        labelGroundPlaneTexture->setText(QApplication::translate("WidgetGlobalSetting", "Texture", nullptr));
        checkBoxGroundPlaneTexture->setText(QString());
        toolButtonGroundPlaneTexture->setText(QApplication::translate("WidgetGlobalSetting", "...", nullptr));
        labelGroundPlaneConstraint->setText(QApplication::translate("WidgetGlobalSetting", "Upright ", nullptr));
        checkBoxGroundPlaneConstraint->setText(QString());
        labelClippingPlaneEnable->setText(QApplication::translate("WidgetGlobalSetting", "Clipping Plane", nullptr));
        checkBoxClippingPlaneEnable->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonRecenterClippingPlane->setToolTip(QApplication::translate("WidgetGlobalSetting", "Re-center the clipping plane", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonRecenterClippingPlane->setText(QString());
        labelClippingPlaneVisible->setText(QApplication::translate("WidgetGlobalSetting", "Visible", nullptr));
        checkBoxClippingPlaneVisible->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonClippingPlaneColor->setToolTip(QApplication::translate("WidgetGlobalSetting", "Click to set the backside color for this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonClippingPlaneColor->setText(QApplication::translate("WidgetGlobalSetting", "...", nullptr));
        labelCrossSectionEnable->setText(QApplication::translate("WidgetGlobalSetting", "Cross-section", nullptr));
        checkBoxCrossSectionEnable->setText(QString());
#ifndef QT_NO_TOOLTIP
        comboBoxSSAOAlgorithm->setToolTip(QApplication::translate("WidgetGlobalSetting", "Smooth pattern for soft shadow", nullptr));
#endif // QT_NO_TOOLTIP
        labelSSAO->setText(QApplication::translate("WidgetGlobalSetting", "SSAO", nullptr));
        labelSSAORadius->setText(QApplication::translate("WidgetGlobalSetting", "Radius", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderSSAORadius->setToolTip(QApplication::translate("WidgetGlobalSetting", "Distance of light source to the scene center (relative to scene radius)", nullptr));
#endif // QT_NO_TOOLTIP
        labelSSAOIntensity->setText(QApplication::translate("WidgetGlobalSetting", "Intensity", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderSSAOIntensity->setToolTip(QApplication::translate("WidgetGlobalSetting", "Distance of light source to the scene center (relative to scene radius)", nullptr));
#endif // QT_NO_TOOLTIP
        labelSSAOBias->setText(QApplication::translate("WidgetGlobalSetting", "Bias", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderSSAOBias->setToolTip(QApplication::translate("WidgetGlobalSetting", "Distance of light source to the scene center (relative to scene radius)", nullptr));
#endif // QT_NO_TOOLTIP
        labelSSAOSharpness->setText(QApplication::translate("WidgetGlobalSetting", "Sharpness", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderSSAOSharpness->setToolTip(QApplication::translate("WidgetGlobalSetting", "Distance of light source to the scene center (relative to scene radius)", nullptr));
#endif // QT_NO_TOOLTIP
        labelEDL->setText(QApplication::translate("WidgetGlobalSetting", "EDL", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxEyeDomeLighting->setToolTip(QApplication::translate("WidgetGlobalSetting", "Enable/Disable eye dome lighting for point clouds", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxEyeDomeLighting->setText(QString());
        labelTransparent->setText(QApplication::translate("WidgetGlobalSetting", "Transparent", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxTransparency->setToolTip(QApplication::translate("WidgetGlobalSetting", "Enable/Disable transparency effect", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxTransparency->setText(QString());
        labelShadow->setText(QApplication::translate("WidgetGlobalSetting", "Shadow", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxShadow->setToolTip(QApplication::translate("WidgetGlobalSetting", "Enable/Disable shadowing", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxShadow->setText(QString());
        labelShadowSmoothPattern->setText(QApplication::translate("WidgetGlobalSetting", "PCF filter", nullptr));
#ifndef QT_NO_TOOLTIP
        comboBoxShadowSmoothPattern->setToolTip(QApplication::translate("WidgetGlobalSetting", "Smooth pattern for soft shadow", nullptr));
#endif // QT_NO_TOOLTIP
        labelShadowLightDistance->setText(QApplication::translate("WidgetGlobalSetting", "Distance", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderShadowLightDistance->setToolTip(QApplication::translate("WidgetGlobalSetting", "Distance of light source to the scene center (relative to scene radius)", nullptr));
#endif // QT_NO_TOOLTIP
        labelShadowSoftness->setText(QApplication::translate("WidgetGlobalSetting", "Softness", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderShadowSoftness->setToolTip(QApplication::translate("WidgetGlobalSetting", "Width of the penumbra region", nullptr));
#endif // QT_NO_TOOLTIP
        labelShadowDarkness->setText(QApplication::translate("WidgetGlobalSetting", "Darkness", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderShadowDarkness->setToolTip(QApplication::translate("WidgetGlobalSetting", "The darkness of the umbra region", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class WidgetGlobalSetting: public Ui_WidgetGlobalSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_GLOBAL_SETTING_H
