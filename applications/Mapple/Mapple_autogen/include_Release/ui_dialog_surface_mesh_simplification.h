/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_simplification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_SIMPLIFICATION_H
#define UI_DIALOG_SURFACE_MESH_SIMPLIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshSimplification
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelVertexNumber;
    QLineEdit *lineEditVertexNumber;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *okButton;

    void setupUi(QDialog *DialogSurfaceMeshSimplification)
    {
        if (DialogSurfaceMeshSimplification->objectName().isEmpty())
            DialogSurfaceMeshSimplification->setObjectName(QString::fromUtf8("DialogSurfaceMeshSimplification"));
        DialogSurfaceMeshSimplification->resize(306, 89);
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshSimplification);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelVertexNumber = new QLabel(DialogSurfaceMeshSimplification);
        labelVertexNumber->setObjectName(QString::fromUtf8("labelVertexNumber"));

        horizontalLayout->addWidget(labelVertexNumber);

        lineEditVertexNumber = new QLineEdit(DialogSurfaceMeshSimplification);
        lineEditVertexNumber->setObjectName(QString::fromUtf8("lineEditVertexNumber"));

        horizontalLayout->addWidget(lineEditVertexNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        okButton = new QPushButton(DialogSurfaceMeshSimplification);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(lineEditVertexNumber, okButton);

        retranslateUi(DialogSurfaceMeshSimplification);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshSimplification);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshSimplification)
    {
        DialogSurfaceMeshSimplification->setWindowTitle(QApplication::translate("DialogSurfaceMeshSimplification", "Surface Sampling", nullptr));
        labelVertexNumber->setText(QApplication::translate("DialogSurfaceMeshSimplification", "Expected vertex number", nullptr));
        okButton->setText(QApplication::translate("DialogSurfaceMeshSimplification", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshSimplification: public Ui_DialogSurfaceMeshSimplification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_SIMPLIFICATION_H
