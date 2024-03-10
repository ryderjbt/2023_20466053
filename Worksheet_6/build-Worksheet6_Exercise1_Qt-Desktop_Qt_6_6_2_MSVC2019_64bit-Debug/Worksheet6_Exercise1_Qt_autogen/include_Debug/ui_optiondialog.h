/********************************************************************************
** Form generated from reading UI file 'optiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONDIALOG_H
#define UI_OPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_OptionDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *label_5;

    void setupUi(QDialog *OptionDialog)
    {
        if (OptionDialog->objectName().isEmpty())
            OptionDialog->setObjectName("OptionDialog");
        OptionDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(OptionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(40, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(OptionDialog);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 220, 58, 18));
        lineEdit = new QLineEdit(OptionDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 371, 20));
        label = new QLabel(OptionDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 37, 12));
        label_2 = new QLabel(OptionDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 70, 37, 12));
        label_3 = new QLabel(OptionDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 120, 37, 12));
        label_4 = new QLabel(OptionDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 170, 37, 12));
        horizontalSlider = new QSlider(OptionDialog);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 91, 231, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(OptionDialog);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setGeometry(QRect(10, 140, 231, 16));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(OptionDialog);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setGeometry(QRect(10, 190, 231, 20));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(OptionDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 80, 101, 121));

        retranslateUi(OptionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, OptionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, OptionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(OptionDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionDialog)
    {
        OptionDialog->setWindowTitle(QCoreApplication::translate("OptionDialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("OptionDialog", "isVisible ", nullptr));
        label->setText(QCoreApplication::translate("OptionDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("OptionDialog", "R", nullptr));
        label_3->setText(QCoreApplication::translate("OptionDialog", "G", nullptr));
        label_4->setText(QCoreApplication::translate("OptionDialog", "B", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OptionDialog: public Ui_OptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONDIALOG_H
