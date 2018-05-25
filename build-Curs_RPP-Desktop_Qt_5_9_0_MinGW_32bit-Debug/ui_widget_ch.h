/********************************************************************************
** Form generated from reading UI file 'widget_ch.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CH_H
#define UI_WIDGET_CH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_ch
{
public:
    QLabel *label_3;
    QRadioButton *perc;
    QComboBox *pitch;
    QPushButton *add;
    QRadioButton *wind;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_2;
    QComboBox *regist;
    QLabel *label_8;
    QComboBox *material;
    QLabel *label_4;
    QLineEdit *name_inst;
    QLineEdit *bore;
    QLabel *label_5;
    QTableView *tableView;
    QRadioButton *str;
    QLabel *label_9;
    QPushButton *del;

    void setupUi(QWidget *Widget_ch)
    {
        if (Widget_ch->objectName().isEmpty())
            Widget_ch->setObjectName(QStringLiteral("Widget_ch"));
        Widget_ch->resize(761, 391);
        Widget_ch->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 127);"));
        label_3 = new QLabel(Widget_ch);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 60, 91, 21));
        perc = new QRadioButton(Widget_ch);
        perc->setObjectName(QStringLiteral("perc"));
        perc->setGeometry(QRect(620, 90, 71, 17));
        pitch = new QComboBox(Widget_ch);
        pitch->setObjectName(QStringLiteral("pitch"));
        pitch->setGeometry(QRect(630, 220, 111, 22));
        pitch->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        add = new QPushButton(Widget_ch);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(480, 300, 111, 41));
        wind = new QRadioButton(Widget_ch);
        wind->setObjectName(QStringLiteral("wind"));
        wind->setGeometry(QRect(620, 120, 71, 17));
        label_7 = new QLabel(Widget_ch);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(510, 210, 47, 13));
        label_6 = new QLabel(Widget_ch);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(510, 220, 91, 16));
        label_2 = new QLabel(Widget_ch);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 731, 31));
        label_2->setToolTipDuration(-1);
        label_2->setStyleSheet(QLatin1String("font: 75 12pt \"MS Shell Dlg 2\";\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        label_2->setAlignment(Qt::AlignCenter);
        regist = new QComboBox(Widget_ch);
        regist->setObjectName(QStringLiteral("regist"));
        regist->setGeometry(QRect(630, 210, 111, 22));
        regist->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(Widget_ch);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(510, 240, 51, 16));
        material = new QComboBox(Widget_ch);
        material->setObjectName(QStringLiteral("material"));
        material->setGeometry(QRect(630, 240, 111, 22));
        material->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Widget_ch);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, 170, 121, 16));
        name_inst = new QLineEdit(Widget_ch);
        name_inst->setObjectName(QStringLiteral("name_inst"));
        name_inst->setGeometry(QRect(630, 170, 113, 20));
        name_inst->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        bore = new QLineEdit(Widget_ch);
        bore->setObjectName(QStringLiteral("bore"));
        bore->setGeometry(QRect(630, 220, 113, 20));
        bore->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(Widget_ch);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(510, 220, 101, 16));
        tableView = new QTableView(Widget_ch);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 60, 461, 311));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setDefaultSectionSize(150);
        tableView->horizontalHeader()->setMinimumSectionSize(37);
        tableView->horizontalHeader()->setStretchLastSection(true);
        str = new QRadioButton(Widget_ch);
        str->setObjectName(QStringLiteral("str"));
        str->setGeometry(QRect(620, 60, 71, 17));
        label_9 = new QLabel(Widget_ch);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 60, 91, 21));
        del = new QPushButton(Widget_ch);
        del->setObjectName(QStringLiteral("del"));
        del->setGeometry(QRect(640, 300, 111, 41));

        retranslateUi(Widget_ch);

        QMetaObject::connectSlotsByName(Widget_ch);
    } // setupUi

    void retranslateUi(QWidget *Widget_ch)
    {
        Widget_ch->setWindowTitle(QApplication::translate("Widget_ch", "\320\236\321\200\320\272\320\265\321\201\321\202\321\200", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget_ch", "\320\242\320\270\320\277 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        perc->setText(QApplication::translate("Widget_ch", "\320\243\320\264\320\260\321\200\320\275\321\213\320\265", Q_NULLPTR));
        pitch->clear();
        pitch->insertItems(0, QStringList()
         << QApplication::translate("Widget_ch", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\320\260\321\217", Q_NULLPTR)
         << QApplication::translate("Widget_ch", "\320\235\320\265\320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\320\260\321\217", Q_NULLPTR)
        );
        add->setText(QApplication::translate("Widget_ch", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        wind->setText(QApplication::translate("Widget_ch", "\320\224\321\203\321\205\320\276\320\262\321\213\320\265", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget_ch", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget_ch", "\320\222\321\213\321\201\320\276\321\202\320\260 \320\267\320\262\321\203\321\207\320\260\320\275\320\270\321\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget_ch", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">hy</span></p></body></html>", Q_NULLPTR));
        regist->clear();
        regist->insertItems(0, QStringList()
         << QApplication::translate("Widget_ch", "\320\235\320\270\320\267\320\272\320\270\320\271", Q_NULLPTR)
         << QApplication::translate("Widget_ch", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271", Q_NULLPTR)
         << QApplication::translate("Widget_ch", "\320\222\321\213\321\201\320\276\320\272\320\270\320\271", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("Widget_ch", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273", Q_NULLPTR));
        material->clear();
        material->insertItems(0, QStringList()
         << QApplication::translate("Widget_ch", "\320\224\320\265\321\200\320\265\320\262\320\276", Q_NULLPTR)
         << QApplication::translate("Widget_ch", "\320\234\320\265\320\264\321\214", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Widget_ch", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget_ch", "\320\224\320\273\320\270\320\275\320\260 \321\201\321\202\321\200\321\203\320\275\321\213, \320\274\320\274", Q_NULLPTR));
        str->setText(QApplication::translate("Widget_ch", "\320\241\321\202\321\200\321\203\320\275\320\275\321\213\320\265", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget_ch", "\320\242\320\270\320\277 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260:", Q_NULLPTR));
        del->setText(QApplication::translate("Widget_ch", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget_ch: public Ui_Widget_ch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CH_H
