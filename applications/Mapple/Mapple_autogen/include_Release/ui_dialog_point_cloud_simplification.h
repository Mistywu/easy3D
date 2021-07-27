/********************************************************************************
** Form generated from reading UI file 'dialog_point_cloud_simplification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_POINT_CLOUD_SIMPLIFICATION_H
#define UI_DIALOG_POINT_CLOUD_SIMPLIFICATION_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogPointCloudSimplification
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkBoxUniform;
    QRadioButton *radioButtonDistanceThreshold;
    QFrame *line;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButtonExpectedPointNumber;
    QHBoxLayout *layoutButtons;
    QPushButton *queryButton;
    QPushButton *applyButton;
    QLineEdit *lineEditExpectedPointNumber;
    QLabel *label_3;
    QLineEdit *lineEditDistanceThreshold;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *lineEditAverageSpacing;
    QPushButton *buttonComputeAvgSpacing;

    void setupUi(QDialog *DialogPointCloudSimplification)
    {
        if (DialogPointCloudSimplification->objectName().isEmpty())
            DialogPointCloudSimplification->setObjectName(QString::fromUtf8("DialogPointCloudSimplification"));
        DialogPointCloudSimplification->resize(421, 192);
        gridLayout = new QGridLayout(DialogPointCloudSimplification);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBoxUniform = new QCheckBox(DialogPointCloudSimplification);
        checkBoxUniform->setObjectName(QString::fromUtf8("checkBoxUniform"));
        checkBoxUniform->setChecked(true);

        gridLayout->addWidget(checkBoxUniform, 3, 2, 1, 1);

        radioButtonDistanceThreshold = new QRadioButton(DialogPointCloudSimplification);
        radioButtonDistanceThreshold->setObjectName(QString::fromUtf8("radioButtonDistanceThreshold"));

        gridLayout->addWidget(radioButtonDistanceThreshold, 1, 0, 1, 2);

        line = new QFrame(DialogPointCloudSimplification);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 4);

        horizontalSpacer_2 = new QSpacerItem(55, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        radioButtonExpectedPointNumber = new QRadioButton(DialogPointCloudSimplification);
        radioButtonExpectedPointNumber->setObjectName(QString::fromUtf8("radioButtonExpectedPointNumber"));
        radioButtonExpectedPointNumber->setChecked(true);

        gridLayout->addWidget(radioButtonExpectedPointNumber, 0, 0, 1, 2);

        layoutButtons = new QHBoxLayout();
        layoutButtons->setSpacing(6);
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        queryButton = new QPushButton(DialogPointCloudSimplification);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setMinimumSize(QSize(60, 25));
        queryButton->setMaximumSize(QSize(60, 25));

        layoutButtons->addWidget(queryButton);

        applyButton = new QPushButton(DialogPointCloudSimplification);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setMinimumSize(QSize(60, 25));
        applyButton->setMaximumSize(QSize(60, 25));

        layoutButtons->addWidget(applyButton);


        gridLayout->addLayout(layoutButtons, 6, 0, 1, 4);

        lineEditExpectedPointNumber = new QLineEdit(DialogPointCloudSimplification);
        lineEditExpectedPointNumber->setObjectName(QString::fromUtf8("lineEditExpectedPointNumber"));
        lineEditExpectedPointNumber->setMaximumSize(QSize(80, 16777215));
        lineEditExpectedPointNumber->setAlignment(Qt::AlignCenter);
        lineEditExpectedPointNumber->setReadOnly(false);

        gridLayout->addWidget(lineEditExpectedPointNumber, 0, 2, 1, 1);

        label_3 = new QLabel(DialogPointCloudSimplification);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        lineEditDistanceThreshold = new QLineEdit(DialogPointCloudSimplification);
        lineEditDistanceThreshold->setObjectName(QString::fromUtf8("lineEditDistanceThreshold"));
        lineEditDistanceThreshold->setMaximumSize(QSize(80, 16777215));
        lineEditDistanceThreshold->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEditDistanceThreshold, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_2 = new QLabel(DialogPointCloudSimplification);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        lineEditAverageSpacing = new QLineEdit(DialogPointCloudSimplification);
        lineEditAverageSpacing->setObjectName(QString::fromUtf8("lineEditAverageSpacing"));
        lineEditAverageSpacing->setMaximumSize(QSize(80, 16777215));
        lineEditAverageSpacing->setAlignment(Qt::AlignCenter);
        lineEditAverageSpacing->setReadOnly(true);

        gridLayout->addWidget(lineEditAverageSpacing, 2, 2, 1, 1);

        buttonComputeAvgSpacing = new QPushButton(DialogPointCloudSimplification);
        buttonComputeAvgSpacing->setObjectName(QString::fromUtf8("buttonComputeAvgSpacing"));
        buttonComputeAvgSpacing->setMinimumSize(QSize(60, 25));

        gridLayout->addWidget(buttonComputeAvgSpacing, 2, 3, 1, 1);

        QWidget::setTabOrder(radioButtonExpectedPointNumber, lineEditExpectedPointNumber);
        QWidget::setTabOrder(lineEditExpectedPointNumber, radioButtonDistanceThreshold);
        QWidget::setTabOrder(radioButtonDistanceThreshold, lineEditDistanceThreshold);
        QWidget::setTabOrder(lineEditDistanceThreshold, lineEditAverageSpacing);
        QWidget::setTabOrder(lineEditAverageSpacing, buttonComputeAvgSpacing);
        QWidget::setTabOrder(buttonComputeAvgSpacing, checkBoxUniform);
        QWidget::setTabOrder(checkBoxUniform, queryButton);
        QWidget::setTabOrder(queryButton, applyButton);

        retranslateUi(DialogPointCloudSimplification);

        applyButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogPointCloudSimplification);
    } // setupUi

    void retranslateUi(QDialog *DialogPointCloudSimplification)
    {
        DialogPointCloudSimplification->setWindowTitle(QApplication::translate("DialogPointCloudSimplification", "Sampling Resolution", nullptr));
        checkBoxUniform->setText(QString());
        radioButtonDistanceThreshold->setText(QApplication::translate("DialogPointCloudSimplification", "Specify distance thresold", nullptr));
        radioButtonExpectedPointNumber->setText(QApplication::translate("DialogPointCloudSimplification", "Specify expected point number", nullptr));
#ifndef QT_NO_TOOLTIP
        queryButton->setToolTip(QApplication::translate("DialogPointCloudSimplification", "Query the points that can be deleted", nullptr));
#endif // QT_NO_TOOLTIP
        queryButton->setText(QApplication::translate("DialogPointCloudSimplification", "Query", nullptr));
#ifndef QT_NO_TOOLTIP
        applyButton->setToolTip(QApplication::translate("DialogPointCloudSimplification", "Delete the queried points", nullptr));
#endif // QT_NO_TOOLTIP
        applyButton->setText(QApplication::translate("DialogPointCloudSimplification", "Apply", nullptr));
        label_3->setText(QApplication::translate("DialogPointCloudSimplification", "Uniform", nullptr));
        label_2->setText(QApplication::translate("DialogPointCloudSimplification", "Average spacing(k=6):", nullptr));
        buttonComputeAvgSpacing->setText(QApplication::translate("DialogPointCloudSimplification", "Compute", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPointCloudSimplification: public Ui_DialogPointCloudSimplification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_POINT_CLOUD_SIMPLIFICATION_H
