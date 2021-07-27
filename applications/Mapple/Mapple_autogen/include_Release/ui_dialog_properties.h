/********************************************************************************
** Form generated from reading UI file 'dialog_properties.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PROPERTIES_H
#define UI_DIALOG_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogProperties
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelCommand;
    QComboBox *comboBoxCommand;
    QFrame *line_2;
    QLabel *labelModel;
    QComboBox *comboBoxModels;
    QLabel *labelPropertyLocation;
    QComboBox *comboBoxPropertyLocation;
    QLabel *labelPropertyName;
    QComboBox *comboBoxPropertyName;
    QLabel *labelNewPropertyName;
    QLineEdit *lineEditNewPropertyName;
    QLabel *labelDataType;
    QComboBox *comboBoxSourceType;
    QLabel *labelPropertyTo;
    QComboBox *comboBoxTargetType;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *applyButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogProperties)
    {
        if (DialogProperties->objectName().isEmpty())
            DialogProperties->setObjectName(QString::fromUtf8("DialogProperties"));
        DialogProperties->resize(359, 303);
        DialogProperties->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(DialogProperties);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelCommand = new QLabel(DialogProperties);
        labelCommand->setObjectName(QString::fromUtf8("labelCommand"));

        gridLayout->addWidget(labelCommand, 0, 0, 1, 1);

        comboBoxCommand = new QComboBox(DialogProperties);
        comboBoxCommand->setObjectName(QString::fromUtf8("comboBoxCommand"));
        comboBoxCommand->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(comboBoxCommand, 0, 1, 1, 3);

        line_2 = new QFrame(DialogProperties);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 4);

        labelModel = new QLabel(DialogProperties);
        labelModel->setObjectName(QString::fromUtf8("labelModel"));

        gridLayout->addWidget(labelModel, 2, 0, 1, 1);

        comboBoxModels = new QComboBox(DialogProperties);
        comboBoxModels->setObjectName(QString::fromUtf8("comboBoxModels"));
        comboBoxModels->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(comboBoxModels, 2, 1, 1, 3);

        labelPropertyLocation = new QLabel(DialogProperties);
        labelPropertyLocation->setObjectName(QString::fromUtf8("labelPropertyLocation"));

        gridLayout->addWidget(labelPropertyLocation, 3, 0, 1, 1);

        comboBoxPropertyLocation = new QComboBox(DialogProperties);
        comboBoxPropertyLocation->setObjectName(QString::fromUtf8("comboBoxPropertyLocation"));
        comboBoxPropertyLocation->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(comboBoxPropertyLocation, 3, 1, 1, 3);

        labelPropertyName = new QLabel(DialogProperties);
        labelPropertyName->setObjectName(QString::fromUtf8("labelPropertyName"));

        gridLayout->addWidget(labelPropertyName, 4, 0, 1, 1);

        comboBoxPropertyName = new QComboBox(DialogProperties);
        comboBoxPropertyName->setObjectName(QString::fromUtf8("comboBoxPropertyName"));
        comboBoxPropertyName->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(comboBoxPropertyName, 4, 1, 1, 3);

        labelNewPropertyName = new QLabel(DialogProperties);
        labelNewPropertyName->setObjectName(QString::fromUtf8("labelNewPropertyName"));

        gridLayout->addWidget(labelNewPropertyName, 5, 0, 1, 1);

        lineEditNewPropertyName = new QLineEdit(DialogProperties);
        lineEditNewPropertyName->setObjectName(QString::fromUtf8("lineEditNewPropertyName"));
        lineEditNewPropertyName->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(lineEditNewPropertyName, 5, 1, 1, 3);

        labelDataType = new QLabel(DialogProperties);
        labelDataType->setObjectName(QString::fromUtf8("labelDataType"));

        gridLayout->addWidget(labelDataType, 6, 0, 1, 1);

        comboBoxSourceType = new QComboBox(DialogProperties);
        comboBoxSourceType->setObjectName(QString::fromUtf8("comboBoxSourceType"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxSourceType->sizePolicy().hasHeightForWidth());
        comboBoxSourceType->setSizePolicy(sizePolicy);
        comboBoxSourceType->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboBoxSourceType, 6, 1, 1, 1);

        labelPropertyTo = new QLabel(DialogProperties);
        labelPropertyTo->setObjectName(QString::fromUtf8("labelPropertyTo"));

        gridLayout->addWidget(labelPropertyTo, 6, 2, 1, 1);

        comboBoxTargetType = new QComboBox(DialogProperties);
        comboBoxTargetType->setObjectName(QString::fromUtf8("comboBoxTargetType"));
        sizePolicy.setHeightForWidth(comboBoxTargetType->sizePolicy().hasHeightForWidth());
        comboBoxTargetType->setSizePolicy(sizePolicy);
        comboBoxTargetType->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboBoxTargetType, 6, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(DialogProperties);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        updateButton = new QPushButton(DialogProperties);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy1);
        updateButton->setMinimumSize(QSize(60, 25));

        horizontalLayout->addWidget(updateButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        applyButton = new QPushButton(DialogProperties);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        sizePolicy1.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy1);
        applyButton->setMinimumSize(QSize(60, 25));

        horizontalLayout->addWidget(applyButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(comboBoxCommand, comboBoxModels);
        QWidget::setTabOrder(comboBoxModels, comboBoxPropertyLocation);
        QWidget::setTabOrder(comboBoxPropertyLocation, comboBoxPropertyName);
        QWidget::setTabOrder(comboBoxPropertyName, lineEditNewPropertyName);
        QWidget::setTabOrder(lineEditNewPropertyName, comboBoxSourceType);
        QWidget::setTabOrder(comboBoxSourceType, comboBoxTargetType);
        QWidget::setTabOrder(comboBoxTargetType, updateButton);
        QWidget::setTabOrder(updateButton, applyButton);

        retranslateUi(DialogProperties);

        updateButton->setDefault(false);
        applyButton->setDefault(true);


        QMetaObject::connectSlotsByName(DialogProperties);
    } // setupUi

    void retranslateUi(QDialog *DialogProperties)
    {
        DialogProperties->setWindowTitle(QApplication::translate("DialogProperties", "Delete Property", nullptr));
        labelCommand->setText(QApplication::translate("DialogProperties", "Command", nullptr));
        labelModel->setText(QApplication::translate("DialogProperties", "Model", nullptr));
        labelPropertyLocation->setText(QApplication::translate("DialogProperties", "Location", nullptr));
        labelPropertyName->setText(QApplication::translate("DialogProperties", "Property", nullptr));
        labelNewPropertyName->setText(QApplication::translate("DialogProperties", "New name", nullptr));
        labelDataType->setText(QApplication::translate("DialogProperties", "Data type", nullptr));
        labelPropertyTo->setText(QApplication::translate("DialogProperties", "to", nullptr));
        updateButton->setText(QApplication::translate("DialogProperties", "Update", nullptr));
        applyButton->setText(QApplication::translate("DialogProperties", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogProperties: public Ui_DialogProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PROPERTIES_H
