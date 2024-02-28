/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *anser;
    QPushButton *clean;
    QPushButton *del;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *num4;
    QPushButton *num6;
    QPushButton *num5;
    QPushButton *num1;
    QPushButton *num3;
    QPushButton *num2;
    QPushButton *minus;
    QPushButton *plus;
    QPushButton *time;
    QPushButton *divide;
    QPushButton *super_2;
    QPushButton *num0;
    QPushButton *dot;
    QPushButton *cal;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(304, 247);
        anser = new QLabel(Dialog);
        anser->setObjectName("anser");
        anser->setGeometry(QRect(20, 10, 261, 31));
        anser->setFrameShape(QFrame::Panel);
        anser->setFrameShadow(QFrame::Sunken);
        anser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        clean = new QPushButton(Dialog);
        clean->setObjectName("clean");
        clean->setGeometry(QRect(90, 50, 71, 23));
        clean->setCheckable(false);
        clean->setChecked(false);
        clean->setAutoExclusive(false);
        clean->setAutoDefault(false);
        del = new QPushButton(Dialog);
        del->setObjectName("del");
        del->setGeometry(QRect(180, 50, 101, 23));
        del->setAutoDefault(false);
        num7 = new QPushButton(Dialog);
        num7->setObjectName("num7");
        num7->setGeometry(QRect(20, 90, 51, 23));
        num7->setAutoDefault(false);
        num7->setFlat(false);
        num8 = new QPushButton(Dialog);
        num8->setObjectName("num8");
        num8->setGeometry(QRect(90, 90, 51, 23));
        num8->setAutoExclusive(false);
        num8->setAutoDefault(false);
        num9 = new QPushButton(Dialog);
        num9->setObjectName("num9");
        num9->setGeometry(QRect(160, 90, 51, 23));
        num9->setAutoDefault(false);
        num4 = new QPushButton(Dialog);
        num4->setObjectName("num4");
        num4->setGeometry(QRect(20, 130, 51, 23));
        num4->setAutoDefault(false);
        num6 = new QPushButton(Dialog);
        num6->setObjectName("num6");
        num6->setGeometry(QRect(160, 130, 51, 23));
        num6->setAutoDefault(false);
        num5 = new QPushButton(Dialog);
        num5->setObjectName("num5");
        num5->setGeometry(QRect(90, 130, 51, 23));
        num5->setAutoDefault(false);
        num1 = new QPushButton(Dialog);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(20, 170, 51, 23));
        num1->setAutoDefault(false);
        num3 = new QPushButton(Dialog);
        num3->setObjectName("num3");
        num3->setGeometry(QRect(160, 170, 51, 23));
        num3->setAutoDefault(false);
        num2 = new QPushButton(Dialog);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(90, 170, 51, 23));
        num2->setAutoDefault(false);
        minus = new QPushButton(Dialog);
        minus->setObjectName("minus");
        minus->setGeometry(QRect(230, 110, 51, 23));
        minus->setAutoDefault(false);
        plus = new QPushButton(Dialog);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(230, 80, 51, 23));
        plus->setAutoDefault(false);
        time = new QPushButton(Dialog);
        time->setObjectName("time");
        time->setGeometry(QRect(230, 140, 51, 23));
        time->setAutoDefault(false);
        divide = new QPushButton(Dialog);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(230, 170, 51, 23));
        divide->setAutoDefault(false);
        super_2 = new QPushButton(Dialog);
        super_2->setObjectName("super_2");
        super_2->setGeometry(QRect(20, 50, 51, 23));
        super_2->setAutoDefault(false);
        num0 = new QPushButton(Dialog);
        num0->setObjectName("num0");
        num0->setGeometry(QRect(20, 210, 51, 23));
        num0->setAutoDefault(false);
        dot = new QPushButton(Dialog);
        dot->setObjectName("dot");
        dot->setGeometry(QRect(90, 210, 51, 23));
        dot->setAutoDefault(false);
        cal = new QPushButton(Dialog);
        cal->setObjectName("cal");
        cal->setGeometry(QRect(160, 210, 121, 23));
        cal->setAutoDefault(false);

        retranslateUi(Dialog);

        num7->setDefault(false);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        anser->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        clean->setText(QCoreApplication::translate("Dialog", "C", nullptr));
        del->setText(QCoreApplication::translate("Dialog", "Del", nullptr));
        num7->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        num8->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        num9->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        num4->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        num6->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        num5->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        num1->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        num3->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        num2->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        minus->setText(QCoreApplication::translate("Dialog", "-", nullptr));
        plus->setText(QCoreApplication::translate("Dialog", "+", nullptr));
        time->setText(QCoreApplication::translate("Dialog", "\303\227", nullptr));
        divide->setText(QCoreApplication::translate("Dialog", "\303\267", nullptr));
        super_2->setText(QCoreApplication::translate("Dialog", "!", nullptr));
        num0->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        dot->setText(QCoreApplication::translate("Dialog", ".", nullptr));
        cal->setText(QCoreApplication::translate("Dialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
