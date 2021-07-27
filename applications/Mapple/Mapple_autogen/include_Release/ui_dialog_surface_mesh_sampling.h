/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_sampling.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_SAMPLING_H
#define UI_DIALOG_SURFACE_MESH_SAMPLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshSampling
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPointNumber;
    QSpinBox *spinBoxPointNumber;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QDialog *DialogSurfaceMeshSampling)
    {
        if (DialogSurfaceMeshSampling->objectName().isEmpty())
            DialogSurfaceMeshSampling->setObjectName(QString::fromUtf8("DialogSurfaceMeshSampling"));
        DialogSurfaceMeshSampling->resize(210, 87);
        gridLayout = new QGridLayout(DialogSurfaceMeshSampling);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelPointNumber = new QLabel(DialogSurfaceMeshSampling);
        labelPointNumber->setObjectName(QString::fromUtf8("labelPointNumber"));

        gridLayout->addWidget(labelPointNumber, 0, 0, 1, 1);

        spinBoxPointNumber = new QSpinBox(DialogSurfaceMeshSampling);
        spinBoxPointNumber->setObjectName(QString::fromUtf8("spinBoxPointNumber"));
        spinBoxPointNumber->setMinimum(3);
        spinBoxPointNumber->setMaximum(1000000000);
        spinBoxPointNumber->setSingleStep(10000);
        spinBoxPointNumber->setValue(100000);

        gridLayout->addWidget(spinBoxPointNumber, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        okButton = new QPushButton(DialogSurfaceMeshSampling);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        QWidget::setTabOrder(spinBoxPointNumber, okButton);

        retranslateUi(DialogSurfaceMeshSampling);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshSampling);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshSampling)
    {
        DialogSurfaceMeshSampling->setWindowTitle(QApplication::translate("DialogSurfaceMeshSampling", "Surface Sampling", nullptr));
        labelPointNumber->setText(QApplication::translate("DialogSurfaceMeshSampling", "Point number", nullptr));
        okButton->setText(QApplication::translate("DialogSurfaceMeshSampling", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshSampling: public Ui_DialogSurfaceMeshSampling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_SAMPLING_H
