/********************************************************************************
** Form generated from reading UI file 'dialog_point_cloud_ransac_primitive_extraction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_POINT_CLOUD_RANSAC_PRIMITIVE_EXTRACTION_H
#define UI_DIALOG_POINT_CLOUD_RANSAC_PRIMITIVE_EXTRACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPointCloudRansacPrimitiveExtraction
{
public:
    QVBoxLayout *VerticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxTypes;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxPlane;
    QCheckBox *checkBoxCylinder;
    QCheckBox *checkBoxSphere;
    QCheckBox *checkBoxCone;
    QCheckBox *checkBoxTorus;
    QGroupBox *groupBoxParameters;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxMinimumSupport;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxDistanceThreshold;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBoxBitmapResolution;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxNormalThreshold;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBoxOverlookProbability;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonReset;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonExtract;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogPointCloudRansacPrimitiveExtraction)
    {
        if (DialogPointCloudRansacPrimitiveExtraction->objectName().isEmpty())
            DialogPointCloudRansacPrimitiveExtraction->setObjectName(QString::fromUtf8("DialogPointCloudRansacPrimitiveExtraction"));
        DialogPointCloudRansacPrimitiveExtraction->resize(410, 260);
        VerticalLayout = new QVBoxLayout(DialogPointCloudRansacPrimitiveExtraction);
        VerticalLayout->setObjectName(QString::fromUtf8("VerticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBoxTypes = new QGroupBox(DialogPointCloudRansacPrimitiveExtraction);
        groupBoxTypes->setObjectName(QString::fromUtf8("groupBoxTypes"));
        verticalLayout = new QVBoxLayout(groupBoxTypes);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxPlane = new QCheckBox(groupBoxTypes);
        checkBoxPlane->setObjectName(QString::fromUtf8("checkBoxPlane"));
        checkBoxPlane->setChecked(true);

        verticalLayout->addWidget(checkBoxPlane);

        checkBoxCylinder = new QCheckBox(groupBoxTypes);
        checkBoxCylinder->setObjectName(QString::fromUtf8("checkBoxCylinder"));

        verticalLayout->addWidget(checkBoxCylinder);

        checkBoxSphere = new QCheckBox(groupBoxTypes);
        checkBoxSphere->setObjectName(QString::fromUtf8("checkBoxSphere"));

        verticalLayout->addWidget(checkBoxSphere);

        checkBoxCone = new QCheckBox(groupBoxTypes);
        checkBoxCone->setObjectName(QString::fromUtf8("checkBoxCone"));

        verticalLayout->addWidget(checkBoxCone);

        checkBoxTorus = new QCheckBox(groupBoxTypes);
        checkBoxTorus->setObjectName(QString::fromUtf8("checkBoxTorus"));

        verticalLayout->addWidget(checkBoxTorus);


        horizontalLayout->addWidget(groupBoxTypes);

        groupBoxParameters = new QGroupBox(DialogPointCloudRansacPrimitiveExtraction);
        groupBoxParameters->setObjectName(QString::fromUtf8("groupBoxParameters"));
        gridLayout = new QGridLayout(groupBoxParameters);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBoxParameters);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxMinimumSupport = new QSpinBox(groupBoxParameters);
        spinBoxMinimumSupport->setObjectName(QString::fromUtf8("spinBoxMinimumSupport"));
        spinBoxMinimumSupport->setMinimum(3);
        spinBoxMinimumSupport->setMaximum(1000000000);
        spinBoxMinimumSupport->setValue(1000);

        gridLayout->addWidget(spinBoxMinimumSupport, 0, 1, 1, 1);

        label_2 = new QLabel(groupBoxParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        doubleSpinBoxDistanceThreshold = new QDoubleSpinBox(groupBoxParameters);
        doubleSpinBoxDistanceThreshold->setObjectName(QString::fromUtf8("doubleSpinBoxDistanceThreshold"));
        doubleSpinBoxDistanceThreshold->setDecimals(5);
        doubleSpinBoxDistanceThreshold->setMinimum(0.000010000000000);
        doubleSpinBoxDistanceThreshold->setMaximum(1.000000000000000);
        doubleSpinBoxDistanceThreshold->setValue(0.005000000000000);

        gridLayout->addWidget(doubleSpinBoxDistanceThreshold, 1, 1, 1, 1);

        label_3 = new QLabel(groupBoxParameters);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        doubleSpinBoxBitmapResolution = new QDoubleSpinBox(groupBoxParameters);
        doubleSpinBoxBitmapResolution->setObjectName(QString::fromUtf8("doubleSpinBoxBitmapResolution"));
        doubleSpinBoxBitmapResolution->setDecimals(5);
        doubleSpinBoxBitmapResolution->setMinimum(0.000010000000000);
        doubleSpinBoxBitmapResolution->setMaximum(1.000000000000000);
        doubleSpinBoxBitmapResolution->setValue(0.020000000000000);

        gridLayout->addWidget(doubleSpinBoxBitmapResolution, 2, 1, 1, 1);

        label_4 = new QLabel(groupBoxParameters);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        doubleSpinBoxNormalThreshold = new QDoubleSpinBox(groupBoxParameters);
        doubleSpinBoxNormalThreshold->setObjectName(QString::fromUtf8("doubleSpinBoxNormalThreshold"));
        doubleSpinBoxNormalThreshold->setDecimals(5);
        doubleSpinBoxNormalThreshold->setMinimum(0.000010000000000);
        doubleSpinBoxNormalThreshold->setMaximum(1.000000000000000);
        doubleSpinBoxNormalThreshold->setValue(0.800000000000000);

        gridLayout->addWidget(doubleSpinBoxNormalThreshold, 3, 1, 1, 1);

        label_5 = new QLabel(groupBoxParameters);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        doubleSpinBoxOverlookProbability = new QDoubleSpinBox(groupBoxParameters);
        doubleSpinBoxOverlookProbability->setObjectName(QString::fromUtf8("doubleSpinBoxOverlookProbability"));
        doubleSpinBoxOverlookProbability->setDecimals(5);
        doubleSpinBoxOverlookProbability->setMinimum(0.000010000000000);
        doubleSpinBoxOverlookProbability->setMaximum(1.000000000000000);
        doubleSpinBoxOverlookProbability->setValue(0.001000000000000);

        gridLayout->addWidget(doubleSpinBoxOverlookProbability, 4, 1, 1, 1);


        horizontalLayout->addWidget(groupBoxParameters);


        VerticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonReset = new QPushButton(DialogPointCloudRansacPrimitiveExtraction);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));

        horizontalLayout_2->addWidget(pushButtonReset);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonExtract = new QPushButton(DialogPointCloudRansacPrimitiveExtraction);
        pushButtonExtract->setObjectName(QString::fromUtf8("pushButtonExtract"));

        horizontalLayout_2->addWidget(pushButtonExtract);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        VerticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(checkBoxPlane, checkBoxCylinder);
        QWidget::setTabOrder(checkBoxCylinder, checkBoxSphere);
        QWidget::setTabOrder(checkBoxSphere, checkBoxCone);
        QWidget::setTabOrder(checkBoxCone, checkBoxTorus);
        QWidget::setTabOrder(checkBoxTorus, spinBoxMinimumSupport);
        QWidget::setTabOrder(spinBoxMinimumSupport, doubleSpinBoxDistanceThreshold);
        QWidget::setTabOrder(doubleSpinBoxDistanceThreshold, doubleSpinBoxBitmapResolution);
        QWidget::setTabOrder(doubleSpinBoxBitmapResolution, doubleSpinBoxNormalThreshold);
        QWidget::setTabOrder(doubleSpinBoxNormalThreshold, doubleSpinBoxOverlookProbability);
        QWidget::setTabOrder(doubleSpinBoxOverlookProbability, pushButtonReset);
        QWidget::setTabOrder(pushButtonReset, pushButtonExtract);

        retranslateUi(DialogPointCloudRansacPrimitiveExtraction);

        pushButtonExtract->setDefault(true);


        QMetaObject::connectSlotsByName(DialogPointCloudRansacPrimitiveExtraction);
    } // setupUi

    void retranslateUi(QDialog *DialogPointCloudRansacPrimitiveExtraction)
    {
        DialogPointCloudRansacPrimitiveExtraction->setWindowTitle(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "RANSAC-based Primitive Extraction", nullptr));
        groupBoxTypes->setTitle(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Primitive Types", nullptr));
        checkBoxPlane->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Plane", nullptr));
        checkBoxCylinder->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Cylinder", nullptr));
        checkBoxSphere->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Sphere", nullptr));
        checkBoxCone->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Cone", nullptr));
        checkBoxTorus->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Torus", nullptr));
        groupBoxParameters->setTitle(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "RANSAC Parameters", nullptr));
        label->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Minimum support", nullptr));
        label_2->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Distance threshold", nullptr));
        label_3->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Bitmap resolution", nullptr));
        label_4->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Normal threshold", nullptr));
        label_5->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Overlook probability", nullptr));
        pushButtonReset->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Reset", nullptr));
        pushButtonExtract->setText(QApplication::translate("DialogPointCloudRansacPrimitiveExtraction", "Extract", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPointCloudRansacPrimitiveExtraction: public Ui_DialogPointCloudRansacPrimitiveExtraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_POINT_CLOUD_RANSAC_PRIMITIVE_EXTRACTION_H
