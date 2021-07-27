/********************************************************************************
** Form generated from reading UI file 'widget_drawable_points.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DRAWABLE_POINTS_H
#define UI_WIDGET_DRAWABLE_POINTS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetPointsDrawable
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelDrawableName;
    QComboBox *comboBoxDrawables;
    QLabel *labelVisible;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxVisible;
    QSpacerItem *spacerVisible;
    QLabel *labelPointSize;
    QHBoxLayout *horizontalLayoutPhone;
    QDoubleSpinBox *doubleSpinBoxPointSize;
    QSpacerItem *spacerThickness;
    QLabel *labelImposterStyle;
    QComboBox *comboBoxImposterStyle;
    QLabel *labelLighting;
    QComboBox *comboBoxLightingOptions;
    QLabel *labelColorScheme;
    QComboBox *comboBoxColorScheme;
    QHBoxLayout *horizontalLayoutLabelDefaultColor;
    QSpacerItem *horizontalSpaceLabelDefaultColor;
    QLabel *labelDefaultColor;
    QHBoxLayout *horizontalLayoutDefaultColor;
    QToolButton *toolButtonDefaultColor;
    QSpacerItem *spacer_2;
    QLabel *labelBackColor;
    QCheckBox *checkBoxBackColor;
    QSpacerItem *spacerBackColor;
    QToolButton *toolButtonBackColor;
    QLabel *labelScalarFieldStyle;
    QComboBox *comboBoxScalarFieldStyle;
    QHBoxLayout *horizontalLayoutLabelClamp_2;
    QSpacerItem *horizontalSpacerLabelClamp_2;
    QLabel *labelScalarFieldDiscrete;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxScalarFieldDiscrete;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelScalarFieldStripes;
    QSpinBox *spinBoxScalarFieldNumStrips;
    QHBoxLayout *horizontalLayoutLabelClamp;
    QSpacerItem *horizontalSpacerLabelClamp;
    QLabel *labelScalarFieldClamp;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxScalarFieldClamp;
    QDoubleSpinBox *doubleSpinBoxScalarFieldClampLower;
    QDoubleSpinBox *doubleSpinBoxScalarFieldClampUpper;
    QLabel *labelVectorField;
    QComboBox *comboBoxVectorField;
    QHBoxLayout *horizontalLayoutScale;
    QSpacerItem *horizontalSpacerVectorFieldLabelScale;
    QLabel *labelVectorFieldScale;
    QHBoxLayout *horizontalLayoutVectorFieldScale;
    QDoubleSpinBox *doubleSpinBoxVectorFieldScale;
    QSpacerItem *spacerVectorFieldScale;
    QLabel *labelHighlight;
    QHBoxLayout *horizontalLayoutHighlight;
    QCheckBox *checkBoxHighlight;
    QSpinBox *spinBoxHighlightMin;
    QSpinBox *spinBoxHighlightMax;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetPointsDrawable)
    {
        if (WidgetPointsDrawable->objectName().isEmpty())
            WidgetPointsDrawable->setObjectName(QString::fromUtf8("WidgetPointsDrawable"));
        WidgetPointsDrawable->resize(336, 501);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WidgetPointsDrawable->sizePolicy().hasHeightForWidth());
        WidgetPointsDrawable->setSizePolicy(sizePolicy);
        WidgetPointsDrawable->setMinimumSize(QSize(50, 0));
        WidgetPointsDrawable->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(WidgetPointsDrawable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelDrawableName = new QLabel(WidgetPointsDrawable);
        labelDrawableName->setObjectName(QString::fromUtf8("labelDrawableName"));
        labelDrawableName->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelDrawableName, 0, 0, 1, 1);

        comboBoxDrawables = new QComboBox(WidgetPointsDrawable);
        comboBoxDrawables->addItem(QString());
        comboBoxDrawables->setObjectName(QString::fromUtf8("comboBoxDrawables"));

        gridLayout->addWidget(comboBoxDrawables, 0, 1, 1, 1);

        labelVisible = new QLabel(WidgetPointsDrawable);
        labelVisible->setObjectName(QString::fromUtf8("labelVisible"));
        labelVisible->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelVisible, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxVisible = new QCheckBox(WidgetPointsDrawable);
        checkBoxVisible->setObjectName(QString::fromUtf8("checkBoxVisible"));
        checkBoxVisible->setChecked(true);

        horizontalLayout->addWidget(checkBoxVisible);

        spacerVisible = new QSpacerItem(128, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerVisible);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        labelPointSize = new QLabel(WidgetPointsDrawable);
        labelPointSize->setObjectName(QString::fromUtf8("labelPointSize"));

        gridLayout->addWidget(labelPointSize, 2, 0, 1, 1);

        horizontalLayoutPhone = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayoutPhone->setSpacing(-1);
#endif
        horizontalLayoutPhone->setObjectName(QString::fromUtf8("horizontalLayoutPhone"));
        doubleSpinBoxPointSize = new QDoubleSpinBox(WidgetPointsDrawable);
        doubleSpinBoxPointSize->setObjectName(QString::fromUtf8("doubleSpinBoxPointSize"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(doubleSpinBoxPointSize->sizePolicy().hasHeightForWidth());
        doubleSpinBoxPointSize->setSizePolicy(sizePolicy1);
        doubleSpinBoxPointSize->setMinimumSize(QSize(60, 0));
        doubleSpinBoxPointSize->setDecimals(1);
        doubleSpinBoxPointSize->setMinimum(1.000000000000000);

        horizontalLayoutPhone->addWidget(doubleSpinBoxPointSize);

        spacerThickness = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutPhone->addItem(spacerThickness);


        gridLayout->addLayout(horizontalLayoutPhone, 2, 1, 1, 1);

        labelImposterStyle = new QLabel(WidgetPointsDrawable);
        labelImposterStyle->setObjectName(QString::fromUtf8("labelImposterStyle"));

        gridLayout->addWidget(labelImposterStyle, 3, 0, 1, 1);

        comboBoxImposterStyle = new QComboBox(WidgetPointsDrawable);
        comboBoxImposterStyle->addItem(QString());
        comboBoxImposterStyle->addItem(QString());
        comboBoxImposterStyle->addItem(QString());
        comboBoxImposterStyle->setObjectName(QString::fromUtf8("comboBoxImposterStyle"));

        gridLayout->addWidget(comboBoxImposterStyle, 3, 1, 1, 1);

        labelLighting = new QLabel(WidgetPointsDrawable);
        labelLighting->setObjectName(QString::fromUtf8("labelLighting"));
        labelLighting->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelLighting, 4, 0, 1, 1);

        comboBoxLightingOptions = new QComboBox(WidgetPointsDrawable);
        comboBoxLightingOptions->addItem(QString());
        comboBoxLightingOptions->addItem(QString());
        comboBoxLightingOptions->addItem(QString());
        comboBoxLightingOptions->setObjectName(QString::fromUtf8("comboBoxLightingOptions"));

        gridLayout->addWidget(comboBoxLightingOptions, 4, 1, 1, 1);

        labelColorScheme = new QLabel(WidgetPointsDrawable);
        labelColorScheme->setObjectName(QString::fromUtf8("labelColorScheme"));

        gridLayout->addWidget(labelColorScheme, 5, 0, 1, 1);

        comboBoxColorScheme = new QComboBox(WidgetPointsDrawable);
        comboBoxColorScheme->addItem(QString());
        comboBoxColorScheme->addItem(QString());
        comboBoxColorScheme->setObjectName(QString::fromUtf8("comboBoxColorScheme"));

        gridLayout->addWidget(comboBoxColorScheme, 5, 1, 1, 1);

        horizontalLayoutLabelDefaultColor = new QHBoxLayout();
        horizontalLayoutLabelDefaultColor->setObjectName(QString::fromUtf8("horizontalLayoutLabelDefaultColor"));
        horizontalSpaceLabelDefaultColor = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelDefaultColor->addItem(horizontalSpaceLabelDefaultColor);

        labelDefaultColor = new QLabel(WidgetPointsDrawable);
        labelDefaultColor->setObjectName(QString::fromUtf8("labelDefaultColor"));

        horizontalLayoutLabelDefaultColor->addWidget(labelDefaultColor, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayoutLabelDefaultColor, 6, 0, 1, 1);

        horizontalLayoutDefaultColor = new QHBoxLayout();
        horizontalLayoutDefaultColor->setObjectName(QString::fromUtf8("horizontalLayoutDefaultColor"));
        toolButtonDefaultColor = new QToolButton(WidgetPointsDrawable);
        toolButtonDefaultColor->setObjectName(QString::fromUtf8("toolButtonDefaultColor"));
        toolButtonDefaultColor->setMinimumSize(QSize(20, 20));
        toolButtonDefaultColor->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Resources/icons/transparency.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonDefaultColor->setIcon(icon);
        toolButtonDefaultColor->setIconSize(QSize(20, 20));

        horizontalLayoutDefaultColor->addWidget(toolButtonDefaultColor);

        spacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutDefaultColor->addItem(spacer_2);

        labelBackColor = new QLabel(WidgetPointsDrawable);
        labelBackColor->setObjectName(QString::fromUtf8("labelBackColor"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelBackColor->sizePolicy().hasHeightForWidth());
        labelBackColor->setSizePolicy(sizePolicy2);
        labelBackColor->setMinimumSize(QSize(30, 22));

        horizontalLayoutDefaultColor->addWidget(labelBackColor);

        checkBoxBackColor = new QCheckBox(WidgetPointsDrawable);
        checkBoxBackColor->setObjectName(QString::fromUtf8("checkBoxBackColor"));
        checkBoxBackColor->setMinimumSize(QSize(0, 20));
        checkBoxBackColor->setChecked(false);

        horizontalLayoutDefaultColor->addWidget(checkBoxBackColor);

        spacerBackColor = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayoutDefaultColor->addItem(spacerBackColor);

        toolButtonBackColor = new QToolButton(WidgetPointsDrawable);
        toolButtonBackColor->setObjectName(QString::fromUtf8("toolButtonBackColor"));
        toolButtonBackColor->setMinimumSize(QSize(20, 20));
        toolButtonBackColor->setMaximumSize(QSize(20, 20));
        toolButtonBackColor->setIcon(icon);
        toolButtonBackColor->setIconSize(QSize(20, 20));

        horizontalLayoutDefaultColor->addWidget(toolButtonBackColor);


        gridLayout->addLayout(horizontalLayoutDefaultColor, 6, 1, 1, 1);

        labelScalarFieldStyle = new QLabel(WidgetPointsDrawable);
        labelScalarFieldStyle->setObjectName(QString::fromUtf8("labelScalarFieldStyle"));
        sizePolicy2.setHeightForWidth(labelScalarFieldStyle->sizePolicy().hasHeightForWidth());
        labelScalarFieldStyle->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelScalarFieldStyle, 7, 0, 1, 1);

        comboBoxScalarFieldStyle = new QComboBox(WidgetPointsDrawable);
        comboBoxScalarFieldStyle->setObjectName(QString::fromUtf8("comboBoxScalarFieldStyle"));
        sizePolicy1.setHeightForWidth(comboBoxScalarFieldStyle->sizePolicy().hasHeightForWidth());
        comboBoxScalarFieldStyle->setSizePolicy(sizePolicy1);
        comboBoxScalarFieldStyle->setMinimumSize(QSize(20, 22));

        gridLayout->addWidget(comboBoxScalarFieldStyle, 7, 1, 1, 1);

        horizontalLayoutLabelClamp_2 = new QHBoxLayout();
        horizontalLayoutLabelClamp_2->setObjectName(QString::fromUtf8("horizontalLayoutLabelClamp_2"));
        horizontalSpacerLabelClamp_2 = new QSpacerItem(12, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelClamp_2->addItem(horizontalSpacerLabelClamp_2);

        labelScalarFieldDiscrete = new QLabel(WidgetPointsDrawable);
        labelScalarFieldDiscrete->setObjectName(QString::fromUtf8("labelScalarFieldDiscrete"));
        sizePolicy2.setHeightForWidth(labelScalarFieldDiscrete->sizePolicy().hasHeightForWidth());
        labelScalarFieldDiscrete->setSizePolicy(sizePolicy2);

        horizontalLayoutLabelClamp_2->addWidget(labelScalarFieldDiscrete);


        gridLayout->addLayout(horizontalLayoutLabelClamp_2, 8, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBoxScalarFieldDiscrete = new QCheckBox(WidgetPointsDrawable);
        checkBoxScalarFieldDiscrete->setObjectName(QString::fromUtf8("checkBoxScalarFieldDiscrete"));

        horizontalLayout_4->addWidget(checkBoxScalarFieldDiscrete);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        labelScalarFieldStripes = new QLabel(WidgetPointsDrawable);
        labelScalarFieldStripes->setObjectName(QString::fromUtf8("labelScalarFieldStripes"));
        sizePolicy2.setHeightForWidth(labelScalarFieldStripes->sizePolicy().hasHeightForWidth());
        labelScalarFieldStripes->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(labelScalarFieldStripes);

        spinBoxScalarFieldNumStrips = new QSpinBox(WidgetPointsDrawable);
        spinBoxScalarFieldNumStrips->setObjectName(QString::fromUtf8("spinBoxScalarFieldNumStrips"));
        sizePolicy1.setHeightForWidth(spinBoxScalarFieldNumStrips->sizePolicy().hasHeightForWidth());
        spinBoxScalarFieldNumStrips->setSizePolicy(sizePolicy1);
        spinBoxScalarFieldNumStrips->setMinimumSize(QSize(60, 0));
        spinBoxScalarFieldNumStrips->setAlignment(Qt::AlignCenter);
        spinBoxScalarFieldNumStrips->setMinimum(4);
        spinBoxScalarFieldNumStrips->setMaximum(128);
        spinBoxScalarFieldNumStrips->setSingleStep(4);
        spinBoxScalarFieldNumStrips->setValue(16);

        horizontalLayout_4->addWidget(spinBoxScalarFieldNumStrips);


        gridLayout->addLayout(horizontalLayout_4, 8, 1, 1, 1);

        horizontalLayoutLabelClamp = new QHBoxLayout();
        horizontalLayoutLabelClamp->setObjectName(QString::fromUtf8("horizontalLayoutLabelClamp"));
        horizontalSpacerLabelClamp = new QSpacerItem(12, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelClamp->addItem(horizontalSpacerLabelClamp);

        labelScalarFieldClamp = new QLabel(WidgetPointsDrawable);
        labelScalarFieldClamp->setObjectName(QString::fromUtf8("labelScalarFieldClamp"));
        sizePolicy2.setHeightForWidth(labelScalarFieldClamp->sizePolicy().hasHeightForWidth());
        labelScalarFieldClamp->setSizePolicy(sizePolicy2);

        horizontalLayoutLabelClamp->addWidget(labelScalarFieldClamp);


        gridLayout->addLayout(horizontalLayoutLabelClamp, 9, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxScalarFieldClamp = new QCheckBox(WidgetPointsDrawable);
        checkBoxScalarFieldClamp->setObjectName(QString::fromUtf8("checkBoxScalarFieldClamp"));
        checkBoxScalarFieldClamp->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxScalarFieldClamp);

        doubleSpinBoxScalarFieldClampLower = new QDoubleSpinBox(WidgetPointsDrawable);
        doubleSpinBoxScalarFieldClampLower->setObjectName(QString::fromUtf8("doubleSpinBoxScalarFieldClampLower"));
        sizePolicy1.setHeightForWidth(doubleSpinBoxScalarFieldClampLower->sizePolicy().hasHeightForWidth());
        doubleSpinBoxScalarFieldClampLower->setSizePolicy(sizePolicy1);
        doubleSpinBoxScalarFieldClampLower->setMinimumSize(QSize(60, 0));
        doubleSpinBoxScalarFieldClampLower->setDecimals(1);
        doubleSpinBoxScalarFieldClampLower->setValue(5.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxScalarFieldClampLower);

        doubleSpinBoxScalarFieldClampUpper = new QDoubleSpinBox(WidgetPointsDrawable);
        doubleSpinBoxScalarFieldClampUpper->setObjectName(QString::fromUtf8("doubleSpinBoxScalarFieldClampUpper"));
        sizePolicy1.setHeightForWidth(doubleSpinBoxScalarFieldClampUpper->sizePolicy().hasHeightForWidth());
        doubleSpinBoxScalarFieldClampUpper->setSizePolicy(sizePolicy1);
        doubleSpinBoxScalarFieldClampUpper->setMinimumSize(QSize(60, 0));
        doubleSpinBoxScalarFieldClampUpper->setDecimals(1);
        doubleSpinBoxScalarFieldClampUpper->setValue(5.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxScalarFieldClampUpper);


        gridLayout->addLayout(horizontalLayout_2, 9, 1, 1, 1);

        labelVectorField = new QLabel(WidgetPointsDrawable);
        labelVectorField->setObjectName(QString::fromUtf8("labelVectorField"));
        sizePolicy2.setHeightForWidth(labelVectorField->sizePolicy().hasHeightForWidth());
        labelVectorField->setSizePolicy(sizePolicy2);
        labelVectorField->setMinimumSize(QSize(75, 22));

        gridLayout->addWidget(labelVectorField, 10, 0, 1, 1);

        comboBoxVectorField = new QComboBox(WidgetPointsDrawable);
        comboBoxVectorField->addItem(QString());
        comboBoxVectorField->setObjectName(QString::fromUtf8("comboBoxVectorField"));

        gridLayout->addWidget(comboBoxVectorField, 10, 1, 1, 1);

        horizontalLayoutScale = new QHBoxLayout();
        horizontalLayoutScale->setObjectName(QString::fromUtf8("horizontalLayoutScale"));
        horizontalSpacerVectorFieldLabelScale = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutScale->addItem(horizontalSpacerVectorFieldLabelScale);

        labelVectorFieldScale = new QLabel(WidgetPointsDrawable);
        labelVectorFieldScale->setObjectName(QString::fromUtf8("labelVectorFieldScale"));

        horizontalLayoutScale->addWidget(labelVectorFieldScale, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayoutScale, 11, 0, 1, 1);

        horizontalLayoutVectorFieldScale = new QHBoxLayout();
        horizontalLayoutVectorFieldScale->setObjectName(QString::fromUtf8("horizontalLayoutVectorFieldScale"));
        doubleSpinBoxVectorFieldScale = new QDoubleSpinBox(WidgetPointsDrawable);
        doubleSpinBoxVectorFieldScale->setObjectName(QString::fromUtf8("doubleSpinBoxVectorFieldScale"));
        sizePolicy1.setHeightForWidth(doubleSpinBoxVectorFieldScale->sizePolicy().hasHeightForWidth());
        doubleSpinBoxVectorFieldScale->setSizePolicy(sizePolicy1);
        doubleSpinBoxVectorFieldScale->setMinimumSize(QSize(60, 0));
        doubleSpinBoxVectorFieldScale->setDecimals(1);
        doubleSpinBoxVectorFieldScale->setMinimum(0.100000000000000);
        doubleSpinBoxVectorFieldScale->setMaximum(50.000000000000000);
        doubleSpinBoxVectorFieldScale->setSingleStep(0.100000000000000);
        doubleSpinBoxVectorFieldScale->setValue(1.000000000000000);

        horizontalLayoutVectorFieldScale->addWidget(doubleSpinBoxVectorFieldScale);

        spacerVectorFieldScale = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutVectorFieldScale->addItem(spacerVectorFieldScale);


        gridLayout->addLayout(horizontalLayoutVectorFieldScale, 11, 1, 1, 1);

        labelHighlight = new QLabel(WidgetPointsDrawable);
        labelHighlight->setObjectName(QString::fromUtf8("labelHighlight"));

        gridLayout->addWidget(labelHighlight, 12, 0, 1, 1);

        horizontalLayoutHighlight = new QHBoxLayout();
        horizontalLayoutHighlight->setObjectName(QString::fromUtf8("horizontalLayoutHighlight"));
        checkBoxHighlight = new QCheckBox(WidgetPointsDrawable);
        checkBoxHighlight->setObjectName(QString::fromUtf8("checkBoxHighlight"));

        horizontalLayoutHighlight->addWidget(checkBoxHighlight);

        spinBoxHighlightMin = new QSpinBox(WidgetPointsDrawable);
        spinBoxHighlightMin->setObjectName(QString::fromUtf8("spinBoxHighlightMin"));
        sizePolicy1.setHeightForWidth(spinBoxHighlightMin->sizePolicy().hasHeightForWidth());
        spinBoxHighlightMin->setSizePolicy(sizePolicy1);
        spinBoxHighlightMin->setMinimumSize(QSize(60, 0));
        spinBoxHighlightMin->setAlignment(Qt::AlignCenter);
        spinBoxHighlightMin->setMinimum(-1);
        spinBoxHighlightMin->setMaximum(999999999);
        spinBoxHighlightMin->setValue(-1);

        horizontalLayoutHighlight->addWidget(spinBoxHighlightMin);

        spinBoxHighlightMax = new QSpinBox(WidgetPointsDrawable);
        spinBoxHighlightMax->setObjectName(QString::fromUtf8("spinBoxHighlightMax"));
        sizePolicy1.setHeightForWidth(spinBoxHighlightMax->sizePolicy().hasHeightForWidth());
        spinBoxHighlightMax->setSizePolicy(sizePolicy1);
        spinBoxHighlightMax->setMinimumSize(QSize(60, 0));
        spinBoxHighlightMax->setAlignment(Qt::AlignCenter);
        spinBoxHighlightMax->setMinimum(-1);
        spinBoxHighlightMax->setMaximum(999999999);
        spinBoxHighlightMax->setValue(-1);

        horizontalLayoutHighlight->addWidget(spinBoxHighlightMax);


        gridLayout->addLayout(horizontalLayoutHighlight, 12, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(comboBoxDrawables, checkBoxVisible);
        QWidget::setTabOrder(checkBoxVisible, doubleSpinBoxPointSize);
        QWidget::setTabOrder(doubleSpinBoxPointSize, comboBoxImposterStyle);
        QWidget::setTabOrder(comboBoxImposterStyle, comboBoxLightingOptions);
        QWidget::setTabOrder(comboBoxLightingOptions, comboBoxColorScheme);
        QWidget::setTabOrder(comboBoxColorScheme, toolButtonDefaultColor);
        QWidget::setTabOrder(toolButtonDefaultColor, checkBoxBackColor);
        QWidget::setTabOrder(checkBoxBackColor, toolButtonBackColor);
        QWidget::setTabOrder(toolButtonBackColor, comboBoxScalarFieldStyle);
        QWidget::setTabOrder(comboBoxScalarFieldStyle, checkBoxScalarFieldDiscrete);
        QWidget::setTabOrder(checkBoxScalarFieldDiscrete, spinBoxScalarFieldNumStrips);
        QWidget::setTabOrder(spinBoxScalarFieldNumStrips, checkBoxScalarFieldClamp);
        QWidget::setTabOrder(checkBoxScalarFieldClamp, doubleSpinBoxScalarFieldClampLower);
        QWidget::setTabOrder(doubleSpinBoxScalarFieldClampLower, doubleSpinBoxScalarFieldClampUpper);
        QWidget::setTabOrder(doubleSpinBoxScalarFieldClampUpper, comboBoxVectorField);
        QWidget::setTabOrder(comboBoxVectorField, doubleSpinBoxVectorFieldScale);
        QWidget::setTabOrder(doubleSpinBoxVectorFieldScale, checkBoxHighlight);
        QWidget::setTabOrder(checkBoxHighlight, spinBoxHighlightMin);
        QWidget::setTabOrder(spinBoxHighlightMin, spinBoxHighlightMax);

        retranslateUi(WidgetPointsDrawable);

        QMetaObject::connectSlotsByName(WidgetPointsDrawable);
    } // setupUi

    void retranslateUi(QWidget *WidgetPointsDrawable)
    {
        WidgetPointsDrawable->setWindowTitle(QApplication::translate("WidgetPointsDrawable", "Surface mesh renderer", nullptr));
        labelDrawableName->setText(QApplication::translate("WidgetPointsDrawable", "Drawable", nullptr));
        comboBoxDrawables->setItemText(0, QApplication::translate("WidgetPointsDrawable", "not available", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxDrawables->setToolTip(QApplication::translate("WidgetPointsDrawable", "Select the drawable to be visualized", nullptr));
#endif // QT_NO_TOOLTIP
        labelVisible->setText(QApplication::translate("WidgetPointsDrawable", "Visible", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxVisible->setToolTip(QApplication::translate("WidgetPointsDrawable", "Show/Hide this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxVisible->setText(QString());
        labelPointSize->setText(QApplication::translate("WidgetPointsDrawable", "Point Size", nullptr));
        labelImposterStyle->setText(QApplication::translate("WidgetPointsDrawable", "Imposter", nullptr));
        comboBoxImposterStyle->setItemText(0, QApplication::translate("WidgetPointsDrawable", "plain", nullptr));
        comboBoxImposterStyle->setItemText(1, QApplication::translate("WidgetPointsDrawable", "sphere", nullptr));
        comboBoxImposterStyle->setItemText(2, QApplication::translate("WidgetPointsDrawable", "surfel", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxImposterStyle->setToolTip(QApplication::translate("WidgetPointsDrawable", "Select how color is assigned to each face", nullptr));
#endif // QT_NO_TOOLTIP
        labelLighting->setText(QApplication::translate("WidgetPointsDrawable", "Lighting", nullptr));
        comboBoxLightingOptions->setItemText(0, QApplication::translate("WidgetPointsDrawable", "front only", nullptr));
        comboBoxLightingOptions->setItemText(1, QApplication::translate("WidgetPointsDrawable", "front and back", nullptr));
        comboBoxLightingOptions->setItemText(2, QApplication::translate("WidgetPointsDrawable", "disabled", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxLightingOptions->setToolTip(QApplication::translate("WidgetPointsDrawable", "Select how lighting is implemented", nullptr));
#endif // QT_NO_TOOLTIP
        labelColorScheme->setText(QApplication::translate("WidgetPointsDrawable", "Coloring", nullptr));
        comboBoxColorScheme->setItemText(0, QApplication::translate("WidgetPointsDrawable", "uniform color", nullptr));
        comboBoxColorScheme->setItemText(1, QApplication::translate("WidgetPointsDrawable", "use color property", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxColorScheme->setToolTip(QApplication::translate("WidgetPointsDrawable", "Select how color is assigned to each face", nullptr));
#endif // QT_NO_TOOLTIP
        labelDefaultColor->setText(QApplication::translate("WidgetPointsDrawable", "Default", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonDefaultColor->setToolTip(QApplication::translate("WidgetPointsDrawable", "Click to set a uniform color for this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonDefaultColor->setText(QApplication::translate("WidgetPointsDrawable", "...", nullptr));
        labelBackColor->setText(QApplication::translate("WidgetPointsDrawable", "Back", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxBackColor->setToolTip(QApplication::translate("WidgetPointsDrawable", "Enable/Disable distinct coloring for the back side of this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxBackColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonBackColor->setToolTip(QApplication::translate("WidgetPointsDrawable", "Click to set the backside color for this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonBackColor->setText(QApplication::translate("WidgetPointsDrawable", "...", nullptr));
        labelScalarFieldStyle->setText(QApplication::translate("WidgetPointsDrawable", "Scalar Field", nullptr));
        labelScalarFieldDiscrete->setText(QApplication::translate("WidgetPointsDrawable", "Discrete", nullptr));
        checkBoxScalarFieldDiscrete->setText(QString());
        labelScalarFieldStripes->setText(QApplication::translate("WidgetPointsDrawable", "Stripes", nullptr));
#ifndef QT_NO_TOOLTIP
        spinBoxScalarFieldNumStrips->setToolTip(QApplication::translate("WidgetPointsDrawable", "The number of discrete colors.", nullptr));
#endif // QT_NO_TOOLTIP
        labelScalarFieldClamp->setText(QApplication::translate("WidgetPointsDrawable", "Clamp(%)", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxScalarFieldClamp->setToolTip(QApplication::translate("WidgetPointsDrawable", "Check to clamp the specified percent of lower and upper values.", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxScalarFieldClamp->setText(QString());
        labelVectorField->setText(QApplication::translate("WidgetPointsDrawable", "Vector Field", nullptr));
        comboBoxVectorField->setItemText(0, QApplication::translate("WidgetPointsDrawable", "not available", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxVectorField->setToolTip(QApplication::translate("WidgetPointsDrawable", "Select the drawable to be visualized", nullptr));
#endif // QT_NO_TOOLTIP
        labelVectorFieldScale->setText(QApplication::translate("WidgetPointsDrawable", "Scale", nullptr));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxVectorFieldScale->setToolTip(QApplication::translate("WidgetPointsDrawable", "Adjust the length of the vectors.\n"
"The scale is relative to the average edge lenght of the model.", nullptr));
#endif // QT_NO_TOOLTIP
        labelHighlight->setText(QApplication::translate("WidgetPointsDrawable", "Highlight", nullptr));
        checkBoxHighlight->setText(QString());
#ifndef QT_NO_TOOLTIP
        spinBoxHighlightMin->setToolTip(QApplication::translate("WidgetPointsDrawable", "The lower bound of the triange range to be highlighted.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBoxHighlightMax->setToolTip(QApplication::translate("WidgetPointsDrawable", "The upper bound of the triange range to be highlighted.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class WidgetPointsDrawable: public Ui_WidgetPointsDrawable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DRAWABLE_POINTS_H
