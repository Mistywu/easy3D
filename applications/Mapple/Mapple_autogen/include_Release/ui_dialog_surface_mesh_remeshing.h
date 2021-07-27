/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_remeshing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_REMESHING_H
#define UI_DIALOG_SURFACE_MESH_REMESHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshRemeshing
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelScheme;
    QComboBox *comboBoxScheme;
    QLabel *labelEdgeLength;
    QDoubleSpinBox *doubleSpinBoxEdgeLength;
    QLabel *labelUserFeatures;
    QCheckBox *checkBoxUseFeatures;
    QLabel *labelUserFeatures_2;
    QSpinBox *spinBoxDihedralAngle;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QDialog *DialogSurfaceMeshRemeshing)
    {
        if (DialogSurfaceMeshRemeshing->objectName().isEmpty())
            DialogSurfaceMeshRemeshing->setObjectName(QString::fromUtf8("DialogSurfaceMeshRemeshing"));
        DialogSurfaceMeshRemeshing->resize(367, 183);
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshRemeshing);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelScheme = new QLabel(DialogSurfaceMeshRemeshing);
        labelScheme->setObjectName(QString::fromUtf8("labelScheme"));

        gridLayout->addWidget(labelScheme, 0, 0, 1, 1);

        comboBoxScheme = new QComboBox(DialogSurfaceMeshRemeshing);
        comboBoxScheme->setObjectName(QString::fromUtf8("comboBoxScheme"));

        gridLayout->addWidget(comboBoxScheme, 0, 1, 1, 1);

        labelEdgeLength = new QLabel(DialogSurfaceMeshRemeshing);
        labelEdgeLength->setObjectName(QString::fromUtf8("labelEdgeLength"));

        gridLayout->addWidget(labelEdgeLength, 1, 0, 1, 1);

        doubleSpinBoxEdgeLength = new QDoubleSpinBox(DialogSurfaceMeshRemeshing);
        doubleSpinBoxEdgeLength->setObjectName(QString::fromUtf8("doubleSpinBoxEdgeLength"));
        doubleSpinBoxEdgeLength->setDecimals(1);
        doubleSpinBoxEdgeLength->setMinimum(0.100000000000000);
        doubleSpinBoxEdgeLength->setValue(1.000000000000000);

        gridLayout->addWidget(doubleSpinBoxEdgeLength, 1, 1, 1, 1);

        labelUserFeatures = new QLabel(DialogSurfaceMeshRemeshing);
        labelUserFeatures->setObjectName(QString::fromUtf8("labelUserFeatures"));

        gridLayout->addWidget(labelUserFeatures, 2, 0, 1, 1);

        checkBoxUseFeatures = new QCheckBox(DialogSurfaceMeshRemeshing);
        checkBoxUseFeatures->setObjectName(QString::fromUtf8("checkBoxUseFeatures"));
        checkBoxUseFeatures->setChecked(true);

        gridLayout->addWidget(checkBoxUseFeatures, 2, 1, 1, 1);

        labelUserFeatures_2 = new QLabel(DialogSurfaceMeshRemeshing);
        labelUserFeatures_2->setObjectName(QString::fromUtf8("labelUserFeatures_2"));

        gridLayout->addWidget(labelUserFeatures_2, 3, 0, 1, 1);

        spinBoxDihedralAngle = new QSpinBox(DialogSurfaceMeshRemeshing);
        spinBoxDihedralAngle->setObjectName(QString::fromUtf8("spinBoxDihedralAngle"));
        spinBoxDihedralAngle->setMinimum(1);
        spinBoxDihedralAngle->setMaximum(180);
        spinBoxDihedralAngle->setValue(60);

        gridLayout->addWidget(spinBoxDihedralAngle, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        okButton = new QPushButton(DialogSurfaceMeshRemeshing);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(comboBoxScheme, doubleSpinBoxEdgeLength);
        QWidget::setTabOrder(doubleSpinBoxEdgeLength, checkBoxUseFeatures);
        QWidget::setTabOrder(checkBoxUseFeatures, spinBoxDihedralAngle);
        QWidget::setTabOrder(spinBoxDihedralAngle, okButton);

        retranslateUi(DialogSurfaceMeshRemeshing);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshRemeshing);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshRemeshing)
    {
        DialogSurfaceMeshRemeshing->setWindowTitle(QApplication::translate("DialogSurfaceMeshRemeshing", "Surface Sampling", nullptr));
        labelScheme->setText(QApplication::translate("DialogSurfaceMeshRemeshing", "Scheme", nullptr));
        labelEdgeLength->setText(QApplication::translate("DialogSurfaceMeshRemeshing", "Edge length (w.r.t. average edge length)", nullptr));
        labelUserFeatures->setText(QApplication::translate("DialogSurfaceMeshRemeshing", "Use features", nullptr));
        checkBoxUseFeatures->setText(QString());
        labelUserFeatures_2->setText(QApplication::translate("DialogSurfaceMeshRemeshing", "Dihedral angle (in degrees)", nullptr));
        okButton->setText(QApplication::translate("DialogSurfaceMeshRemeshing", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshRemeshing: public Ui_DialogSurfaceMeshRemeshing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_REMESHING_H
