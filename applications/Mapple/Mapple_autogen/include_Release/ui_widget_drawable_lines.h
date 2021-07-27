/********************************************************************************
** Form generated from reading UI file 'widget_drawable_lines.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DRAWABLE_LINES_H
#define UI_WIDGET_DRAWABLE_LINES_H

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

class Ui_WidgetLinesDrawable
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelDrawableName;
    QComboBox *comboBoxDrawables;
    QLabel *labelVisible;
    QCheckBox *checkBoxVisible;
    QSpacerItem *spacerVisible;
    QLabel *labelLineWidth;
    QHBoxLayout *horizontalLayoutPhone;
    QDoubleSpinBox *doubleSpinBoxLineWidth;
    QSpacerItem *spacerThickness;
    QLabel *labelImposterStyle;
    QComboBox *comboBoxImposterStyle;
    QLabel *labelColorScheme;
    QComboBox *comboBoxColorScheme;
    QHBoxLayout *horizontalLayoutLabelDefaultColor;
    QSpacerItem *horizontalSpaceLabelDefaultColor;
    QLabel *labelDefaultColor;
    QHBoxLayout *horizontalLayoutDefaultColor;
    QToolButton *toolButtonDefaultColor;
    QSpacerItem *spacer;
    QLabel *labelScalarFieldStyle;
    QComboBox *comboBoxScalarFieldStyle;
    QHBoxLayout *horizontalLayoutLabelClamp_4;
    QSpacerItem *horizontalSpacerLabelClamp_4;
    QLabel *labelScalarFieldDiscrete;
    QHBoxLayout *horizontalLayout;
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
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxHighlight;
    QSpinBox *spinBoxHighlightMin;
    QSpinBox *spinBoxHighlightMax;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetLinesDrawable)
    {
        if (WidgetLinesDrawable->objectName().isEmpty())
            WidgetLinesDrawable->setObjectName(QString::fromUtf8("WidgetLinesDrawable"));
        WidgetLinesDrawable->resize(336, 451);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WidgetLinesDrawable->sizePolicy().hasHeightForWidth());
        WidgetLinesDrawable->setSizePolicy(sizePolicy);
        WidgetLinesDrawable->setMinimumSize(QSize(50, 0));
        WidgetLinesDrawable->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(WidgetLinesDrawable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelDrawableName = new QLabel(WidgetLinesDrawable);
        labelDrawableName->setObjectName(QString::fromUtf8("labelDrawableName"));
        labelDrawableName->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelDrawableName, 0, 0, 1, 1);

        comboBoxDrawables = new QComboBox(WidgetLinesDrawable);
        comboBoxDrawables->addItem(QString());
        comboBoxDrawables->setObjectName(QString::fromUtf8("comboBoxDrawables"));

        gridLayout->addWidget(comboBoxDrawables, 0, 1, 1, 2);

        labelVisible = new QLabel(WidgetLinesDrawable);
        labelVisible->setObjectName(QString::fromUtf8("labelVisible"));
        labelVisible->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelVisible, 1, 0, 1, 1);

        checkBoxVisible = new QCheckBox(WidgetLinesDrawable);
        checkBoxVisible->setObjectName(QString::fromUtf8("checkBoxVisible"));
        checkBoxVisible->setChecked(true);

        gridLayout->addWidget(checkBoxVisible, 1, 1, 1, 1);

        spacerVisible = new QSpacerItem(128, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerVisible, 1, 2, 1, 1);

        labelLineWidth = new QLabel(WidgetLinesDrawable);
        labelLineWidth->setObjectName(QString::fromUtf8("labelLineWidth"));

        gridLayout->addWidget(labelLineWidth, 2, 0, 1, 1);

        horizontalLayoutPhone = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayoutPhone->setSpacing(-1);
#endif
        horizontalLayoutPhone->setObjectName(QString::fromUtf8("horizontalLayoutPhone"));
        doubleSpinBoxLineWidth = new QDoubleSpinBox(WidgetLinesDrawable);
        doubleSpinBoxLineWidth->setObjectName(QString::fromUtf8("doubleSpinBoxLineWidth"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(doubleSpinBoxLineWidth->sizePolicy().hasHeightForWidth());
        doubleSpinBoxLineWidth->setSizePolicy(sizePolicy1);
        doubleSpinBoxLineWidth->setMinimumSize(QSize(60, 0));
        doubleSpinBoxLineWidth->setDecimals(1);
        doubleSpinBoxLineWidth->setMinimum(1.000000000000000);
        doubleSpinBoxLineWidth->setValue(1.000000000000000);

        horizontalLayoutPhone->addWidget(doubleSpinBoxLineWidth);

        spacerThickness = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutPhone->addItem(spacerThickness);


        gridLayout->addLayout(horizontalLayoutPhone, 2, 1, 1, 2);

        labelImposterStyle = new QLabel(WidgetLinesDrawable);
        labelImposterStyle->setObjectName(QString::fromUtf8("labelImposterStyle"));

        gridLayout->addWidget(labelImposterStyle, 3, 0, 1, 1);

        comboBoxImposterStyle = new QComboBox(WidgetLinesDrawable);
        comboBoxImposterStyle->addItem(QString());
        comboBoxImposterStyle->addItem(QString());
        comboBoxImposterStyle->addItem(QString());
        comboBoxImposterStyle->setObjectName(QString::fromUtf8("comboBoxImposterStyle"));

        gridLayout->addWidget(comboBoxImposterStyle, 3, 1, 1, 2);

        labelColorScheme = new QLabel(WidgetLinesDrawable);
        labelColorScheme->setObjectName(QString::fromUtf8("labelColorScheme"));

        gridLayout->addWidget(labelColorScheme, 4, 0, 1, 1);

        comboBoxColorScheme = new QComboBox(WidgetLinesDrawable);
        comboBoxColorScheme->addItem(QString());
        comboBoxColorScheme->addItem(QString());
        comboBoxColorScheme->setObjectName(QString::fromUtf8("comboBoxColorScheme"));

        gridLayout->addWidget(comboBoxColorScheme, 4, 1, 1, 2);

        horizontalLayoutLabelDefaultColor = new QHBoxLayout();
        horizontalLayoutLabelDefaultColor->setObjectName(QString::fromUtf8("horizontalLayoutLabelDefaultColor"));
        horizontalSpaceLabelDefaultColor = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelDefaultColor->addItem(horizontalSpaceLabelDefaultColor);

        labelDefaultColor = new QLabel(WidgetLinesDrawable);
        labelDefaultColor->setObjectName(QString::fromUtf8("labelDefaultColor"));

        horizontalLayoutLabelDefaultColor->addWidget(labelDefaultColor, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayoutLabelDefaultColor, 5, 0, 1, 1);

        horizontalLayoutDefaultColor = new QHBoxLayout();
        horizontalLayoutDefaultColor->setSpacing(0);
        horizontalLayoutDefaultColor->setObjectName(QString::fromUtf8("horizontalLayoutDefaultColor"));
        toolButtonDefaultColor = new QToolButton(WidgetLinesDrawable);
        toolButtonDefaultColor->setObjectName(QString::fromUtf8("toolButtonDefaultColor"));
        toolButtonDefaultColor->setMinimumSize(QSize(20, 20));
        toolButtonDefaultColor->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Resources/icons/transparency.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonDefaultColor->setIcon(icon);
        toolButtonDefaultColor->setIconSize(QSize(20, 20));

        horizontalLayoutDefaultColor->addWidget(toolButtonDefaultColor);

        spacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutDefaultColor->addItem(spacer);


        gridLayout->addLayout(horizontalLayoutDefaultColor, 5, 1, 1, 2);

        labelScalarFieldStyle = new QLabel(WidgetLinesDrawable);
        labelScalarFieldStyle->setObjectName(QString::fromUtf8("labelScalarFieldStyle"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelScalarFieldStyle->sizePolicy().hasHeightForWidth());
        labelScalarFieldStyle->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelScalarFieldStyle, 6, 0, 1, 1);

        comboBoxScalarFieldStyle = new QComboBox(WidgetLinesDrawable);
        comboBoxScalarFieldStyle->setObjectName(QString::fromUtf8("comboBoxScalarFieldStyle"));
        sizePolicy1.setHeightForWidth(comboBoxScalarFieldStyle->sizePolicy().hasHeightForWidth());
        comboBoxScalarFieldStyle->setSizePolicy(sizePolicy1);
        comboBoxScalarFieldStyle->setMinimumSize(QSize(20, 22));

        gridLayout->addWidget(comboBoxScalarFieldStyle, 6, 1, 1, 2);

        horizontalLayoutLabelClamp_4 = new QHBoxLayout();
        horizontalLayoutLabelClamp_4->setObjectName(QString::fromUtf8("horizontalLayoutLabelClamp_4"));
        horizontalSpacerLabelClamp_4 = new QSpacerItem(12, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelClamp_4->addItem(horizontalSpacerLabelClamp_4);

        labelScalarFieldDiscrete = new QLabel(WidgetLinesDrawable);
        labelScalarFieldDiscrete->setObjectName(QString::fromUtf8("labelScalarFieldDiscrete"));
        sizePolicy2.setHeightForWidth(labelScalarFieldDiscrete->sizePolicy().hasHeightForWidth());
        labelScalarFieldDiscrete->setSizePolicy(sizePolicy2);

        horizontalLayoutLabelClamp_4->addWidget(labelScalarFieldDiscrete);


        gridLayout->addLayout(horizontalLayoutLabelClamp_4, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxScalarFieldDiscrete = new QCheckBox(WidgetLinesDrawable);
        checkBoxScalarFieldDiscrete->setObjectName(QString::fromUtf8("checkBoxScalarFieldDiscrete"));

        horizontalLayout->addWidget(checkBoxScalarFieldDiscrete);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelScalarFieldStripes = new QLabel(WidgetLinesDrawable);
        labelScalarFieldStripes->setObjectName(QString::fromUtf8("labelScalarFieldStripes"));
        sizePolicy2.setHeightForWidth(labelScalarFieldStripes->sizePolicy().hasHeightForWidth());
        labelScalarFieldStripes->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(labelScalarFieldStripes);

        spinBoxScalarFieldNumStrips = new QSpinBox(WidgetLinesDrawable);
        spinBoxScalarFieldNumStrips->setObjectName(QString::fromUtf8("spinBoxScalarFieldNumStrips"));
        sizePolicy1.setHeightForWidth(spinBoxScalarFieldNumStrips->sizePolicy().hasHeightForWidth());
        spinBoxScalarFieldNumStrips->setSizePolicy(sizePolicy1);
        spinBoxScalarFieldNumStrips->setMinimumSize(QSize(60, 0));
        spinBoxScalarFieldNumStrips->setAlignment(Qt::AlignCenter);
        spinBoxScalarFieldNumStrips->setMinimum(4);
        spinBoxScalarFieldNumStrips->setMaximum(128);
        spinBoxScalarFieldNumStrips->setSingleStep(4);
        spinBoxScalarFieldNumStrips->setValue(16);

        horizontalLayout->addWidget(spinBoxScalarFieldNumStrips);


        gridLayout->addLayout(horizontalLayout, 7, 1, 1, 2);

        horizontalLayoutLabelClamp = new QHBoxLayout();
        horizontalLayoutLabelClamp->setObjectName(QString::fromUtf8("horizontalLayoutLabelClamp"));
        horizontalSpacerLabelClamp = new QSpacerItem(12, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelClamp->addItem(horizontalSpacerLabelClamp);

        labelScalarFieldClamp = new QLabel(WidgetLinesDrawable);
        labelScalarFieldClamp->setObjectName(QString::fromUtf8("labelScalarFieldClamp"));
        sizePolicy2.setHeightForWidth(labelScalarFieldClamp->sizePolicy().hasHeightForWidth());
        labelScalarFieldClamp->setSizePolicy(sizePolicy2);

        horizontalLayoutLabelClamp->addWidget(labelScalarFieldClamp);


        gridLayout->addLayout(horizontalLayoutLabelClamp, 8, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxScalarFieldClamp = new QCheckBox(WidgetLinesDrawable);
        checkBoxScalarFieldClamp->setObjectName(QString::fromUtf8("checkBoxScalarFieldClamp"));
        checkBoxScalarFieldClamp->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxScalarFieldClamp);

        doubleSpinBoxScalarFieldClampLower = new QDoubleSpinBox(WidgetLinesDrawable);
        doubleSpinBoxScalarFieldClampLower->setObjectName(QString::fromUtf8("doubleSpinBoxScalarFieldClampLower"));
        sizePolicy1.setHeightForWidth(doubleSpinBoxScalarFieldClampLower->sizePolicy().hasHeightForWidth());
        doubleSpinBoxScalarFieldClampLower->setSizePolicy(sizePolicy1);
        doubleSpinBoxScalarFieldClampLower->setMinimumSize(QSize(60, 0));
        doubleSpinBoxScalarFieldClampLower->setDecimals(1);
        doubleSpinBoxScalarFieldClampLower->setValue(5.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxScalarFieldClampLower);

        doubleSpinBoxScalarFieldClampUpper = new QDoubleSpinBox(WidgetLinesDrawable);
        doubleSpinBoxScalarFieldClampUpper->setObjectName(QString::fromUtf8("doubleSpinBoxScalarFieldClampUpper"));
        sizePolicy1.setHeightForWidth(doubleSpinBoxScalarFieldClampUpper->sizePolicy().hasHeightForWidth());
        doubleSpinBoxScalarFieldClampUpper->setSizePolicy(sizePolicy1);
        doubleSpinBoxScalarFieldClampUpper->setMinimumSize(QSize(60, 0));
        doubleSpinBoxScalarFieldClampUpper->setDecimals(1);
        doubleSpinBoxScalarFieldClampUpper->setValue(5.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxScalarFieldClampUpper);


        gridLayout->addLayout(horizontalLayout_2, 8, 1, 1, 2);

        labelVectorField = new QLabel(WidgetLinesDrawable);
        labelVectorField->setObjectName(QString::fromUtf8("labelVectorField"));
        sizePolicy2.setHeightForWidth(labelVectorField->sizePolicy().hasHeightForWidth());
        labelVectorField->setSizePolicy(sizePolicy2);
        labelVectorField->setMinimumSize(QSize(75, 22));

        gridLayout->addWidget(labelVectorField, 9, 0, 1, 1);

        comboBoxVectorField = new QComboBox(WidgetLinesDrawable);
        comboBoxVectorField->addItem(QString());
        comboBoxVectorField->setObjectName(QString::fromUtf8("comboBoxVectorField"));

        gridLayout->addWidget(comboBoxVectorField, 9, 1, 1, 2);

        horizontalLayoutScale = new QHBoxLayout();
        horizontalLayoutScale->setObjectName(QString::fromUtf8("horizontalLayoutScale"));
        horizontalSpacerVectorFieldLabelScale = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutScale->addItem(horizontalSpacerVectorFieldLabelScale);

        labelVectorFieldScale = new QLabel(WidgetLinesDrawable);
        labelVectorFieldScale->setObjectName(QString::fromUtf8("labelVectorFieldScale"));

        horizontalLayoutScale->addWidget(labelVectorFieldScale, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayoutScale, 10, 0, 1, 1);

        horizontalLayoutVectorFieldScale = new QHBoxLayout();
        horizontalLayoutVectorFieldScale->setSpacing(0);
        horizontalLayoutVectorFieldScale->setObjectName(QString::fromUtf8("horizontalLayoutVectorFieldScale"));
        doubleSpinBoxVectorFieldScale = new QDoubleSpinBox(WidgetLinesDrawable);
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


        gridLayout->addLayout(horizontalLayoutVectorFieldScale, 10, 1, 1, 2);

        labelHighlight = new QLabel(WidgetLinesDrawable);
        labelHighlight->setObjectName(QString::fromUtf8("labelHighlight"));

        gridLayout->addWidget(labelHighlight, 11, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBoxHighlight = new QCheckBox(WidgetLinesDrawable);
        checkBoxHighlight->setObjectName(QString::fromUtf8("checkBoxHighlight"));

        horizontalLayout_3->addWidget(checkBoxHighlight);

        spinBoxHighlightMin = new QSpinBox(WidgetLinesDrawable);
        spinBoxHighlightMin->setObjectName(QString::fromUtf8("spinBoxHighlightMin"));
        sizePolicy1.setHeightForWidth(spinBoxHighlightMin->sizePolicy().hasHeightForWidth());
        spinBoxHighlightMin->setSizePolicy(sizePolicy1);
        spinBoxHighlightMin->setMinimumSize(QSize(60, 0));
        spinBoxHighlightMin->setAlignment(Qt::AlignCenter);
        spinBoxHighlightMin->setMinimum(-1);
        spinBoxHighlightMin->setMaximum(999999999);
        spinBoxHighlightMin->setValue(-1);

        horizontalLayout_3->addWidget(spinBoxHighlightMin);

        spinBoxHighlightMax = new QSpinBox(WidgetLinesDrawable);
        spinBoxHighlightMax->setObjectName(QString::fromUtf8("spinBoxHighlightMax"));
        sizePolicy1.setHeightForWidth(spinBoxHighlightMax->sizePolicy().hasHeightForWidth());
        spinBoxHighlightMax->setSizePolicy(sizePolicy1);
        spinBoxHighlightMax->setMinimumSize(QSize(60, 0));
        spinBoxHighlightMax->setAlignment(Qt::AlignCenter);
        spinBoxHighlightMax->setMinimum(-1);
        spinBoxHighlightMax->setMaximum(999999999);
        spinBoxHighlightMax->setValue(-1);

        horizontalLayout_3->addWidget(spinBoxHighlightMax);


        gridLayout->addLayout(horizontalLayout_3, 11, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(comboBoxDrawables, checkBoxVisible);
        QWidget::setTabOrder(checkBoxVisible, doubleSpinBoxLineWidth);
        QWidget::setTabOrder(doubleSpinBoxLineWidth, comboBoxImposterStyle);
        QWidget::setTabOrder(comboBoxImposterStyle, comboBoxColorScheme);
        QWidget::setTabOrder(comboBoxColorScheme, toolButtonDefaultColor);
        QWidget::setTabOrder(toolButtonDefaultColor, comboBoxScalarFieldStyle);
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

        retranslateUi(WidgetLinesDrawable);

        QMetaObject::connectSlotsByName(WidgetLinesDrawable);
    } // setupUi

    void retranslateUi(QWidget *WidgetLinesDrawable)
    {
        WidgetLinesDrawable->setWindowTitle(QApplication::translate("WidgetLinesDrawable", "Surface mesh renderer", nullptr));
        labelDrawableName->setText(QApplication::translate("WidgetLinesDrawable", "Drawable", nullptr));
        comboBoxDrawables->setItemText(0, QApplication::translate("WidgetLinesDrawable", "not available", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxDrawables->setToolTip(QApplication::translate("WidgetLinesDrawable", "Select the drawable to be visualized", nullptr));
#endif // QT_NO_TOOLTIP
        labelVisible->setText(QApplication::translate("WidgetLinesDrawable", "Visible", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxVisible->setToolTip(QApplication::translate("WidgetLinesDrawable", "Show/Hide this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxVisible->setText(QString());
        labelLineWidth->setText(QApplication::translate("WidgetLinesDrawable", "Line Width", nullptr));
        labelImposterStyle->setText(QApplication::translate("WidgetLinesDrawable", "Imposter", nullptr));
        comboBoxImposterStyle->setItemText(0, QApplication::translate("WidgetLinesDrawable", "plain", nullptr));
        comboBoxImposterStyle->setItemText(1, QApplication::translate("WidgetLinesDrawable", "cylinder", nullptr));
        comboBoxImposterStyle->setItemText(2, QApplication::translate("WidgetLinesDrawable", "cone", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxImposterStyle->setToolTip(QApplication::translate("WidgetLinesDrawable", "Select how color is assigned to each face", nullptr));
#endif // QT_NO_TOOLTIP
        labelColorScheme->setText(QApplication::translate("WidgetLinesDrawable", "Coloring", nullptr));
        comboBoxColorScheme->setItemText(0, QApplication::translate("WidgetLinesDrawable", "uniform color", nullptr));
        comboBoxColorScheme->setItemText(1, QApplication::translate("WidgetLinesDrawable", "use color property", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxColorScheme->setToolTip(QApplication::translate("WidgetLinesDrawable", "Select how color is assigned to each face", nullptr));
#endif // QT_NO_TOOLTIP
        labelDefaultColor->setText(QApplication::translate("WidgetLinesDrawable", "Default", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonDefaultColor->setToolTip(QApplication::translate("WidgetLinesDrawable", "Click to set a uniform color for this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonDefaultColor->setText(QApplication::translate("WidgetLinesDrawable", "...", nullptr));
        labelScalarFieldStyle->setText(QApplication::translate("WidgetLinesDrawable", "Scalar Field", nullptr));
        labelScalarFieldDiscrete->setText(QApplication::translate("WidgetLinesDrawable", "Discrete", nullptr));
        checkBoxScalarFieldDiscrete->setText(QString());
        labelScalarFieldStripes->setText(QApplication::translate("WidgetLinesDrawable", "Stripes", nullptr));
#ifndef QT_NO_TOOLTIP
        spinBoxScalarFieldNumStrips->setToolTip(QApplication::translate("WidgetLinesDrawable", "The number of discrete colors.", nullptr));
#endif // QT_NO_TOOLTIP
        labelScalarFieldClamp->setText(QApplication::translate("WidgetLinesDrawable", "Clamp(%)", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxScalarFieldClamp->setToolTip(QApplication::translate("WidgetLinesDrawable", "Check to clamp the specified percent of lower and upper values.", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxScalarFieldClamp->setText(QString());
        labelVectorField->setText(QApplication::translate("WidgetLinesDrawable", "Vector Field", nullptr));
        comboBoxVectorField->setItemText(0, QApplication::translate("WidgetLinesDrawable", "not available", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxVectorField->setToolTip(QApplication::translate("WidgetLinesDrawable", "Select the drawable to be visualized", nullptr));
#endif // QT_NO_TOOLTIP
        labelVectorFieldScale->setText(QApplication::translate("WidgetLinesDrawable", "Scale", nullptr));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxVectorFieldScale->setToolTip(QApplication::translate("WidgetLinesDrawable", "Adjust the length of the vectors.\n"
"The scale is relative to the average edge lenght of the model.", nullptr));
#endif // QT_NO_TOOLTIP
        labelHighlight->setText(QApplication::translate("WidgetLinesDrawable", "Highlight", nullptr));
        checkBoxHighlight->setText(QString());
#ifndef QT_NO_TOOLTIP
        spinBoxHighlightMin->setToolTip(QApplication::translate("WidgetLinesDrawable", "The lower bound of the triange range to be highlighted.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBoxHighlightMax->setToolTip(QApplication::translate("WidgetLinesDrawable", "The upper bound of the triange range to be highlighted.", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class WidgetLinesDrawable: public Ui_WidgetLinesDrawable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DRAWABLE_LINES_H
