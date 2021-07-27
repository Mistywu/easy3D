/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_curvature.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_CURVATURE_H
#define UI_DIALOG_SURFACE_MESH_CURVATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshCurvature
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelPostSmoothingIterations;
    QSpinBox *spinBoxPostSmoothingIterations;
    QLabel *labelUseTwoRingNeighborhood;
    QCheckBox *checkBoxUseTwoRingNeighborhood;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *applyButton;

    void setupUi(QDialog *DialogSurfaceMeshCurvature)
    {
        if (DialogSurfaceMeshCurvature->objectName().isEmpty())
            DialogSurfaceMeshCurvature->setObjectName(QString::fromUtf8("DialogSurfaceMeshCurvature"));
        DialogSurfaceMeshCurvature->resize(248, 133);
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshCurvature);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelPostSmoothingIterations = new QLabel(DialogSurfaceMeshCurvature);
        labelPostSmoothingIterations->setObjectName(QString::fromUtf8("labelPostSmoothingIterations"));

        gridLayout->addWidget(labelPostSmoothingIterations, 0, 0, 1, 1);

        spinBoxPostSmoothingIterations = new QSpinBox(DialogSurfaceMeshCurvature);
        spinBoxPostSmoothingIterations->setObjectName(QString::fromUtf8("spinBoxPostSmoothingIterations"));
        spinBoxPostSmoothingIterations->setMinimumSize(QSize(20, 0));
        spinBoxPostSmoothingIterations->setMinimum(0);
        spinBoxPostSmoothingIterations->setMaximum(100);
        spinBoxPostSmoothingIterations->setSingleStep(1);
        spinBoxPostSmoothingIterations->setValue(1);

        gridLayout->addWidget(spinBoxPostSmoothingIterations, 0, 1, 1, 1);

        labelUseTwoRingNeighborhood = new QLabel(DialogSurfaceMeshCurvature);
        labelUseTwoRingNeighborhood->setObjectName(QString::fromUtf8("labelUseTwoRingNeighborhood"));

        gridLayout->addWidget(labelUseTwoRingNeighborhood, 1, 0, 1, 1);

        checkBoxUseTwoRingNeighborhood = new QCheckBox(DialogSurfaceMeshCurvature);
        checkBoxUseTwoRingNeighborhood->setObjectName(QString::fromUtf8("checkBoxUseTwoRingNeighborhood"));
        checkBoxUseTwoRingNeighborhood->setChecked(true);

        gridLayout->addWidget(checkBoxUseTwoRingNeighborhood, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(DialogSurfaceMeshCurvature);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        applyButton = new QPushButton(DialogSurfaceMeshCurvature);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_2->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(spinBoxPostSmoothingIterations, checkBoxUseTwoRingNeighborhood);
        QWidget::setTabOrder(checkBoxUseTwoRingNeighborhood, applyButton);

        retranslateUi(DialogSurfaceMeshCurvature);

        applyButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshCurvature);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshCurvature)
    {
        DialogSurfaceMeshCurvature->setWindowTitle(QApplication::translate("DialogSurfaceMeshCurvature", "Surface Sampling", nullptr));
        labelPostSmoothingIterations->setText(QApplication::translate("DialogSurfaceMeshCurvature", "Post-smoothing Iterations", nullptr));
        labelUseTwoRingNeighborhood->setText(QApplication::translate("DialogSurfaceMeshCurvature", "Use 2-Ring Neighborhood", nullptr));
        checkBoxUseTwoRingNeighborhood->setText(QString());
        applyButton->setText(QApplication::translate("DialogSurfaceMeshCurvature", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshCurvature: public Ui_DialogSurfaceMeshCurvature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_CURVATURE_H
