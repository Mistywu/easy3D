/********************************************************************************
** Form generated from reading UI file 'dialog_gaussian_noise.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_GAUSSIAN_NOISE_H
#define UI_DIALOG_GAUSSIAN_NOISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogGaussianNoise
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelGaussianNoiseSigma;
    QLineEdit *lineEditGaussianNoiseSigma;
    QLabel *labelGaussianNoiseRadiusBBox;
    QLineEdit *lineEditGaussianNoiseRadiusBBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *computeBBoxButton;
    QPushButton *applyButton;

    void setupUi(QDialog *DialogGaussianNoise)
    {
        if (DialogGaussianNoise->objectName().isEmpty())
            DialogGaussianNoise->setObjectName(QString::fromUtf8("DialogGaussianNoise"));
        DialogGaussianNoise->resize(311, 135);
        verticalLayout = new QVBoxLayout(DialogGaussianNoise);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelGaussianNoiseSigma = new QLabel(DialogGaussianNoise);
        labelGaussianNoiseSigma->setObjectName(QString::fromUtf8("labelGaussianNoiseSigma"));

        gridLayout->addWidget(labelGaussianNoiseSigma, 0, 0, 1, 1);

        lineEditGaussianNoiseSigma = new QLineEdit(DialogGaussianNoise);
        lineEditGaussianNoiseSigma->setObjectName(QString::fromUtf8("lineEditGaussianNoiseSigma"));
        lineEditGaussianNoiseSigma->setMaximumSize(QSize(100, 16777215));
        lineEditGaussianNoiseSigma->setAlignment(Qt::AlignCenter);
        lineEditGaussianNoiseSigma->setReadOnly(false);

        gridLayout->addWidget(lineEditGaussianNoiseSigma, 0, 1, 1, 1);

        labelGaussianNoiseRadiusBBox = new QLabel(DialogGaussianNoise);
        labelGaussianNoiseRadiusBBox->setObjectName(QString::fromUtf8("labelGaussianNoiseRadiusBBox"));

        gridLayout->addWidget(labelGaussianNoiseRadiusBBox, 1, 0, 1, 1);

        lineEditGaussianNoiseRadiusBBox = new QLineEdit(DialogGaussianNoise);
        lineEditGaussianNoiseRadiusBBox->setObjectName(QString::fromUtf8("lineEditGaussianNoiseRadiusBBox"));
        lineEditGaussianNoiseRadiusBBox->setMaximumSize(QSize(100, 16777215));
        lineEditGaussianNoiseRadiusBBox->setAlignment(Qt::AlignCenter);
        lineEditGaussianNoiseRadiusBBox->setReadOnly(true);

        gridLayout->addWidget(lineEditGaussianNoiseRadiusBBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(DialogGaussianNoise);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        computeBBoxButton = new QPushButton(DialogGaussianNoise);
        computeBBoxButton->setObjectName(QString::fromUtf8("computeBBoxButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(computeBBoxButton->sizePolicy().hasHeightForWidth());
        computeBBoxButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(computeBBoxButton);

        applyButton = new QPushButton(DialogGaussianNoise);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        sizePolicy.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy);
        applyButton->setMinimumSize(QSize(60, 25));
        applyButton->setMaximumSize(QSize(60, 25));

        horizontalLayout->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        labelGaussianNoiseSigma->setBuddy(lineEditGaussianNoiseSigma);
        labelGaussianNoiseRadiusBBox->setBuddy(lineEditGaussianNoiseSigma);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEditGaussianNoiseSigma, lineEditGaussianNoiseRadiusBBox);
        QWidget::setTabOrder(lineEditGaussianNoiseRadiusBBox, computeBBoxButton);
        QWidget::setTabOrder(computeBBoxButton, applyButton);

        retranslateUi(DialogGaussianNoise);

        computeBBoxButton->setDefault(false);
        applyButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogGaussianNoise);
    } // setupUi

    void retranslateUi(QDialog *DialogGaussianNoise)
    {
        DialogGaussianNoise->setWindowTitle(QApplication::translate("DialogGaussianNoise", "Gaussian Noise", nullptr));
        labelGaussianNoiseSigma->setText(QApplication::translate("DialogGaussianNoise", "Sigma (standard deviation)", nullptr));
        labelGaussianNoiseRadiusBBox->setText(QApplication::translate("DialogGaussianNoise", "1% * Bounding Sphere Radius", nullptr));
        computeBBoxButton->setText(QApplication::translate("DialogGaussianNoise", "Query", nullptr));
        applyButton->setText(QApplication::translate("DialogGaussianNoise", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogGaussianNoise: public Ui_DialogGaussianNoise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_GAUSSIAN_NOISE_H
