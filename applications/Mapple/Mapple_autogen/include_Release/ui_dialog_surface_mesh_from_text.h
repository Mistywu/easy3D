/********************************************************************************
** Form generated from reading UI file 'dialog_surface_mesh_from_text.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SURFACE_MESH_FROM_TEXT_H
#define UI_DIALOG_SURFACE_MESH_FROM_TEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSurfaceMeshFromText
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelText;
    QLineEdit *lineEditText;
    QLabel *labelFontFile;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditFontFile;
    QToolButton *toolButtonTFontFile;
    QLabel *labelFontSize;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBoxFontSize;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelExtrusion;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxExtrusion;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelBezierSteps;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *spinBoxBezierSteps;
    QSpacerItem *horizontalSpacer_6;
    QLabel *LabelCollisionFree;
    QCheckBox *checkBoxCollisionFree;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *applyButton;

    void setupUi(QDialog *DialogSurfaceMeshFromText)
    {
        if (DialogSurfaceMeshFromText->objectName().isEmpty())
            DialogSurfaceMeshFromText->setObjectName(QString::fromUtf8("DialogSurfaceMeshFromText"));
        DialogSurfaceMeshFromText->resize(300, 265);
        DialogSurfaceMeshFromText->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(DialogSurfaceMeshFromText);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelText = new QLabel(DialogSurfaceMeshFromText);
        labelText->setObjectName(QString::fromUtf8("labelText"));

        gridLayout->addWidget(labelText, 0, 0, 1, 1);

        lineEditText = new QLineEdit(DialogSurfaceMeshFromText);
        lineEditText->setObjectName(QString::fromUtf8("lineEditText"));

        gridLayout->addWidget(lineEditText, 0, 1, 1, 1);

        labelFontFile = new QLabel(DialogSurfaceMeshFromText);
        labelFontFile->setObjectName(QString::fromUtf8("labelFontFile"));

        gridLayout->addWidget(labelFontFile, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEditFontFile = new QLineEdit(DialogSurfaceMeshFromText);
        lineEditFontFile->setObjectName(QString::fromUtf8("lineEditFontFile"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditFontFile->sizePolicy().hasHeightForWidth());
        lineEditFontFile->setSizePolicy(sizePolicy);
        lineEditFontFile->setMinimumSize(QSize(50, 0));
        lineEditFontFile->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEditFontFile->setReadOnly(true);

        horizontalLayout_4->addWidget(lineEditFontFile);

        toolButtonTFontFile = new QToolButton(DialogSurfaceMeshFromText);
        toolButtonTFontFile->setObjectName(QString::fromUtf8("toolButtonTFontFile"));
        toolButtonTFontFile->setMinimumSize(QSize(20, 20));
        toolButtonTFontFile->setMaximumSize(QSize(20, 20));
        toolButtonTFontFile->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(toolButtonTFontFile);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        labelFontSize = new QLabel(DialogSurfaceMeshFromText);
        labelFontSize->setObjectName(QString::fromUtf8("labelFontSize"));

        gridLayout->addWidget(labelFontSize, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinBoxFontSize = new QSpinBox(DialogSurfaceMeshFromText);
        spinBoxFontSize->setObjectName(QString::fromUtf8("spinBoxFontSize"));
        spinBoxFontSize->setMinimumSize(QSize(20, 0));
        spinBoxFontSize->setMinimum(5);
        spinBoxFontSize->setMaximum(100);
        spinBoxFontSize->setSingleStep(1);
        spinBoxFontSize->setValue(45);

        horizontalLayout_3->addWidget(spinBoxFontSize);

        horizontalSpacer_4 = new QSpacerItem(50, 17, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        labelExtrusion = new QLabel(DialogSurfaceMeshFromText);
        labelExtrusion->setObjectName(QString::fromUtf8("labelExtrusion"));

        gridLayout->addWidget(labelExtrusion, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBoxExtrusion = new QSpinBox(DialogSurfaceMeshFromText);
        spinBoxExtrusion->setObjectName(QString::fromUtf8("spinBoxExtrusion"));
        spinBoxExtrusion->setMinimumSize(QSize(20, 0));
        spinBoxExtrusion->setMinimum(1);
        spinBoxExtrusion->setMaximum(100);
        spinBoxExtrusion->setSingleStep(1);
        spinBoxExtrusion->setValue(10);

        horizontalLayout->addWidget(spinBoxExtrusion);

        horizontalSpacer_5 = new QSpacerItem(50, 17, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        labelBezierSteps = new QLabel(DialogSurfaceMeshFromText);
        labelBezierSteps->setObjectName(QString::fromUtf8("labelBezierSteps"));

        gridLayout->addWidget(labelBezierSteps, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        spinBoxBezierSteps = new QSpinBox(DialogSurfaceMeshFromText);
        spinBoxBezierSteps->setObjectName(QString::fromUtf8("spinBoxBezierSteps"));
        spinBoxBezierSteps->setMinimumSize(QSize(20, 0));
        spinBoxBezierSteps->setMinimum(1);
        spinBoxBezierSteps->setMaximum(10);
        spinBoxBezierSteps->setSingleStep(1);
        spinBoxBezierSteps->setValue(4);

        horizontalLayout_5->addWidget(spinBoxBezierSteps);

        horizontalSpacer_6 = new QSpacerItem(50, 17, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_5, 4, 1, 1, 1);

        LabelCollisionFree = new QLabel(DialogSurfaceMeshFromText);
        LabelCollisionFree->setObjectName(QString::fromUtf8("LabelCollisionFree"));

        gridLayout->addWidget(LabelCollisionFree, 5, 0, 1, 1);

        checkBoxCollisionFree = new QCheckBox(DialogSurfaceMeshFromText);
        checkBoxCollisionFree->setObjectName(QString::fromUtf8("checkBoxCollisionFree"));
        checkBoxCollisionFree->setChecked(true);

        gridLayout->addWidget(checkBoxCollisionFree, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(DialogSurfaceMeshFromText);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        applyButton = new QPushButton(DialogSurfaceMeshFromText);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_2->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(lineEditText, lineEditFontFile);
        QWidget::setTabOrder(lineEditFontFile, toolButtonTFontFile);
        QWidget::setTabOrder(toolButtonTFontFile, spinBoxFontSize);
        QWidget::setTabOrder(spinBoxFontSize, spinBoxExtrusion);
        QWidget::setTabOrder(spinBoxExtrusion, spinBoxBezierSteps);
        QWidget::setTabOrder(spinBoxBezierSteps, checkBoxCollisionFree);
        QWidget::setTabOrder(checkBoxCollisionFree, applyButton);

        retranslateUi(DialogSurfaceMeshFromText);

        applyButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSurfaceMeshFromText);
    } // setupUi

    void retranslateUi(QDialog *DialogSurfaceMeshFromText)
    {
        DialogSurfaceMeshFromText->setWindowTitle(QApplication::translate("DialogSurfaceMeshFromText", "Create Surface Mesh from Text", nullptr));
        labelText->setText(QApplication::translate("DialogSurfaceMeshFromText", "Text", nullptr));
        lineEditText->setText(QApplication::translate("DialogSurfaceMeshFromText", "Easy3D", nullptr));
        labelFontFile->setText(QApplication::translate("DialogSurfaceMeshFromText", "Font file (*.ttf)", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEditFontFile->setToolTip(QApplication::translate("DialogSurfaceMeshFromText", "The image file of the texture", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditFontFile->setText(QApplication::translate("DialogSurfaceMeshFromText", "en_Earth-Normal.ttf", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButtonTFontFile->setToolTip(QApplication::translate("DialogSurfaceMeshFromText", "Click to choose a texture image", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonTFontFile->setText(QApplication::translate("DialogSurfaceMeshFromText", "...", nullptr));
        labelFontSize->setText(QApplication::translate("DialogSurfaceMeshFromText", "Font size", nullptr));
        labelExtrusion->setText(QApplication::translate("DialogSurfaceMeshFromText", "Extrusion", nullptr));
        labelBezierSteps->setText(QApplication::translate("DialogSurfaceMeshFromText", "Bezier steps", nullptr));
        LabelCollisionFree->setText(QApplication::translate("DialogSurfaceMeshFromText", "Collision free", nullptr));
        checkBoxCollisionFree->setText(QString());
        applyButton->setText(QApplication::translate("DialogSurfaceMeshFromText", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSurfaceMeshFromText: public Ui_DialogSurfaceMeshFromText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SURFACE_MESH_FROM_TEXT_H
