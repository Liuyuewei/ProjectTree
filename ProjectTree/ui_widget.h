/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditProName;
    QPushButton *pushButtonDirSlect;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonConfirm;
    QPushButton *pushButtonDelet;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditDirpah;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditState;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(284, 209);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 141, 21));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 261, 131));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 201, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditProName = new QLineEdit(layoutWidget);
        lineEditProName->setObjectName(QStringLiteral("lineEditProName"));

        horizontalLayout->addWidget(lineEditProName);

        pushButtonDirSlect = new QPushButton(groupBox);
        pushButtonDirSlect->setObjectName(QStringLiteral("pushButtonDirSlect"));
        pushButtonDirSlect->setGeometry(QRect(200, 60, 31, 23));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 100, 158, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonConfirm = new QPushButton(layoutWidget1);
        pushButtonConfirm->setObjectName(QStringLiteral("pushButtonConfirm"));

        horizontalLayout_2->addWidget(pushButtonConfirm);

        pushButtonDelet = new QPushButton(layoutWidget1);
        pushButtonDelet->setObjectName(QStringLiteral("pushButtonDelet"));

        horizontalLayout_2->addWidget(pushButtonDelet);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 60, 171, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEditDirpah = new QLineEdit(layoutWidget2);
        lineEditDirpah->setObjectName(QStringLiteral("lineEditDirpah"));

        horizontalLayout_3->addWidget(lineEditDirpah);

        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        pushButtonDirSlect->raise();
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 180, 165, 22));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditState = new QLineEdit(widget);
        lineEditState->setObjectName(QStringLiteral("lineEditState"));

        horizontalLayout_4->addWidget(lineEditState);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\351\241\271\347\233\256\350\267\257\345\276\204\345\210\233\345\273\272", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_3->setText(QApplication::translate("Widget", "\351\241\271\347\233\256\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        pushButtonDirSlect->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        pushButtonConfirm->setText(QApplication::translate("Widget", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButtonDelet->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\351\241\271\347\233\256\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
