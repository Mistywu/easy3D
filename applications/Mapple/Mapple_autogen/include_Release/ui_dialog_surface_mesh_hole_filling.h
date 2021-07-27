/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_hole_filling.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_HOLE_FILLING_H
#define UI_DIALOG_SURFACE_MESH_HOLE_FILLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshHoleFilling
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAllowedBoundarySize;
    QSpinBox *spinBoxAllowedBoundarySize;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QDialog *DialogSurfaceMeshHoleFilling)
    {
        if (DialogSurfaceMeshHoleFilling->objectName().isEmpty())
            DialogSurfaceMeshHoleFilling->setObjectName(QString::fromUtf8("DialogSurfaceMeshHoleFilling"));
        DialogSurfaceMeshHoleFilling->resize(244, 89);
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshHoleFilling);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelAllowedBoundarySize = new QLabel(DialogSurfaceMeshHoleFilling);
        labelAllowedBoundarySize->setObjectName(QString::fromUtf8("labelAllowedBoundarySize"));

        horizontalLayout->addWidget(labelAllowedBoundarySize);

        spinBoxAllowedBoundarySize = new QSpinBox(DialogSurfaceMeshHoleFilling);
        spinBoxAllowedBoundarySize->setObjectName(QString::fromUtf8("spinBoxAllowedBoundarySize"));
        spinBoxAllowedBoundarySize->setMinimum(3);
        spinBoxAllowedBoundarySize->setMaximum(9999999);
        spinBoxAllowedBoundarySize->setValue(50);

        horizontalLayout->addWidget(spinBoxAllowedBoundarySize);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        okButton = new QPushButton(DialogSurfaceMeshHoleFilling);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(spinBoxAllowedBoundarySize, okButton);

        retranslateUi(DialogSurfaceMeshHoleFilling);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshHoleFilling);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshHoleFilling)
    {
        DialogSurfaceMeshHoleFilling->setWindowTitle(QApplication::translate("DialogSurfaceMeshHoleFilling", "Surface Sampling", nullptr));
        labelAllowedBoundarySize->setText(QApplication::translate("DialogSurfaceMeshHoleFilling", "Allowed boundary size", nullptr));
        okButton->setText(QApplication::translate("DialogSurfaceMeshHoleFilling", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshHoleFilling: public Ui_DialogSurfaceMeshHoleFilling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_HOLE_FILLING_H
