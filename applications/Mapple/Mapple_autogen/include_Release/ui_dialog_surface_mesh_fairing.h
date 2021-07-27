/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_fairing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_FAIRING_H
#define UI_DIALOG_SURFACE_MESH_FAIRING_H

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

class Ui_DialogSurfaceMeshFairing
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCriterion;
    QComboBox *comboBoxCriterion;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QDialog *DialogSurfaceMeshFairing)
    {
        if (DialogSurfaceMeshFairing->objectName().isEmpty())
            DialogSurfaceMeshFairing->setObjectName(QString::fromUtf8("DialogSurfaceMeshFairing"));
        DialogSurfaceMeshFairing->resize(215, 98);
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshFairing);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelCriterion = new QLabel(DialogSurfaceMeshFairing);
        labelCriterion->setObjectName(QString::fromUtf8("labelCriterion"));

        horizontalLayout->addWidget(labelCriterion);

        comboBoxCriterion = new QComboBox(DialogSurfaceMeshFairing);
        comboBoxCriterion->setObjectName(QString::fromUtf8("comboBoxCriterion"));

        horizontalLayout->addWidget(comboBoxCriterion);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        okButton = new QPushButton(DialogSurfaceMeshFairing);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(comboBoxCriterion, okButton);

        retranslateUi(DialogSurfaceMeshFairing);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshFairing);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshFairing)
    {
        DialogSurfaceMeshFairing->setWindowTitle(QApplication::translate("DialogSurfaceMeshFairing", "Surface Sampling", nullptr));
        labelCriterion->setText(QApplication::translate("DialogSurfaceMeshFairing", "Fairing criterion", nullptr));
        okButton->setText(QApplication::translate("DialogSurfaceMeshFairing", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshFairing: public Ui_DialogSurfaceMeshFairing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_FAIRING_H
