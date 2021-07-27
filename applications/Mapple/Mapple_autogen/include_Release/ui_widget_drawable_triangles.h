/********************************************************************************
** Form generated from reading UI file 'widget_drawable_triangles.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DRAWABLE_TRIANGLES_H
#define UI_WIDGET_DRAWABLE_TRIANGLES_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetTrianglesDrawable
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelDrawableName;
    QComboBox *comboBoxDrawables;
    QLabel *labelVisible;
    QHBoxLayout *horizontalLayoutVisible;
    QCheckBox *checkBoxVisible;
    QSpacerItem *spacerVisible;
    QLabel *labelPhongShading;
    QHBoxLayout *horizontalLayoutPhone;
    QCheckBox *checkBoxPhongShading;
    QSpacerItem *spacerPhong;
    QLabel *labelLighting;
    QComboBox *comboBoxLightingOptions;
    QLabel *labelColorScheme;
    QComboBox *comboBoxColorScheme;
    QHBoxLayout *horizontalLayoutLabelDefaultColor;
    QSpacerItem *horizontalSpaceLabelDefaultColor;
    QLabel *labelDefaultColor;
    QHBoxLayout *horizontalLayoutDefaultColor;
    QToolButton *toolButtonDefaultColor;
    QSpacerItem *spacer;
    QLabel *labelBackColor;
    QCheckBox *checkBoxBackColor;
    QSpacerItem *spacerBackColor;
    QToolButton *toolButtonBackColor;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacerTexture;
    QLabel *labelTexture;
    QHBoxLayout *horizontalLayoutTexture;
    QLineEdit *lineEditTextureFile;
    QToolButton *toolButtonTextureFile;
    QHBoxLayout *horizontalLayoutLayoutTextureRepeat;
    QSpacerItem *horizontalSpacerTextureRepeat;
    QLabel *labelTextureRepeat;
    QHBoxLayout *horizontalLayoutTextureRepeat;
    QSpinBox *spinBoxTextureRepeat;
    QSpinBox *spinBoxTextureFractionalRepeat;
    QLabel *labelScalarFieldStyle;
    QComboBox *comboBoxScalarFieldStyle;
    QHBoxLayout *horizontalLayoutLabelClamp_2;
    QSpacerItem *horizontalSpacerLabelClamp_2;
    QLabel *labelScalarFieldDiscrete;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxScalarFieldDiscrete;
    QSpacerItem *horizontalSpacer;
    QLabel *labelScalarFieldStripes;
    QSpinBox *spinBoxScalarFieldNumStrips;
    QHBoxLayout *horizontalLayoutLabelClamp;
    QSpacerItem *horizontalSpacerLabelClamp;
    QLabel *labelScalarFieldClamp;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxScalarFieldClamp;
    QDoubleSpinBox *doubleSpinBoxScalarFieldClampLower;
    QDoubleSpinBox *doubleSpinBoxScalarFieldClampUpper;
    QLabel *labelVectorField;
    QComboBox *comboBoxVectorField;
    QHBoxLayout *horizontalLayoutScale;
    QSpacerItem *horizontalSpacerVectorFieldLabelScale;
    QLabel *labelVectorFieldScale;
    QHBoxLayout *horizontalLayoutVectorFieldLength;
    QDoubleSpinBox *doubleSpinBoxVectorFieldScale;
    QSpacerItem *spacerVectorFieldLength;
    QLabel *labelHighlight;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxHighlight;
    QSpinBox *spinBoxHighlightMin;
    QSpinBox *spinBoxHighlightMax;
    QLabel *labelOpacity;
    QSlider *horizontalSliderOpacity;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetTrianglesDrawable)
    {
        if (WidgetTrianglesDrawable->objectName().isEmpty())
            WidgetTrianglesDrawable->setObjectName(QString::fromUtf8("WidgetTrianglesDrawable"));
        WidgetTrianglesDrawable->resize(346, 568);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WidgetTrianglesDrawable->sizePolicy().hasHeightForWidth());
        WidgetTrianglesDrawable->setSizePolicy(sizePolicy);
        WidgetTrianglesDrawable->setMinimumSize(QSize(50, 0));
        WidgetTrianglesDrawable->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(WidgetTrianglesDrawable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelDrawableName = new QLabel(WidgetTrianglesDrawable);
        labelDrawableName->setObjectName(QString::fromUtf8("labelDrawableName"));
        labelDrawableName->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelDrawableName, 0, 0, 1, 1);

        comboBoxDrawables = new QComboBox(WidgetTrianglesDrawable);
        comboBoxDrawables->addItem(QString());
        comboBoxDrawables->setObjectName(QString::fromUtf8("comboBoxDrawables"));

        gridLayout->addWidget(comboBoxDrawables, 0, 1, 1, 1);

        labelVisible = new QLabel(WidgetTrianglesDrawable);
        labelVisible->setObjectName(QString::fromUtf8("labelVisible"));
        labelVisible->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelVisible, 1, 0, 1, 1);

        horizontalLayoutVisible = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayoutVisible->setSpacing(-1);
#endif
        horizontalLayoutVisible->setObjectName(QString::fromUtf8("horizontalLayoutVisible"));
        checkBoxVisible = new QCheckBox(WidgetTrianglesDrawable);
        checkBoxVisible->setObjectName(QString::fromUtf8("checkBoxVisible"));
        checkBoxVisible->setChecked(true);

        horizontalLayoutVisible->addWidget(checkBoxVisible);

        spacerVisible = new QSpacerItem(128, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutVisible->addItem(spacerVisible);


        gridLayout->addLayout(horizontalLayoutVisible, 1, 1, 1, 1);

        labelPhongShading = new QLabel(WidgetTrianglesDrawable);
        labelPhongShading->setObjectName(QString::fromUtf8("labelPhongShading"));

        gridLayout->addWidget(labelPhongShading, 2, 0, 1, 1);

        horizontalLayoutPhone = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayoutPhone->setSpacing(-1);
#endif
        horizontalLayoutPhone->setObjectName(QString::fromUtf8("horizontalLayoutPhone"));
        checkBoxPhongShading = new QCheckBox(WidgetTrianglesDrawable);
        checkBoxPhongShading->setObjectName(QString::fromUtf8("checkBoxPhongShading"));
        checkBoxPhongShading->setMinimumSize(QSize(0, 20));

        horizontalLayoutPhone->addWidget(checkBoxPhongShading);

        spacerPhong = new QSpacerItem(128, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPhone->addItem(spacerPhong);


        gridLayout->addLayout(horizontalLayoutPhone, 2, 1, 1, 1);

        labelLighting = new QLabel(WidgetTrianglesDrawable);
        labelLighting->setObjectName(QString::fromUtf8("labelLighting"));
        labelLighting->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(labelLighting, 3, 0, 1, 1);

        comboBoxLightingOptions = new QComboBox(WidgetTrianglesDrawable);
        comboBoxLightingOptions->addItem(QString());
        comboBoxLightingOptions->addItem(QString());
        comboBoxLightingOptions->addItem(QString());
        comboBoxLightingOptions->setObjectName(QString::fromUtf8("comboBoxLightingOptions"));

        gridLayout->addWidget(comboBoxLightingOptions, 3, 1, 1, 1);

        labelColorScheme = new QLabel(WidgetTrianglesDrawable);
        labelColorScheme->setObjectName(QString::fromUtf8("labelColorScheme"));

        gridLayout->addWidget(labelColorScheme, 4, 0, 1, 1);

        comboBoxColorScheme = new QComboBox(WidgetTrianglesDrawable);
        comboBoxColorScheme->addItem(QString());
        comboBoxColorScheme->addItem(QString());
        comboBoxColorScheme->setObjectName(QString::fromUtf8("comboBoxColorScheme"));

        gridLayout->addWidget(comboBoxColorScheme, 4, 1, 1, 1);

        horizontalLayoutLabelDefaultColor = new QHBoxLayout();
        horizontalLayoutLabelDefaultColor->setObjectName(QString::fromUtf8("horizontalLayoutLabelDefaultColor"));
        horizontalSpaceLabelDefaultColor = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelDefaultColor->addItem(horizontalSpaceLabelDefaultColor);

        labelDefaultColor = new QLabel(WidgetTrianglesDrawable);
        labelDefaultColor->setObjectName(QString::fromUtf8("labelDefaultColor"));

        horizontalLayoutLabelDefaultColor->addWidget(labelDefaultColor, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayoutLabelDefaultColor, 5, 0, 1, 1);

        horizontalLayoutDefaultColor = new QHBoxLayout();
        horizontalLayoutDefaultColor->setObjectName(QString::fromUtf8("horizontalLayoutDefaultColor"));
        toolButtonDefaultColor = new QToolButton(WidgetTrianglesDrawable);
        toolButtonDefaultColor->setObjectName(QString::fromUtf8("toolButtonDefaultColor"));
        toolButtonDefaultColor->setMinimumSize(QSize(20, 20));
        toolButtonDefaultColor->setMaximumSize(QSize(20, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Resources/icons/transparency.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonDefaultColor->setIcon(icon);
        toolButtonDefaultColor->setIconSize(QSize(20, 20));

        horizontalLayoutDefaultColor->addWidget(toolButtonDefaultColor);

        spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutDefaultColor->addItem(spacer);

        labelBackColor = new QLabel(WidgetTrianglesDrawable);
        labelBackColor->setObjectName(QString::fromUtf8("labelBackColor"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelBackColor->sizePolicy().hasHeightForWidth());
        labelBackColor->setSizePolicy(sizePolicy1);
        labelBackColor->setMinimumSize(QSize(30, 22));

        horizontalLayoutDefaultColor->addWidget(labelBackColor);

        checkBoxBackColor = new QCheckBox(WidgetTrianglesDrawable);
        checkBoxBackColor->setObjectName(QString::fromUtf8("checkBoxBackColor"));
        checkBoxBackColor->setMinimumSize(QSize(0, 20));
        checkBoxBackColor->setChecked(false);

        horizontalLayoutDefaultColor->addWidget(checkBoxBackColor);

        spacerBackColor = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayoutDefaultColor->addItem(spacerBackColor);

        toolButtonBackColor = new QToolButton(WidgetTrianglesDrawable);
        toolButtonBackColor->setObjectName(QString::fromUtf8("toolButtonBackColor"));
        toolButtonBackColor->setMinimumSize(QSize(20, 20));
        toolButtonBackColor->setMaximumSize(QSize(20, 20));
        toolButtonBackColor->setIcon(icon);
        toolButtonBackColor->setIconSize(QSize(20, 20));

        horizontalLayoutDefaultColor->addWidget(toolButtonBackColor);


        gridLayout->addLayout(horizontalLayoutDefaultColor, 5, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacerTexture = new QSpacerItem(15, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerTexture);

        labelTexture = new QLabel(WidgetTrianglesDrawable);
        labelTexture->setObjectName(QString::fromUtf8("labelTexture"));
        sizePolicy1.setHeightForWidth(labelTexture->sizePolicy().hasHeightForWidth());
        labelTexture->setSizePolicy(sizePolicy1);
        labelTexture->setMinimumSize(QSize(30, 22));

        horizontalLayout->addWidget(labelTexture, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        horizontalLayoutTexture = new QHBoxLayout();
        horizontalLayoutTexture->setSpacing(0);
        horizontalLayoutTexture->setObjectName(QString::fromUtf8("horizontalLayoutTexture"));
        lineEditTextureFile = new QLineEdit(WidgetTrianglesDrawable);
        lineEditTextureFile->setObjectName(QString::fromUtf8("lineEditTextureFile"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditTextureFile->sizePolicy().hasHeightForWidth());
        lineEditTextureFile->setSizePolicy(sizePolicy2);
        lineEditTextureFile->setMinimumSize(QSize(50, 0));
        lineEditTextureFile->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEditTextureFile->setReadOnly(true);

        horizontalLayoutTexture->addWidget(lineEditTextureFile);

        toolButtonTextureFile = new QToolButton(WidgetTrianglesDrawable);
        toolButtonTextureFile->setObjectName(QString::fromUtf8("toolButtonTextureFile"));
        toolButtonTextureFile->setMinimumSize(QSize(20, 20));
        toolButtonTextureFile->setMaximumSize(QSize(20, 20));
        toolButtonTextureFile->setIconSize(QSize(20, 20));

        horizontalLayoutTexture->addWidget(toolButtonTextureFile);


        gridLayout->addLayout(horizontalLayoutTexture, 6, 1, 1, 1);

        horizontalLayoutLayoutTextureRepeat = new QHBoxLayout();
        horizontalLayoutLayoutTextureRepeat->setObjectName(QString::fromUtf8("horizontalLayoutLayoutTextureRepeat"));
        horizontalSpacerTextureRepeat = new QSpacerItem(15, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLayoutTextureRepeat->addItem(horizontalSpacerTextureRepeat);

        labelTextureRepeat = new QLabel(WidgetTrianglesDrawable);
        labelTextureRepeat->setObjectName(QString::fromUtf8("labelTextureRepeat"));
        sizePolicy1.setHeightForWidth(labelTextureRepeat->sizePolicy().hasHeightForWidth());
        labelTextureRepeat->setSizePolicy(sizePolicy1);
        labelTextureRepeat->setMinimumSize(QSize(30, 22));

        horizontalLayoutLayoutTextureRepeat->addWidget(labelTextureRepeat, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayoutLayoutTextureRepeat, 7, 0, 1, 1);

        horizontalLayoutTextureRepeat = new QHBoxLayout();
        horizontalLayoutTextureRepeat->setObjectName(QString::fromUtf8("horizontalLayoutTextureRepeat"));
        spinBoxTextureRepeat = new QSpinBox(WidgetTrianglesDrawable);
        spinBoxTextureRepeat->setObjectName(QString::fromUtf8("spinBoxTextureRepeat"));
        sizePolicy2.setHeightForWidth(spinBoxTextureRepeat->sizePolicy().hasHeightForWidth());
        spinBoxTextureRepeat->setSizePolicy(sizePolicy2);
        spinBoxTextureRepeat->setMinimumSize(QSize(60, 0));
        spinBoxTextureRepeat->setAlignment(Qt::AlignCenter);
        spinBoxTextureRepeat->setReadOnly(false);
        spinBoxTextureRepeat->setMinimum(1);
        spinBoxTextureRepeat->setMaximum(99);
        spinBoxTextureRepeat->setValue(1);

        horizontalLayoutTextureRepeat->addWidget(spinBoxTextureRepeat);

        spinBoxTextureFractionalRepeat = new QSpinBox(WidgetTrianglesDrawable);
        spinBoxTextureFractionalRepeat->setObjectName(QString::fromUtf8("spinBoxTextureFractionalRepeat"));
        sizePolicy2.setHeightForWidth(spinBoxTextureFractionalRepeat->sizePolicy().hasHeightForWidth());
        spinBoxTextureFractionalRepeat->setSizePolicy(sizePolicy2);
        spinBoxTextureFractionalRepeat->setMinimumSize(QSize(60, 0));
        spinBoxTextureFractionalRepeat->setAlignment(Qt::AlignCenter);
        spinBoxTextureFractionalRepeat->setMaximum(100);

        horizontalLayoutTextureRepeat->addWidget(spinBoxTextureFractionalRepeat);


        gridLayout->addLayout(horizontalLayoutTextureRepeat, 7, 1, 1, 1);

        labelScalarFieldStyle = new QLabel(WidgetTrianglesDrawable);
        labelScalarFieldStyle->setObjectName(QString::fromUtf8("labelScalarFieldStyle"));
        sizePolicy1.setHeightForWidth(labelScalarFieldStyle->sizePolicy().hasHeightForWidth());
        labelScalarFieldStyle->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelScalarFieldStyle, 8, 0, 1, 1);

        comboBoxScalarFieldStyle = new QComboBox(WidgetTrianglesDrawable);
        comboBoxScalarFieldStyle->setObjectName(QString::fromUtf8("comboBoxScalarFieldStyle"));
        sizePolicy2.setHeightForWidth(comboBoxScalarFieldStyle->sizePolicy().hasHeightForWidth());
        comboBoxScalarFieldStyle->setSizePolicy(sizePolicy2);
        comboBoxScalarFieldStyle->setMinimumSize(QSize(20, 22));

        gridLayout->addWidget(comboBoxScalarFieldStyle, 8, 1, 1, 1);

        horizontalLayoutLabelClamp_2 = new QHBoxLayout();
        horizontalLayoutLabelClamp_2->setObjectName(QString::fromUtf8("horizontalLayoutLabelClamp_2"));
        horizontalSpacerLabelClamp_2 = new QSpacerItem(12, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelClamp_2->addItem(horizontalSpacerLabelClamp_2);

        labelScalarFieldDiscrete = new QLabel(WidgetTrianglesDrawable);
        labelScalarFieldDiscrete->setObjectName(QString::fromUtf8("labelScalarFieldDiscrete"));
        sizePolicy1.setHeightForWidth(labelScalarFieldDiscrete->sizePolicy().hasHeightForWidth());
        labelScalarFieldDiscrete->setSizePolicy(sizePolicy1);

        horizontalLayoutLabelClamp_2->addWidget(labelScalarFieldDiscrete);


        gridLayout->addLayout(horizontalLayoutLabelClamp_2, 9, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBoxScalarFieldDiscrete = new QCheckBox(WidgetTrianglesDrawable);
        checkBoxScalarFieldDiscrete->setObjectName(QString::fromUtf8("checkBoxScalarFieldDiscrete"));

        horizontalLayout_2->addWidget(checkBoxScalarFieldDiscrete);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelScalarFieldStripes = new QLabel(WidgetTrianglesDrawable);
        labelScalarFieldStripes->setObjectName(QString::fromUtf8("labelScalarFieldStripes"));
        sizePolicy1.setHeightForWidth(labelScalarFieldStripes->sizePolicy().hasHeightForWidth());
        labelScalarFieldStripes->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(labelScalarFieldStripes);

        spinBoxScalarFieldNumStrips = new QSpinBox(WidgetTrianglesDrawable);
        spinBoxScalarFieldNumStrips->setObjectName(QString::fromUtf8("spinBoxScalarFieldNumStrips"));
        sizePolicy2.setHeightForWidth(spinBoxScalarFieldNumStrips->sizePolicy().hasHeightForWidth());
        spinBoxScalarFieldNumStrips->setSizePolicy(sizePolicy2);
        spinBoxScalarFieldNumStrips->setMinimumSize(QSize(60, 0));
        spinBoxScalarFieldNumStrips->setAlignment(Qt::AlignCenter);
        spinBoxScalarFieldNumStrips->setMinimum(4);
        spinBoxScalarFieldNumStrips->setMaximum(128);
        spinBoxScalarFieldNumStrips->setSingleStep(4);
        spinBoxScalarFieldNumStrips->setValue(16);

        horizontalLayout_2->addWidget(spinBoxScalarFieldNumStrips);


        gridLayout->addLayout(horizontalLayout_2, 9, 1, 1, 1);

        horizontalLayoutLabelClamp = new QHBoxLayout();
        horizontalLayoutLabelClamp->setObjectName(QString::fromUtf8("horizontalLayoutLabelClamp"));
        horizontalSpacerLabelClamp = new QSpacerItem(12, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutLabelClamp->addItem(horizontalSpacerLabelClamp);

        labelScalarFieldClamp = new QLabel(WidgetTrianglesDrawable);
        labelScalarFieldClamp->setObjectName(QString::fromUtf8("labelScalarFieldClamp"));
        sizePolicy1.setHeightForWidth(labelScalarFieldClamp->sizePolicy().hasHeightForWidth());
        labelScalarFieldClamp->setSizePolicy(sizePolicy1);

        horizontalLayoutLabelClamp->addWidget(labelScalarFieldClamp);


        gridLayout->addLayout(horizontalLayoutLabelClamp, 10, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBoxScalarFieldClamp = new QCheckBox(WidgetTrianglesDrawable);
        checkBoxScalarFieldClamp->setObjectName(QString::fromUtf8("checkBoxScalarFieldClamp"));
        checkBoxScalarFieldClamp->setChecked(true);

        horizontalLayout_4->addWidget(checkBoxScalarFieldClamp);

        doubleSpinBoxScalarFieldClampLower = new QDoubleSpinBox(WidgetTrianglesDrawable);
        doubleSpinBoxScalarFieldClampLower->setObjectName(QString::fromUtf8("doubleSpinBoxScalarFieldClampLower"));
        sizePolicy2.setHeightForWidth(doubleSpinBoxScalarFieldClampLower->sizePolicy().hasHeightForWidth());
        doubleSpinBoxScalarFieldClampLower->setSizePolicy(sizePolicy2);
        doubleSpinBoxScalarFieldClampLower->setMinimumSize(QSize(60, 0));
        doubleSpinBoxScalarFieldClampLower->setDecimals(1);
        doubleSpinBoxScalarFieldClampLower->setValue(5.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBoxScalarFieldClampLower);

        doubleSpinBoxScalarFieldClampUpper = new QDoubleSpinBox(WidgetTrianglesDrawable);
        doubleSpinBoxScalarFieldClampUpper->setObjectName(QString::fromUtf8("doubleSpinBoxScalarFieldClampUpper"));
        sizePolicy2.setHeightForWidth(doubleSpinBoxScalarFieldClampUpper->sizePolicy().hasHeightForWidth());
        doubleSpinBoxScalarFieldClampUpper->setSizePolicy(sizePolicy2);
        doubleSpinBoxScalarFieldClampUpper->setMinimumSize(QSize(60, 0));
        doubleSpinBoxScalarFieldClampUpper->setDecimals(1);
        doubleSpinBoxScalarFieldClampUpper->setValue(5.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBoxScalarFieldClampUpper);


        gridLayout->addLayout(horizontalLayout_4, 10, 1, 1, 1);

        labelVectorField = new QLabel(WidgetTrianglesDrawable);
        labelVectorField->setObjectName(QString::fromUtf8("labelVectorField"));
        sizePolicy1.setHeightForWidth(labelVectorField->sizePolicy().hasHeightForWidth());
        labelVectorField->setSizePolicy(sizePolicy1);
        labelVectorField->setMinimumSize(QSize(75, 22));

        gridLayout->addWidget(labelVectorField, 11, 0, 1, 1);

        comboBoxVectorField = new QComboBox(WidgetTrianglesDrawable);
        comboBoxVectorField->addItem(QString());
        comboBoxVectorField->setObjectName(QString::fromUtf8("comboBoxVectorField"));

        gridLayout->addWidget(comboBoxVectorField, 11, 1, 1, 1);

        horizontalLayoutScale = new QHBoxLayout();
        horizontalLayoutScale->setObjectName(QString::fromUtf8("horizontalLayoutScale"));
        horizontalSpacerVectorFieldLabelScale = new QSpacerItem(13, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutScale->addItem(horizontalSpacerVectorFieldLabelScale);

        labelVectorFieldScale = new QLabel(WidgetTrianglesDrawable);
        labelVectorFieldScale->setObjectName(QString::fromUtf8("labelVectorFieldScale"));

        horizontalLayoutScale->addWidget(labelVectorFieldScale, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayoutScale, 12, 0, 1, 1);

        horizontalLayoutVectorFieldLength = new QHBoxLayout();
        horizontalLayoutVectorFieldLength->setSpacing(0);
        horizontalLayoutVectorFieldLength->setObjectName(QString::fromUtf8("horizontalLayoutVectorFieldLength"));
        doubleSpinBoxVectorFieldScale = new QDoubleSpinBox(WidgetTrianglesDrawable);
        doubleSpinBoxVectorFieldScale->setObjectName(QString::fromUtf8("doubleSpinBoxVectorFieldScale"));
        sizePolicy2.setHeightForWidth(doubleSpinBoxVectorFieldScale->sizePolicy().hasHeightForWidth());
        doubleSpinBoxVectorFieldScale->setSizePolicy(sizePolicy2);
        doubleSpinBoxVectorFieldScale->setMinimumSize(QSize(60, 0));
        doubleSpinBoxVectorFieldScale->setDecimals(1);
        doubleSpinBoxVectorFieldScale->setMinimum(0.100000000000000);
        doubleSpinBoxVectorFieldScale->setMaximum(50.000000000000000);
        doubleSpinBoxVectorFieldScale->setSingleStep(0.100000000000000);
        doubleSpinBoxVectorFieldScale->setValue(1.000000000000000);

        horizontalLayoutVectorFieldLength->addWidget(doubleSpinBoxVectorFieldScale);

        spacerVectorFieldLength = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutVectorFieldLength->addItem(spacerVectorFieldLength);


        gridLayout->addLayout(horizontalLayoutVectorFieldLength, 12, 1, 1, 1);

        labelHighlight = new QLabel(WidgetTrianglesDrawable);
        labelHighlight->setObjectName(QString::fromUtf8("labelHighlight"));

        gridLayout->addWidget(labelHighlight, 13, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBoxHighlight = new QCheckBox(WidgetTrianglesDrawable);
        checkBoxHighlight->setObjectName(QString::fromUtf8("checkBoxHighlight"));

        horizontalLayout_3->addWidget(checkBoxHighlight);

        spinBoxHighlightMin = new QSpinBox(WidgetTrianglesDrawable);
        spinBoxHighlightMin->setObjectName(QString::fromUtf8("spinBoxHighlightMin"));
        sizePolicy2.setHeightForWidth(spinBoxHighlightMin->sizePolicy().hasHeightForWidth());
        spinBoxHighlightMin->setSizePolicy(sizePolicy2);
        spinBoxHighlightMin->setMinimumSize(QSize(60, 0));
        spinBoxHighlightMin->setAlignment(Qt::AlignCenter);
        spinBoxHighlightMin->setMinimum(-1);
        spinBoxHighlightMin->setMaximum(999999999);
        spinBoxHighlightMin->setValue(-1);

        horizontalLayout_3->addWidget(spinBoxHighlightMin);

        spinBoxHighlightMax = new QSpinBox(WidgetTrianglesDrawable);
        spinBoxHighlightMax->setObjectName(QString::fromUtf8("spinBoxHighlightMax"));
        sizePolicy2.setHeightForWidth(spinBoxHighlightMax->sizePolicy().hasHeightForWidth());
        spinBoxHighlightMax->setSizePolicy(sizePolicy2);
        spinBoxHighlightMax->setMinimumSize(QSize(60, 0));
        spinBoxHighlightMax->setAlignment(Qt::AlignCenter);
        spinBoxHighlightMax->setMinimum(-1);
        spinBoxHighlightMax->setMaximum(999999999);
        spinBoxHighlightMax->setValue(-1);

        horizontalLayout_3->addWidget(spinBoxHighlightMax);


        gridLayout->addLayout(horizontalLayout_3, 13, 1, 1, 1);

        labelOpacity = new QLabel(WidgetTrianglesDrawable);
        labelOpacity->setObjectName(QString::fromUtf8("labelOpacity"));

        gridLayout->addWidget(labelOpacity, 14, 0, 1, 1);

        horizontalSliderOpacity = new QSlider(WidgetTrianglesDrawable);
        horizontalSliderOpacity->setObjectName(QString::fromUtf8("horizontalSliderOpacity"));
        horizontalSliderOpacity->setMaximum(100);
        horizontalSliderOpacity->setValue(60);
        horizontalSliderOpacity->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderOpacity, 14, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(comboBoxDrawables, checkBoxVisible);
        QWidget::setTabOrder(checkBoxVisible, checkBoxPhongShading);
        QWidget::setTabOrder(checkBoxPhongShading, comboBoxLightingOptions);
        QWidget::setTabOrder(comboBoxLightingOptions, comboBoxColorScheme);
        QWidget::setTabOrder(comboBoxColorScheme, toolButtonDefaultColor);
        QWidget::setTabOrder(toolButtonDefaultColor, checkBoxBackColor);
        QWidget::setTabOrder(checkBoxBackColor, toolButtonBackColor);
        QWidget::setTabOrder(toolButtonBackColor, lineEditTextureFile);
        QWidget::setTabOrder(lineEditTextureFile, toolButtonTextureFile);
        QWidget::setTabOrder(toolButtonTextureFile, spinBoxTextureRepeat);
        QWidget::setTabOrder(spinBoxTextureRepeat, spinBoxTextureFractionalRepeat);
        QWidget::setTabOrder(spinBoxTextureFractionalRepeat, comboBoxScalarFieldStyle);
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
        QWidget::setTabOrder(spinBoxHighlightMax, horizontalSliderOpacity);

        retranslateUi(WidgetTrianglesDrawable);

        QMetaObject::connectSlotsByName(WidgetTrianglesDrawable);
    } // setupUi

    void retranslateUi(QWidget *WidgetTrianglesDrawable)
    {
        WidgetTrianglesDrawable->setWindowTitle(QApplication::translate("WidgetTrianglesDrawable", "Surface mesh renderer", nullptr));
        labelDrawableName->setText(QApplication::translate("WidgetTrianglesDrawable", "Drawable", nullptr));
        comboBoxDrawables->setItemText(0, QApplication::translate("WidgetTrianglesDrawable", "not available", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxDrawables->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Select the drawable to be visualized", nullptr));
#endif // QT_NO_TOOLTIP
        labelVisible->setText(QApplication::translate("WidgetTrianglesDrawable", "Visible", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxVisible->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Show/Hide this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxVisible->setText(QString());
        labelPhongShading->setText(QApplication::translate("WidgetTrianglesDrawable", "Phong Shading", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxPhongShading->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Enable/Disable Phong shading", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxPhongShading->setText(QString());
        labelLighting->setText(QApplication::translate("WidgetTrianglesDrawable", "Lighting", nullptr));
        comboBoxLightingOptions->setItemText(0, QApplication::translate("WidgetTrianglesDrawable", "front only", nullptr));
        comboBoxLightingOptions->setItemText(1, QApplication::translate("WidgetTrianglesDrawable", "front and back", nullptr));
        comboBoxLightingOptions->setItemText(2, QApplication::translate("WidgetTrianglesDrawable", "disabled", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxLightingOptions->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Select how lighting is implemented", nullptr));
#endif // QT_NO_TOOLTIP
        labelColorScheme->setText(QApplication::translate("WidgetTrianglesDrawable", "Coloring", nullptr));
        comboBoxColorScheme->setItemText(0, QApplication::translate("WidgetTrianglesDrawable", "uniform color", nullptr));
        comboBoxColorScheme->setItemText(1, QApplication::translate("WidgetTrianglesDrawable", "use color property", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxColorScheme->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Select how color is assigned to each face", nullptr));
#endif // QT_NO_TOOLTIP
        labelDefaultColor->setText(QApplication::translate("WidgetTrianglesDrawable", "Default", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonDefaultColor->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Click to set a uniform color for this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonDefaultColor->setText(QApplication::translate("WidgetTrianglesDrawable", "...", nullptr));
        labelBackColor->setText(QApplication::translate("WidgetTrianglesDrawable", "Back", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxBackColor->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Enable/Disable distinct coloring for the back side of this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxBackColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonBackColor->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Click to set the backside color for this drawable", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonBackColor->setText(QApplication::translate("WidgetTrianglesDrawable", "...", nullptr));
        labelTexture->setText(QApplication::translate("WidgetTrianglesDrawable", "Texture", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditTextureFile->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "The image file of the texture", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditTextureFile->setText(QApplication::translate("WidgetTrianglesDrawable", "not available", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonTextureFile->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Click to choose a texture image", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonTextureFile->setText(QApplication::translate("WidgetTrianglesDrawable", "...", nullptr));
        labelTextureRepeat->setText(QApplication::translate("WidgetTrianglesDrawable", "Repeat", nullptr));
#ifndef QT_NO_TOOLTIP
        spinBoxTextureRepeat->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "How many times this texture is repeated?", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBoxTextureFractionalRepeat->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Fractional repeat (100 fractional repeat is equivalent to 1 repeat)", nullptr));
#endif // QT_NO_TOOLTIP
        labelScalarFieldStyle->setText(QApplication::translate("WidgetTrianglesDrawable", "Scalar Field", nullptr));
        labelScalarFieldDiscrete->setText(QApplication::translate("WidgetTrianglesDrawable", "Discrete", nullptr));
        checkBoxScalarFieldDiscrete->setText(QString());
        labelScalarFieldStripes->setText(QApplication::translate("WidgetTrianglesDrawable", "Stripes", nullptr));
#ifndef QT_NO_TOOLTIP
        spinBoxScalarFieldNumStrips->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "The number of discrete colors.", nullptr));
#endif // QT_NO_TOOLTIP
        labelScalarFieldClamp->setText(QApplication::translate("WidgetTrianglesDrawable", "Clamp(%)", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxScalarFieldClamp->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Check to clamp the specified percent of lower and upper values.", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxScalarFieldClamp->setText(QString());
        labelVectorField->setText(QApplication::translate("WidgetTrianglesDrawable", "Vector Field", nullptr));
        comboBoxVectorField->setItemText(0, QApplication::translate("WidgetTrianglesDrawable", "not available", nullptr));

#ifndef QT_NO_TOOLTIP
        comboBoxVectorField->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Select the drawable to be visualized", nullptr));
#endif // QT_NO_TOOLTIP
        labelVectorFieldScale->setText(QApplication::translate("WidgetTrianglesDrawable", "Scale", nullptr));
#ifndef QT_NO_TOOLTIP
        doubleSpinBoxVectorFieldScale->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "Adjust the length of the vectors.\n"
"The scale is relative to the average edge lenght of the model.", nullptr));
#endif // QT_NO_TOOLTIP
        labelHighlight->setText(QApplication::translate("WidgetTrianglesDrawable", "Highlight", nullptr));
        checkBoxHighlight->setText(QString());
#ifndef QT_NO_TOOLTIP
        spinBoxHighlightMin->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "The lower bound of the triange range to be highlighted.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBoxHighlightMax->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "The upper bound of the triange range to be highlighted.", nullptr));
#endif // QT_NO_TOOLTIP
        labelOpacity->setText(QApplication::translate("WidgetTrianglesDrawable", "Opacity", nullptr));
#ifndef QT_NO_TOOLTIP
        horizontalSliderOpacity->setToolTip(QApplication::translate("WidgetTrianglesDrawable", "The opacity of the surface", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class WidgetTrianglesDrawable: public Ui_WidgetTrianglesDrawable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DRAWABLE_TRIANGLES_H
