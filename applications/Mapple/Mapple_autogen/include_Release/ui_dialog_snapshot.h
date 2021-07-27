/********************************************************************************
** Form generated from reading UI file 'dialog_snapshot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SNAPSHOT_H
#define UI_DIALOG_SNAPSHOT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSnapshot
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxImageSize;
    QGridLayout *gridLayout;
    QLabel *labelImageWidth;
    QSpinBox *spinBoxImageWidth;
    QLabel *labelImageHeight;
    QSpinBox *spinBoxImageHeight;
    QFrame *line;
    QLabel *labelImageScale;
    QDoubleSpinBox *doubleSpinBoxImageScale;
    QGroupBox *groupBoxMSAA;
    QGridLayout *gridLayout_3;
    QLabel *labelImageSamples;
    QSpinBox *spinBoxSamples;
    QGroupBox *groupBoxOptions;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxUseWhiteBackground;
    QCheckBox *checkBoxSaveWindowState;
    QCheckBox *checkBoxExpandFrustum;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonOK;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogSnapshot)
    {
        if (DialogSnapshot->objectName().isEmpty())
            DialogSnapshot->setObjectName(QString::fromUtf8("DialogSnapshot"));
        DialogSnapshot->resize(250, 393);
        verticalLayout = new QVBoxLayout(DialogSnapshot);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxImageSize = new QGroupBox(DialogSnapshot);
        groupBoxImageSize->setObjectName(QString::fromUtf8("groupBoxImageSize"));
        gridLayout = new QGridLayout(groupBoxImageSize);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelImageWidth = new QLabel(groupBoxImageSize);
        labelImageWidth->setObjectName(QString::fromUtf8("labelImageWidth"));

        gridLayout->addWidget(labelImageWidth, 0, 0, 1, 1);

        spinBoxImageWidth = new QSpinBox(groupBoxImageSize);
        spinBoxImageWidth->setObjectName(QString::fromUtf8("spinBoxImageWidth"));
        spinBoxImageWidth->setMinimum(100);
        spinBoxImageWidth->setMaximum(100000);
        spinBoxImageWidth->setSingleStep(100);

        gridLayout->addWidget(spinBoxImageWidth, 0, 1, 1, 1);

        labelImageHeight = new QLabel(groupBoxImageSize);
        labelImageHeight->setObjectName(QString::fromUtf8("labelImageHeight"));

        gridLayout->addWidget(labelImageHeight, 1, 0, 1, 1);

        spinBoxImageHeight = new QSpinBox(groupBoxImageSize);
        spinBoxImageHeight->setObjectName(QString::fromUtf8("spinBoxImageHeight"));
        spinBoxImageHeight->setMinimum(100);
        spinBoxImageHeight->setMaximum(100000);
        spinBoxImageHeight->setSingleStep(100);

        gridLayout->addWidget(spinBoxImageHeight, 1, 1, 1, 1);

        line = new QFrame(groupBoxImageSize);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 2);

        labelImageScale = new QLabel(groupBoxImageSize);
        labelImageScale->setObjectName(QString::fromUtf8("labelImageScale"));

        gridLayout->addWidget(labelImageScale, 3, 0, 1, 1);

        doubleSpinBoxImageScale = new QDoubleSpinBox(groupBoxImageSize);
        doubleSpinBoxImageScale->setObjectName(QString::fromUtf8("doubleSpinBoxImageScale"));
        doubleSpinBoxImageScale->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        doubleSpinBoxImageScale->setDecimals(1);
        doubleSpinBoxImageScale->setMinimum(0.100000000000000);
        doubleSpinBoxImageScale->setMaximum(20.000000000000000);
        doubleSpinBoxImageScale->setValue(1.000000000000000);

        gridLayout->addWidget(doubleSpinBoxImageScale, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBoxImageSize);

        groupBoxMSAA = new QGroupBox(DialogSnapshot);
        groupBoxMSAA->setObjectName(QString::fromUtf8("groupBoxMSAA"));
        gridLayout_3 = new QGridLayout(groupBoxMSAA);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelImageSamples = new QLabel(groupBoxMSAA);
        labelImageSamples->setObjectName(QString::fromUtf8("labelImageSamples"));

        gridLayout_3->addWidget(labelImageSamples, 0, 0, 1, 1);

        spinBoxSamples = new QSpinBox(groupBoxMSAA);
        spinBoxSamples->setObjectName(QString::fromUtf8("spinBoxSamples"));
        spinBoxSamples->setMinimum(0);
        spinBoxSamples->setMaximum(8);
        spinBoxSamples->setValue(0);

        gridLayout_3->addWidget(spinBoxSamples, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBoxMSAA);

        groupBoxOptions = new QGroupBox(DialogSnapshot);
        groupBoxOptions->setObjectName(QString::fromUtf8("groupBoxOptions"));
        gridLayout_2 = new QGridLayout(groupBoxOptions);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBoxUseWhiteBackground = new QCheckBox(groupBoxOptions);
        checkBoxUseWhiteBackground->setObjectName(QString::fromUtf8("checkBoxUseWhiteBackground"));
        checkBoxUseWhiteBackground->setChecked(true);

        gridLayout_2->addWidget(checkBoxUseWhiteBackground, 0, 0, 1, 1);

        checkBoxSaveWindowState = new QCheckBox(groupBoxOptions);
        checkBoxSaveWindowState->setObjectName(QString::fromUtf8("checkBoxSaveWindowState"));
        checkBoxSaveWindowState->setChecked(true);

        gridLayout_2->addWidget(checkBoxSaveWindowState, 2, 0, 1, 1);

        checkBoxExpandFrustum = new QCheckBox(groupBoxOptions);
        checkBoxExpandFrustum->setObjectName(QString::fromUtf8("checkBoxExpandFrustum"));
        checkBoxExpandFrustum->setChecked(true);

        gridLayout_2->addWidget(checkBoxExpandFrustum, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBoxOptions);

        line_2 = new QFrame(DialogSnapshot);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(DialogSnapshot);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(pushButtonCancel);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButtonOK = new QPushButton(DialogSnapshot);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(pushButtonOK);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(spinBoxImageWidth, spinBoxImageHeight);
        QWidget::setTabOrder(spinBoxImageHeight, doubleSpinBoxImageScale);
        QWidget::setTabOrder(doubleSpinBoxImageScale, spinBoxSamples);
        QWidget::setTabOrder(spinBoxSamples, checkBoxUseWhiteBackground);
        QWidget::setTabOrder(checkBoxUseWhiteBackground, checkBoxExpandFrustum);
        QWidget::setTabOrder(checkBoxExpandFrustum, checkBoxSaveWindowState);
        QWidget::setTabOrder(checkBoxSaveWindowState, pushButtonCancel);
        QWidget::setTabOrder(pushButtonCancel, pushButtonOK);

        retranslateUi(DialogSnapshot);

        pushButtonOK->setDefault(true);


        QMetaObject::connectSlotsByName(DialogSnapshot);
    } // setupUi

    void retranslateUi(QDialog *DialogSnapshot)
    {
        DialogSnapshot->setWindowTitle(QApplication::translate("DialogSnapshot", "Snapshot", nullptr));
        groupBoxImageSize->setTitle(QApplication::translate("DialogSnapshot", "Image Size", nullptr));
        labelImageWidth->setText(QApplication::translate("DialogSnapshot", "Width", nullptr));
        labelImageHeight->setText(QApplication::translate("DialogSnapshot", "Height", nullptr));
        labelImageScale->setText(QApplication::translate("DialogSnapshot", "Scale", nullptr));
        groupBoxMSAA->setTitle(QApplication::translate("DialogSnapshot", "MSAA", nullptr));
        labelImageSamples->setText(QApplication::translate("DialogSnapshot", "Samples", nullptr));
        groupBoxOptions->setTitle(QApplication::translate("DialogSnapshot", "Options", nullptr));
        checkBoxUseWhiteBackground->setText(QApplication::translate("DialogSnapshot", "Use white background", nullptr));
        checkBoxSaveWindowState->setText(QApplication::translate("DialogSnapshot", "Save window state", nullptr));
        checkBoxExpandFrustum->setText(QApplication::translate("DialogSnapshot", "Expand frustum if needed", nullptr));
        pushButtonCancel->setText(QApplication::translate("DialogSnapshot", "Cancel", nullptr));
        pushButtonOK->setText(QApplication::translate("DialogSnapshot", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSnapshot: public Ui_DialogSnapshot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SNAPSHOT_H
