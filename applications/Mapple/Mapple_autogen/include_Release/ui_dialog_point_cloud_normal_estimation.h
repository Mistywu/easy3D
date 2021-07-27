/********************************************************************************
** Form generated from reading UI file 'dialog_point_cloud_normal_estimation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_POINT_CLOUD_NORMAL_ESTIMATION_H
#define UI_DIALOG_POINT_CLOUD_NORMAL_ESTIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPointCloudNormalEstimation
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNeighborSize;
    QLineEdit *lineEditNeighborSize;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogPointCloudNormalEstimation)
    {
        if (DialogPointCloudNormalEstimation->objectName().isEmpty())
            DialogPointCloudNormalEstimation->setObjectName(QString::fromUtf8("DialogPointCloudNormalEstimation"));
        DialogPointCloudNormalEstimation->resize(218, 87);
        verticalLayout = new QVBoxLayout(DialogPointCloudNormalEstimation);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelNeighborSize = new QLabel(DialogPointCloudNormalEstimation);
        labelNeighborSize->setObjectName(QString::fromUtf8("labelNeighborSize"));

        horizontalLayout->addWidget(labelNeighborSize);

        lineEditNeighborSize = new QLineEdit(DialogPointCloudNormalEstimation);
        lineEditNeighborSize->setObjectName(QString::fromUtf8("lineEditNeighborSize"));
        lineEditNeighborSize->setMaximumSize(QSize(100, 16777215));
        lineEditNeighborSize->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEditNeighborSize);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogPointCloudNormalEstimation);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelNeighborSize->setBuddy(lineEditNeighborSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(DialogPointCloudNormalEstimation);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogPointCloudNormalEstimation, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogPointCloudNormalEstimation, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPointCloudNormalEstimation);
    } // setupUi

    void retranslateUi(QDialog *DialogPointCloudNormalEstimation)
    {
        DialogPointCloudNormalEstimation->setWindowTitle(QApplication::translate("DialogPointCloudNormalEstimation", "Normal Estimation", nullptr));
        labelNeighborSize->setText(QApplication::translate("DialogPointCloudNormalEstimation", "Neighbor Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPointCloudNormalEstimation: public Ui_DialogPointCloudNormalEstimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_POINT_CLOUD_NORMAL_ESTIMATION_H
