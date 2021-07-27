/********************************************************************************
** Form generated from reading UI file 'dialog_walk_through.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_WALK_THROUGH_H
#define UI_DIALOG_WALK_THROUGH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogWalkThroughClass
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *comboBoxInterpolationMethod;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonFreeMode;
    QRadioButton *radioButtonWalkingMode;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *labelFollowUp;
    QCheckBox *checkBoxFollowUp;
    QLabel *labelCharacterHeight;
    QDoubleSpinBox *doubleSpinBoxCharacterHeightFactor;
    QLabel *labelCharacterDistanceToEye;
    QDoubleSpinBox *doubleSpinBoxCharacterDistanceFactor;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayoutCameraPathButtons;
    QPushButton *previousKeyframeButton;
    QPushButton *nextKeyframeButton;
    QPushButton *removeLastKeyframeButton;
    QPushButton *clearCameraPathButton;
    QSlider *horizontalSliderPreview;
    QGroupBox *videoOutputGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFrameRate;
    QSpinBox *spinBoxFPS;
    QLabel *labelBitRate;
    QSpinBox *spinBoxBitRate;
    QLabel *labelInterpolationSpeed;
    QDoubleSpinBox *doubleSpinBoxInterpolationSpeed;
    QHBoxLayout *horizontalLayoutOutputFile;
    QLabel *labelOutputFile;
    QLineEdit *lineEditOutputFile;
    QToolButton *browseButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *previewButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *recordButton;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QDialog *DialogWalkThroughClass)
    {
        if (DialogWalkThroughClass->objectName().isEmpty())
            DialogWalkThroughClass->setObjectName(QString::fromUtf8("DialogWalkThroughClass"));
        DialogWalkThroughClass->resize(427, 459);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogWalkThroughClass->sizePolicy().hasHeightForWidth());
        DialogWalkThroughClass->setSizePolicy(sizePolicy);
        DialogWalkThroughClass->setMaximumSize(QSize(16777215, 459));
        DialogWalkThroughClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        verticalLayout_5 = new QVBoxLayout(DialogWalkThroughClass);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(DialogWalkThroughClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(13, 15, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        comboBoxInterpolationMethod = new QComboBox(groupBox);
        comboBoxInterpolationMethod->setObjectName(QString::fromUtf8("comboBoxInterpolationMethod"));

        horizontalLayout_5->addWidget(comboBoxInterpolationMethod);

        horizontalSpacer_9 = new QSpacerItem(13, 15, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButtonFreeMode = new QRadioButton(groupBox);
        radioButtonFreeMode->setObjectName(QString::fromUtf8("radioButtonFreeMode"));

        verticalLayout_2->addWidget(radioButtonFreeMode);

        radioButtonWalkingMode = new QRadioButton(groupBox);
        radioButtonWalkingMode->setObjectName(QString::fromUtf8("radioButtonWalkingMode"));

        verticalLayout_2->addWidget(radioButtonWalkingMode);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(15, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelFollowUp = new QLabel(groupBox);
        labelFollowUp->setObjectName(QString::fromUtf8("labelFollowUp"));

        gridLayout->addWidget(labelFollowUp, 0, 0, 1, 1);

        checkBoxFollowUp = new QCheckBox(groupBox);
        checkBoxFollowUp->setObjectName(QString::fromUtf8("checkBoxFollowUp"));

        gridLayout->addWidget(checkBoxFollowUp, 0, 1, 1, 1);

        labelCharacterHeight = new QLabel(groupBox);
        labelCharacterHeight->setObjectName(QString::fromUtf8("labelCharacterHeight"));

        gridLayout->addWidget(labelCharacterHeight, 1, 0, 1, 1);

        doubleSpinBoxCharacterHeightFactor = new QDoubleSpinBox(groupBox);
        doubleSpinBoxCharacterHeightFactor->setObjectName(QString::fromUtf8("doubleSpinBoxCharacterHeightFactor"));
        doubleSpinBoxCharacterHeightFactor->setDecimals(2);
        doubleSpinBoxCharacterHeightFactor->setMaximum(100.000000000000000);
        doubleSpinBoxCharacterHeightFactor->setSingleStep(0.100000000000000);
        doubleSpinBoxCharacterHeightFactor->setValue(0.200000000000000);

        gridLayout->addWidget(doubleSpinBoxCharacterHeightFactor, 1, 1, 1, 1);

        labelCharacterDistanceToEye = new QLabel(groupBox);
        labelCharacterDistanceToEye->setObjectName(QString::fromUtf8("labelCharacterDistanceToEye"));

        gridLayout->addWidget(labelCharacterDistanceToEye, 2, 0, 1, 1);

        doubleSpinBoxCharacterDistanceFactor = new QDoubleSpinBox(groupBox);
        doubleSpinBoxCharacterDistanceFactor->setObjectName(QString::fromUtf8("doubleSpinBoxCharacterDistanceFactor"));
        doubleSpinBoxCharacterDistanceFactor->setDecimals(2);
        doubleSpinBoxCharacterDistanceFactor->setMaximum(100.000000000000000);
        doubleSpinBoxCharacterDistanceFactor->setSingleStep(0.100000000000000);
        doubleSpinBoxCharacterDistanceFactor->setValue(1.900000000000000);

        gridLayout->addWidget(doubleSpinBoxCharacterDistanceFactor, 2, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer_13 = new QSpacerItem(13, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayoutCameraPathButtons = new QHBoxLayout();
        horizontalLayoutCameraPathButtons->setSpacing(6);
        horizontalLayoutCameraPathButtons->setObjectName(QString::fromUtf8("horizontalLayoutCameraPathButtons"));
        previousKeyframeButton = new QPushButton(groupBox);
        previousKeyframeButton->setObjectName(QString::fromUtf8("previousKeyframeButton"));

        horizontalLayoutCameraPathButtons->addWidget(previousKeyframeButton);

        nextKeyframeButton = new QPushButton(groupBox);
        nextKeyframeButton->setObjectName(QString::fromUtf8("nextKeyframeButton"));

        horizontalLayoutCameraPathButtons->addWidget(nextKeyframeButton);

        removeLastKeyframeButton = new QPushButton(groupBox);
        removeLastKeyframeButton->setObjectName(QString::fromUtf8("removeLastKeyframeButton"));

        horizontalLayoutCameraPathButtons->addWidget(removeLastKeyframeButton);

        clearCameraPathButton = new QPushButton(groupBox);
        clearCameraPathButton->setObjectName(QString::fromUtf8("clearCameraPathButton"));

        horizontalLayoutCameraPathButtons->addWidget(clearCameraPathButton);


        verticalLayout_4->addLayout(horizontalLayoutCameraPathButtons);

        horizontalSliderPreview = new QSlider(groupBox);
        horizontalSliderPreview->setObjectName(QString::fromUtf8("horizontalSliderPreview"));
        horizontalSliderPreview->setPageStep(1);
        horizontalSliderPreview->setOrientation(Qt::Horizontal);
        horizontalSliderPreview->setTickPosition(QSlider::TicksAbove);
        horizontalSliderPreview->setTickInterval(1);

        verticalLayout_4->addWidget(horizontalSliderPreview);


        verticalLayout_5->addWidget(groupBox);

        videoOutputGroupBox = new QGroupBox(DialogWalkThroughClass);
        videoOutputGroupBox->setObjectName(QString::fromUtf8("videoOutputGroupBox"));
        sizePolicy.setHeightForWidth(videoOutputGroupBox->sizePolicy().hasHeightForWidth());
        videoOutputGroupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(videoOutputGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelFrameRate = new QLabel(videoOutputGroupBox);
        labelFrameRate->setObjectName(QString::fromUtf8("labelFrameRate"));

        horizontalLayout_2->addWidget(labelFrameRate);

        spinBoxFPS = new QSpinBox(videoOutputGroupBox);
        spinBoxFPS->setObjectName(QString::fromUtf8("spinBoxFPS"));
        spinBoxFPS->setMinimum(1);
        spinBoxFPS->setMaximum(60);
        spinBoxFPS->setValue(30);

        horizontalLayout_2->addWidget(spinBoxFPS);

        labelBitRate = new QLabel(videoOutputGroupBox);
        labelBitRate->setObjectName(QString::fromUtf8("labelBitRate"));

        horizontalLayout_2->addWidget(labelBitRate);

        spinBoxBitRate = new QSpinBox(videoOutputGroupBox);
        spinBoxBitRate->setObjectName(QString::fromUtf8("spinBoxBitRate"));
        spinBoxBitRate->setMinimum(1);
        spinBoxBitRate->setMaximum(1000);
        spinBoxBitRate->setSingleStep(1);
        spinBoxBitRate->setValue(10);

        horizontalLayout_2->addWidget(spinBoxBitRate);

        labelInterpolationSpeed = new QLabel(videoOutputGroupBox);
        labelInterpolationSpeed->setObjectName(QString::fromUtf8("labelInterpolationSpeed"));

        horizontalLayout_2->addWidget(labelInterpolationSpeed);

        doubleSpinBoxInterpolationSpeed = new QDoubleSpinBox(videoOutputGroupBox);
        doubleSpinBoxInterpolationSpeed->setObjectName(QString::fromUtf8("doubleSpinBoxInterpolationSpeed"));
        doubleSpinBoxInterpolationSpeed->setDecimals(1);
        doubleSpinBoxInterpolationSpeed->setMinimum(0.100000000000000);
        doubleSpinBoxInterpolationSpeed->setMaximum(100.000000000000000);
        doubleSpinBoxInterpolationSpeed->setSingleStep(0.100000000000000);
        doubleSpinBoxInterpolationSpeed->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxInterpolationSpeed);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayoutOutputFile = new QHBoxLayout();
        horizontalLayoutOutputFile->setSpacing(1);
        horizontalLayoutOutputFile->setObjectName(QString::fromUtf8("horizontalLayoutOutputFile"));
        labelOutputFile = new QLabel(videoOutputGroupBox);
        labelOutputFile->setObjectName(QString::fromUtf8("labelOutputFile"));

        horizontalLayoutOutputFile->addWidget(labelOutputFile);

        lineEditOutputFile = new QLineEdit(videoOutputGroupBox);
        lineEditOutputFile->setObjectName(QString::fromUtf8("lineEditOutputFile"));

        horizontalLayoutOutputFile->addWidget(lineEditOutputFile);

        browseButton = new QToolButton(videoOutputGroupBox);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        browseButton->setText(QString::fromUtf8("..."));

        horizontalLayoutOutputFile->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayoutOutputFile);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        previewButton = new QPushButton(videoOutputGroupBox);
        previewButton->setObjectName(QString::fromUtf8("previewButton"));
        previewButton->setCheckable(true);
        previewButton->setChecked(false);

        horizontalLayout->addWidget(previewButton);

        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        recordButton = new QPushButton(videoOutputGroupBox);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        horizontalLayout->addWidget(recordButton);

        horizontalSpacer_11 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(videoOutputGroupBox);

        QWidget::setTabOrder(comboBoxInterpolationMethod, radioButtonFreeMode);
        QWidget::setTabOrder(radioButtonFreeMode, radioButtonWalkingMode);
        QWidget::setTabOrder(radioButtonWalkingMode, checkBoxFollowUp);
        QWidget::setTabOrder(checkBoxFollowUp, doubleSpinBoxCharacterHeightFactor);
        QWidget::setTabOrder(doubleSpinBoxCharacterHeightFactor, doubleSpinBoxCharacterDistanceFactor);
        QWidget::setTabOrder(doubleSpinBoxCharacterDistanceFactor, previousKeyframeButton);
        QWidget::setTabOrder(previousKeyframeButton, nextKeyframeButton);
        QWidget::setTabOrder(nextKeyframeButton, removeLastKeyframeButton);
        QWidget::setTabOrder(removeLastKeyframeButton, clearCameraPathButton);
        QWidget::setTabOrder(clearCameraPathButton, horizontalSliderPreview);
        QWidget::setTabOrder(horizontalSliderPreview, spinBoxFPS);
        QWidget::setTabOrder(spinBoxFPS, spinBoxBitRate);
        QWidget::setTabOrder(spinBoxBitRate, doubleSpinBoxInterpolationSpeed);
        QWidget::setTabOrder(doubleSpinBoxInterpolationSpeed, lineEditOutputFile);
        QWidget::setTabOrder(lineEditOutputFile, browseButton);
        QWidget::setTabOrder(browseButton, previewButton);
        QWidget::setTabOrder(previewButton, recordButton);

        retranslateUi(DialogWalkThroughClass);

        nextKeyframeButton->setDefault(false);


        QMetaObject::connectSlotsByName(DialogWalkThroughClass);
    } // setupUi

    void retranslateUi(QDialog *DialogWalkThroughClass)
    {
        DialogWalkThroughClass->setWindowTitle(QApplication::translate("DialogWalkThroughClass", "Walk through", nullptr));
        groupBox->setTitle(QApplication::translate("DialogWalkThroughClass", "Camera path", nullptr));
        label_3->setText(QApplication::translate("DialogWalkThroughClass", "Keyframe interpolation", nullptr));
        radioButtonFreeMode->setText(QApplication::translate("DialogWalkThroughClass", "Free mode (press 'K') ", nullptr));
        radioButtonWalkingMode->setText(QApplication::translate("DialogWalkThroughClass", "Walking mode (Alt + Left click on the ground)", nullptr));
        labelFollowUp->setText(QApplication::translate("DialogWalkThroughClass", "Follow up", nullptr));
        checkBoxFollowUp->setText(QString());
        labelCharacterHeight->setText(QApplication::translate("DialogWalkThroughClass", "Character height", nullptr));
        labelCharacterDistanceToEye->setText(QApplication::translate("DialogWalkThroughClass", "Character distance to eye", nullptr));
        previousKeyframeButton->setText(QApplication::translate("DialogWalkThroughClass", "Back", nullptr));
        nextKeyframeButton->setText(QApplication::translate("DialogWalkThroughClass", "Next", nullptr));
        removeLastKeyframeButton->setText(QApplication::translate("DialogWalkThroughClass", "Undo", nullptr));
        clearCameraPathButton->setText(QApplication::translate("DialogWalkThroughClass", "Clear", nullptr));
        videoOutputGroupBox->setTitle(QApplication::translate("DialogWalkThroughClass", "Output", nullptr));
        labelFrameRate->setText(QApplication::translate("DialogWalkThroughClass", "Frame rate", nullptr));
#ifndef QT_NO_TOOLTIP
        spinBoxFPS->setToolTip(QApplication::translate("DialogWalkThroughClass", "Number of frames per second", nullptr));
#endif // QT_NO_TOOLTIP
        labelBitRate->setText(QApplication::translate("DialogWalkThroughClass", "Bitrate (Mbps)", nullptr));
#ifndef QT_NO_TOOLTIP
        spinBoxBitRate->setToolTip(QApplication::translate("DialogWalkThroughClass", "Bitrate (in Mbps)\n"
"The higher the better the quality (but the larger file size of the video)", nullptr));
#endif // QT_NO_TOOLTIP
        labelInterpolationSpeed->setText(QApplication::translate("DialogWalkThroughClass", "Speed", nullptr));
        labelOutputFile->setText(QApplication::translate("DialogWalkThroughClass", "Output", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditOutputFile->setToolTip(QApplication::translate("DialogWalkThroughClass", "The recording file name", nullptr));
#endif // QT_NO_TOOLTIP
        previewButton->setText(QApplication::translate("DialogWalkThroughClass", "Preview", nullptr));
        recordButton->setText(QApplication::translate("DialogWalkThroughClass", "Record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogWalkThroughClass: public Ui_DialogWalkThroughClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_WALK_THROUGH_H
