/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *findNextButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QGroupBox *groupBox;
    QRadioButton *upRadioButton;
    QRadioButton *downRadioButton;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName(QString::fromUtf8("FindDialog"));
        FindDialog->resize(355, 100);
        FindDialog->setMinimumSize(QSize(355, 100));
        FindDialog->setMaximumSize(QSize(355, 100));
        label = new QLabel(FindDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        lineEdit = new QLineEdit(FindDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 10, 191, 21));
        findNextButton = new QPushButton(FindDialog);
        findNextButton->setObjectName(QString::fromUtf8("findNextButton"));
        findNextButton->setGeometry(QRect(270, 10, 71, 23));
        pushButton_2 = new QPushButton(FindDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 40, 71, 23));
        checkBox = new QCheckBox(FindDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 70, 81, 17));
        groupBox = new QGroupBox(FindDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 40, 101, 51));
        upRadioButton = new QRadioButton(groupBox);
        upRadioButton->setObjectName(QString::fromUtf8("upRadioButton"));
        upRadioButton->setGeometry(QRect(10, 20, 82, 17));
        downRadioButton = new QRadioButton(groupBox);
        downRadioButton->setObjectName(QString::fromUtf8("downRadioButton"));
        downRadioButton->setGeometry(QRect(50, 20, 82, 17));

        retranslateUi(FindDialog);

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QCoreApplication::translate("FindDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FindDialog", "Find what:", nullptr));
        findNextButton->setText(QCoreApplication::translate("FindDialog", "Find Next", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FindDialog", "Cancel", nullptr));
        checkBox->setText(QCoreApplication::translate("FindDialog", "Match Case", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindDialog", "Direction", nullptr));
        upRadioButton->setText(QCoreApplication::translate("FindDialog", "&Up", nullptr));
        downRadioButton->setText(QCoreApplication::translate("FindDialog", "Down", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
