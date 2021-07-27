/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_parameterization.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_PARAMETERIZATION_H
#define UI_DIALOG_SURFACE_MESH_PARAMETERIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshParameterization
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMethod;
    QComboBox *comboBoxMethod;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QDialog *DialogSurfaceMeshParameterization)
    {
        if (DialogSurfaceMeshParameterization->objectName().isEmpty())
            DialogSurfaceMeshParameterization->setObjectName(QString::fromUtf8("DialogSurfaceMeshParameterization"));
        DialogSurfaceMeshParameterization->resize(306, 89);
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshParameterization);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelMethod = new QLabel(DialogSurfaceMeshParameterization);
        labelMethod->setObjectName(QString::fromUtf8("labelMethod"));

        horizontalLayout->addWidget(labelMethod);

        comboBoxMethod = new QComboBox(DialogSurfaceMeshParameterization);
        comboBoxMethod->setObjectName(QString::fromUtf8("comboBoxMethod"));

        horizontalLayout->addWidget(comboBoxMethod);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        okButton = new QPushButton(DialogSurfaceMeshParameterization);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(comboBoxMethod, okButton);

        retranslateUi(DialogSurfaceMeshParameterization);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshParameterization);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshParameterization)
    {
        DialogSurfaceMeshParameterization->setWindowTitle(QApplication::translate("DialogSurfaceMeshParameterization", "Surface Sampling", nullptr));
        labelMethod->setText(QApplication::translate("DialogSurfaceMeshParameterization", "Expected vertex number", nullptr));
        okButton->setText(QApplication::translate("DialogSurfaceMeshParameterization", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshParameterization: public Ui_DialogSurfaceMeshParameterization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_PARAMETERIZATION_H
