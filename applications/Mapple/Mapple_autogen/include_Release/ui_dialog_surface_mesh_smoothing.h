/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_smoothing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_SMOOTHING_H
#define UI_DIALOG_SURFACE_MESH_SMOOTHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshSmoothing
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelScheme;
    QComboBox *comboBoxScheme;
    QLabel *labelIterations;
    QSpinBox *spinBoxIterations;
    QLabel *labelUniformLaplace;
    QCheckBox *checkBoxUniformLaplace;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QDialog *DialogSurfaceMeshSmoothing)
    {
        if (DialogSurfaceMeshSmoothing->objectName().isEmpty())
            DialogSurfaceMeshSmoothing->setObjectName(QString::fromUtf8("DialogSurfaceMeshSmoothing"));
        DialogSurfaceMeshSmoothing->resize(225, 155);
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshSmoothing);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelScheme = new QLabel(DialogSurfaceMeshSmoothing);
        labelScheme->setObjectName(QString::fromUtf8("labelScheme"));

        gridLayout->addWidget(labelScheme, 0, 0, 1, 1);

        comboBoxScheme = new QComboBox(DialogSurfaceMeshSmoothing);
        comboBoxScheme->setObjectName(QString::fromUtf8("comboBoxScheme"));

        gridLayout->addWidget(comboBoxScheme, 0, 1, 1, 1);

        labelIterations = new QLabel(DialogSurfaceMeshSmoothing);
        labelIterations->setObjectName(QString::fromUtf8("labelIterations"));

        gridLayout->addWidget(labelIterations, 1, 0, 1, 1);

        spinBoxIterations = new QSpinBox(DialogSurfaceMeshSmoothing);
        spinBoxIterations->setObjectName(QString::fromUtf8("spinBoxIterations"));
        spinBoxIterations->setMinimum(1);
        spinBoxIterations->setValue(5);

        gridLayout->addWidget(spinBoxIterations, 1, 1, 1, 1);

        labelUniformLaplace = new QLabel(DialogSurfaceMeshSmoothing);
        labelUniformLaplace->setObjectName(QString::fromUtf8("labelUniformLaplace"));

        gridLayout->addWidget(labelUniformLaplace, 2, 0, 1, 1);

        checkBoxUniformLaplace = new QCheckBox(DialogSurfaceMeshSmoothing);
        checkBoxUniformLaplace->setObjectName(QString::fromUtf8("checkBoxUniformLaplace"));
        checkBoxUniformLaplace->setChecked(false);

        gridLayout->addWidget(checkBoxUniformLaplace, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        okButton = new QPushButton(DialogSurfaceMeshSmoothing);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DialogSurfaceMeshSmoothing);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshSmoothing);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshSmoothing)
    {
        DialogSurfaceMeshSmoothing->setWindowTitle(QApplication::translate("DialogSurfaceMeshSmoothing", "Surface Sampling", nullptr));
        labelScheme->setText(QApplication::translate("DialogSurfaceMeshSmoothing", "Scheme", nullptr));
        labelIterations->setText(QApplication::translate("DialogSurfaceMeshSmoothing", "Interations", nullptr));
        labelUniformLaplace->setText(QApplication::translate("DialogSurfaceMeshSmoothing", "Uniform Laplace", nullptr));
        checkBoxUniformLaplace->setText(QString());
        okButton->setText(QApplication::translate("DialogSurfaceMeshSmoothing", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshSmoothing: public Ui_DialogSurfaceMeshSmoothing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_SMOOTHING_H
