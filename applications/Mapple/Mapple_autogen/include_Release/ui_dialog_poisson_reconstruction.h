/********************************************************************************
** Form generated from reading UI file 'dialog_poisson_reconstruction.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_POISSON_RECONSTRUCTION_H
#define UI_DIALOG_POISSON_RECONSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPoissonReconstruction
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxReconstruction;
    QGridLayout *gridLayout;
    QLabel *labelOctreeDepth;
    QSpinBox *spinBoxOctreeDepth;
    QLabel *labelSamplesPerNode;
    QSpinBox *spinBoxSamplesPerNode;
    QGroupBox *groupBoxTrim;
    QGridLayout *gridLayout_2;
    QLabel *labelIslandAreaRatio;
    QLabel *labelTrimValue;
    QDoubleSpinBox *doubleSpinBoxIslandAreaRatio;
    QDoubleSpinBox *doubleSpinBoxTrimValue;
    QHBoxLayout *horizontalLayoutButtons;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonDefault;
    QPushButton *pushButtonReconstruct;
    QPushButton *pushButtonTrim;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widgetHint;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowserHint;

    void setupUi(QDialog *DialogPoissonReconstruction)
    {
        if (DialogPoissonReconstruction->objectName().isEmpty())
            DialogPoissonReconstruction->setObjectName(QString::fromUtf8("DialogPoissonReconstruction"));
        DialogPoissonReconstruction->resize(451, 389);
        DialogPoissonReconstruction->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(DialogPoissonReconstruction);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBoxReconstruction = new QGroupBox(DialogPoissonReconstruction);
        groupBoxReconstruction->setObjectName(QString::fromUtf8("groupBoxReconstruction"));
        gridLayout = new QGridLayout(groupBoxReconstruction);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelOctreeDepth = new QLabel(groupBoxReconstruction);
        labelOctreeDepth->setObjectName(QString::fromUtf8("labelOctreeDepth"));

        gridLayout->addWidget(labelOctreeDepth, 0, 0, 1, 1);

        spinBoxOctreeDepth = new QSpinBox(groupBoxReconstruction);
        spinBoxOctreeDepth->setObjectName(QString::fromUtf8("spinBoxOctreeDepth"));
        spinBoxOctreeDepth->setMinimum(1);
        spinBoxOctreeDepth->setMaximum(15);
        spinBoxOctreeDepth->setValue(8);

        gridLayout->addWidget(spinBoxOctreeDepth, 0, 1, 1, 1);

        labelSamplesPerNode = new QLabel(groupBoxReconstruction);
        labelSamplesPerNode->setObjectName(QString::fromUtf8("labelSamplesPerNode"));

        gridLayout->addWidget(labelSamplesPerNode, 1, 0, 1, 1);

        spinBoxSamplesPerNode = new QSpinBox(groupBoxReconstruction);
        spinBoxSamplesPerNode->setObjectName(QString::fromUtf8("spinBoxSamplesPerNode"));
        spinBoxSamplesPerNode->setMinimum(1);
        spinBoxSamplesPerNode->setMaximum(20);
        spinBoxSamplesPerNode->setValue(1);

        gridLayout->addWidget(spinBoxSamplesPerNode, 1, 1, 1, 1);


        horizontalLayout->addWidget(groupBoxReconstruction);

        groupBoxTrim = new QGroupBox(DialogPoissonReconstruction);
        groupBoxTrim->setObjectName(QString::fromUtf8("groupBoxTrim"));
        gridLayout_2 = new QGridLayout(groupBoxTrim);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelIslandAreaRatio = new QLabel(groupBoxTrim);
        labelIslandAreaRatio->setObjectName(QString::fromUtf8("labelIslandAreaRatio"));

        gridLayout_2->addWidget(labelIslandAreaRatio, 1, 0, 1, 1);

        labelTrimValue = new QLabel(groupBoxTrim);
        labelTrimValue->setObjectName(QString::fromUtf8("labelTrimValue"));

        gridLayout_2->addWidget(labelTrimValue, 0, 0, 1, 1);

        doubleSpinBoxIslandAreaRatio = new QDoubleSpinBox(groupBoxTrim);
        doubleSpinBoxIslandAreaRatio->setObjectName(QString::fromUtf8("doubleSpinBoxIslandAreaRatio"));
        doubleSpinBoxIslandAreaRatio->setDecimals(3);
        doubleSpinBoxIslandAreaRatio->setMinimum(0.001000000000000);
        doubleSpinBoxIslandAreaRatio->setMaximum(1.000000000000000);
        doubleSpinBoxIslandAreaRatio->setValue(0.001000000000000);

        gridLayout_2->addWidget(doubleSpinBoxIslandAreaRatio, 1, 1, 1, 1);

        doubleSpinBoxTrimValue = new QDoubleSpinBox(groupBoxTrim);
        doubleSpinBoxTrimValue->setObjectName(QString::fromUtf8("doubleSpinBoxTrimValue"));
        doubleSpinBoxTrimValue->setDecimals(3);
        doubleSpinBoxTrimValue->setMinimum(0.001000000000000);
        doubleSpinBoxTrimValue->setMaximum(100.000000000000000);
        doubleSpinBoxTrimValue->setValue(6.000000000000000);

        gridLayout_2->addWidget(doubleSpinBoxTrimValue, 0, 1, 1, 1);


        horizontalLayout->addWidget(groupBoxTrim);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayoutButtons = new QHBoxLayout();
        horizontalLayoutButtons->setObjectName(QString::fromUtf8("horizontalLayoutButtons"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacer);

        pushButtonHelp = new QPushButton(DialogPoissonReconstruction);
        pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
        pushButtonHelp->setCheckable(true);

        horizontalLayoutButtons->addWidget(pushButtonHelp);

        pushButtonDefault = new QPushButton(DialogPoissonReconstruction);
        pushButtonDefault->setObjectName(QString::fromUtf8("pushButtonDefault"));

        horizontalLayoutButtons->addWidget(pushButtonDefault);

        pushButtonReconstruct = new QPushButton(DialogPoissonReconstruction);
        pushButtonReconstruct->setObjectName(QString::fromUtf8("pushButtonReconstruct"));

        horizontalLayoutButtons->addWidget(pushButtonReconstruct);

        pushButtonTrim = new QPushButton(DialogPoissonReconstruction);
        pushButtonTrim->setObjectName(QString::fromUtf8("pushButtonTrim"));

        horizontalLayoutButtons->addWidget(pushButtonTrim);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayoutButtons);

        widgetHint = new QWidget(DialogPoissonReconstruction);
        widgetHint->setObjectName(QString::fromUtf8("widgetHint"));
        verticalLayout = new QVBoxLayout(widgetHint);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        textBrowserHint = new QTextBrowser(widgetHint);
        textBrowserHint->setObjectName(QString::fromUtf8("textBrowserHint"));

        verticalLayout->addWidget(textBrowserHint);


        verticalLayout_2->addWidget(widgetHint);

        QWidget::setTabOrder(spinBoxOctreeDepth, doubleSpinBoxTrimValue);
        QWidget::setTabOrder(doubleSpinBoxTrimValue, spinBoxSamplesPerNode);
        QWidget::setTabOrder(spinBoxSamplesPerNode, doubleSpinBoxIslandAreaRatio);
        QWidget::setTabOrder(doubleSpinBoxIslandAreaRatio, pushButtonHelp);
        QWidget::setTabOrder(pushButtonHelp, pushButtonDefault);
        QWidget::setTabOrder(pushButtonDefault, pushButtonReconstruct);
        QWidget::setTabOrder(pushButtonReconstruct, pushButtonTrim);
        QWidget::setTabOrder(pushButtonTrim, textBrowserHint);

        retranslateUi(DialogPoissonReconstruction);

        pushButtonReconstruct->setDefault(true);


        QMetaObject::connectSlotsByName(DialogPoissonReconstruction);
    } // setupUi

    void retranslateUi(QDialog *DialogPoissonReconstruction)
    {
        DialogPoissonReconstruction->setWindowTitle(QApplication::translate("DialogPoissonReconstruction", "Poisson Sruface Reconstruction", nullptr));
        groupBoxReconstruction->setTitle(QApplication::translate("DialogPoissonReconstruction", "Reconstruction", nullptr));
        labelOctreeDepth->setText(QApplication::translate("DialogPoissonReconstruction", "Octree Depth", nullptr));
        labelSamplesPerNode->setText(QApplication::translate("DialogPoissonReconstruction", "Samples per Node", nullptr));
        groupBoxTrim->setTitle(QApplication::translate("DialogPoissonReconstruction", "Trim", nullptr));
        labelIslandAreaRatio->setText(QApplication::translate("DialogPoissonReconstruction", "Island Area Ratio", nullptr));
        labelTrimValue->setText(QApplication::translate("DialogPoissonReconstruction", "Trim Value", nullptr));
        pushButtonHelp->setText(QApplication::translate("DialogPoissonReconstruction", "Help", nullptr));
        pushButtonDefault->setText(QApplication::translate("DialogPoissonReconstruction", "Default", nullptr));
        pushButtonReconstruct->setText(QApplication::translate("DialogPoissonReconstruction", "Reconstruct", nullptr));
        pushButtonTrim->setText(QApplication::translate("DialogPoissonReconstruction", "Trim", nullptr));
        textBrowserHint->setHtml(QApplication::translate("DialogPoissonReconstruction", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">Octree Depth</span><span style=\" font-family:'MS Shell Dlg 2';\">: This integer is the maximum depth of the tree that will be used for surface reconstruction. Running at depth </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic;\">d</span><span style=\" font-family:'MS Shell Dlg 2';\"> corresponds to solving on a voxel grid whose resolution is no larger than 2^</span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic;\">d </span><span style=\" font-family:'MS"
                        " Shell Dlg 2';\">* 2^</span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic;\">d</span><span style=\" font-family:'MS Shell Dlg 2';\"> * 2^</span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic;\">d</span><span style=\" font-family:'MS Shell Dlg 2';\">. Note that since the reconstructor adapts the octree to the sampling density, the specified reconstruction depth is only an upper bound. The default value is 8.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">Samples per Node</span><span style=\" font-family:'MS Shell Dlg 2';\">: This floating point value specifies the minimum number of sample points that should fall within an octree node as the octree construction is adapted to sampling density. For noise-free samples, small values in the range [1.0 - 5.0] can be used. For more noisy samples, larger values in the range [15.0 - 20."
                        "0] may be needed to provide a smoother, noise-reduced, reconstruction. The default value is 1.0.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">Trim Value</span><span style=\" font-family:'MS Shell Dlg 2';\">: This floating point values specifies the value for mesh trimming. The subset of the mesh with the sampling density smaller than trim value will be discarded.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600;\">Area Ratio</span><span style=\" font-family:'MS Shell Dlg 2';\">: This floating point value specifies the area ratio that defines a disconnected component as an &quot;island&quot;. Connected components whose area, relative to the total area of the mesh, are smaller than this value will be merged int"
                        "o the output surface to close small holes, and will be discarded from the output surface to remove small disconnected components. The default value 0.001.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPoissonReconstruction: public Ui_DialogPoissonReconstruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_POISSON_RECONSTRUCTION_H
