/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QLabel *label;
    QPushButton *load;
    QPushButton *add;
    QLabel *label_2;
    QLineEdit *name_orc;
    QLabel *label_3;
    QRadioButton *str;
    QRadioButton *perc;
    QRadioButton *wind;
    QLabel *label_4;
    QLineEdit *name_inst;
    QLabel *label_5;
    QLineEdit *bore;
    QLabel *label_6;
    QComboBox *pitch;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *regist;
    QComboBox *material;
    QWidget *tab_2;
    QPushButton *quest1;
    QLabel *label_9;
    QTableView *tableView_2;
    QLineEdit *N;
    QWidget *tab_3;
    QPushButton *quest2;
    QLabel *label_10;
    QComboBox *pitch_2;
    QTableView *tableView_3;
    QWidget *tab_4;
    QPushButton *quest3;
    QLabel *label_11;
    QComboBox *regist_2;
    QTableView *tableView_4;
    QWidget *tab_5;
    QPushButton *quest4;
    QLabel *label_12;
    QTableView *tableView_5;
    QComboBox *material_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(635, 431);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 611, 411));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 201, 311));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 161, 31));
        load = new QPushButton(tab);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(340, 330, 131, 31));
        add = new QPushButton(tab);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(340, 280, 131, 41));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 50, 111, 61));
        name_orc = new QLineEdit(tab);
        name_orc->setObjectName(QStringLiteral("name_orc"));
        name_orc->setGeometry(QRect(390, 70, 131, 31));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 120, 91, 21));
        str = new QRadioButton(tab);
        str->setObjectName(QStringLiteral("str"));
        str->setGeometry(QRect(340, 120, 71, 17));
        perc = new QRadioButton(tab);
        perc->setObjectName(QStringLiteral("perc"));
        perc->setGeometry(QRect(430, 120, 71, 17));
        wind = new QRadioButton(tab);
        wind->setObjectName(QStringLiteral("wind"));
        wind->setGeometry(QRect(520, 120, 71, 17));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 160, 121, 16));
        name_inst = new QLineEdit(tab);
        name_inst->setObjectName(QStringLiteral("name_inst"));
        name_inst->setGeometry(QRect(420, 160, 113, 20));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 210, 101, 16));
        bore = new QLineEdit(tab);
        bore->setObjectName(QStringLiteral("bore"));
        bore->setGeometry(QRect(420, 210, 113, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 210, 91, 16));
        pitch = new QComboBox(tab);
        pitch->setObjectName(QStringLiteral("pitch"));
        pitch->setGeometry(QRect(420, 210, 111, 22));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 200, 47, 13));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 230, 51, 16));
        regist = new QComboBox(tab);
        regist->setObjectName(QStringLiteral("regist"));
        regist->setGeometry(QRect(418, 200, 111, 22));
        material = new QComboBox(tab);
        material->setObjectName(QStringLiteral("material"));
        material->setGeometry(QRect(420, 230, 111, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        quest1 = new QPushButton(tab_2);
        quest1->setObjectName(QStringLiteral("quest1"));
        quest1->setGeometry(QRect(230, 90, 131, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 20, 251, 61));
        label_9->setAlignment(Qt::AlignCenter);
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(100, 130, 391, 241));
        N = new QLineEdit(tab_2);
        N->setObjectName(QStringLiteral("N"));
        N->setGeometry(QRect(330, 50, 81, 20));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        quest2 = new QPushButton(tab_3);
        quest2->setObjectName(QStringLiteral("quest2"));
        quest2->setGeometry(QRect(220, 80, 131, 31));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 40, 561, 21));
        pitch_2 = new QComboBox(tab_3);
        pitch_2->setObjectName(QStringLiteral("pitch_2"));
        pitch_2->setGeometry(QRect(360, 40, 111, 22));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(110, 140, 351, 231));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        quest3 = new QPushButton(tab_4);
        quest3->setObjectName(QStringLiteral("quest3"));
        quest3->setGeometry(QRect(220, 90, 131, 31));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 40, 511, 21));
        regist_2 = new QComboBox(tab_4);
        regist_2->setObjectName(QStringLiteral("regist_2"));
        regist_2->setGeometry(QRect(410, 40, 71, 22));
        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(110, 140, 361, 231));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        quest4 = new QPushButton(tab_5);
        quest4->setObjectName(QStringLiteral("quest4"));
        quest4->setGeometry(QRect(230, 80, 131, 31));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 40, 421, 16));
        tableView_5 = new QTableView(tab_5);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(120, 140, 351, 231));
        material_2 = new QComboBox(tab_5);
        material_2->setObjectName(QStringLiteral("material_2"));
        material_2->setGeometry(QRect(440, 40, 71, 22));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\320\236\321\200\320\272\320\265\321\201\321\202\321\200\321\213", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\320\222\320\260\321\210\320\270 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213</span></p></body></html>", Q_NULLPTR));
        load->setText(QApplication::translate("Widget", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", Q_NULLPTR));
        add->setText(QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\200\320\272\320\265\321\201\321\202\321\200 \n"
" (\320\262 \320\276\321\200\320\272\320\265\321\201\321\202\321\200)", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\320\260 \n"
" (\320\262\320\262\320\276\320\264\320\270\321\202\321\214 \321\201 \320\275\320\270\320\266\320\275\320\270\320\274 \n"
" \320\277\320\276\320\264\321\207\321\221\321\200\320\272\320\270\320\262\320\260\320\275\320\270\320\265\320\274)", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\320\242\320\270\320\277 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        str->setText(QApplication::translate("Widget", "\320\241\321\202\321\200\321\203\320\275\320\275\321\213\320\265", Q_NULLPTR));
        perc->setText(QApplication::translate("Widget", "\320\243\320\264\320\260\321\200\320\275\321\213\320\265", Q_NULLPTR));
        wind->setText(QApplication::translate("Widget", "\320\224\321\203\321\205\320\276\320\262\321\213\320\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\320\224\320\273\320\270\320\275\320\260 \321\201\321\202\321\200\321\203\320\275\321\213, \320\274\320\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\320\222\321\213\321\201\320\276\321\202\320\260 \320\267\320\262\321\203\321\207\320\260\320\275\320\270\321\217", Q_NULLPTR));
        pitch->clear();
        pitch->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\320\260\321\217", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\235\320\265\320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\320\260\321\217", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("Widget", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200", Q_NULLPTR));
        label_8->setText(QApplication::translate("Widget", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273", Q_NULLPTR));
        regist->clear();
        regist->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\320\235\320\270\320\267\320\272\320\270\320\271", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\222\321\213\321\201\320\276\320\272\320\270\320\271", Q_NULLPTR)
        );
        material->clear();
        material->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\320\224\320\265\321\200\320\265\320\262\320\276", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\234\320\265\320\264\321\214", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\200\320\272\320\265\321\201\321\202\321\200", Q_NULLPTR));
        quest1->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\264\320\273\320\270\320\275\320\260 \321\201\321\202\321\200\321\203\320\275\321\213 \n"
"\n"
" \321\203 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260 \320\261\320\276\320\273\321\214\321\210\320\265 ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\320\227\320\260\320\277\321\200\320\276\321\201 1", Q_NULLPTR));
        quest2->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \321\203 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\321\205 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262                                            \320\262\321\213\321\201\320\276\321\202\320\260 \320\267\320\262\321\203\321\207\320\260\320\275\320\270\321\217", Q_NULLPTR));
        pitch_2->clear();
        pitch_2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\320\260\321\217", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\275\320\265\320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275\320\275\320\260\321\217", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "\320\227\320\260\320\277\321\200\320\276\321\201 2", Q_NULLPTR));
        quest3->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270", Q_NULLPTR));
        label_11->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \321\203 \320\264\321\203\321\205\320\276\320\262\321\213\321\205 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\321\205 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262                            \321\200\320\265\320\263\320\270\321\201\321\202\321\200", Q_NULLPTR));
        regist_2->clear();
        regist_2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\320\275\320\270\320\267\320\272\320\270\320\271", Q_NULLPTR)
         << QApplication::translate("Widget", "\321\201\321\200\320\265\320\264\320\275\320\270\320\271", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\262\321\213\321\201\320\276\320\272\320\270\320\271", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Widget", "\320\227\320\260\320\277\321\200\320\276\321\201 3", Q_NULLPTR));
        quest4->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270", Q_NULLPTR));
        label_12->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\264\321\203\321\205\320\276\320\262\321\213\320\265 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\320\265 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\321\213 \321\201\320\264\320\265\320\273\320\260\320\275\321\213 \320\270\320\267  ", Q_NULLPTR));
        material_2->clear();
        material_2->insertItems(0, QStringList()
         << QApplication::translate("Widget", "\320\264\320\265\321\200\320\265\320\262\320\260", Q_NULLPTR)
         << QApplication::translate("Widget", "\320\274\320\265\320\264\320\270", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Widget", "\320\227\320\260\320\277\321\200\320\276\321\201 4", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
