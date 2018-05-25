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
    QPushButton *save;
    QPushButton *del;
    QLineEdit *name_orc_2;
    QLabel *label_3;
    QLabel *label_4;
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
        Widget->resize(736, 431);
        Widget->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 127);"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 721, 411));
        tabWidget->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 50, 191, 311));
        tableView->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);"));
        tableView->setWordWrap(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 161, 31));
        load = new QPushButton(tab);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(410, 50, 131, 31));
        load->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
""));
        add = new QPushButton(tab);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(410, 210, 161, 41));
        add->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 140, 151, 31));
        name_orc = new QLineEdit(tab);
        name_orc->setObjectName(QStringLiteral("name_orc"));
        name_orc->setGeometry(QRect(470, 160, 131, 31));
        name_orc->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        save = new QPushButton(tab);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(410, 90, 131, 31));
        save->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        del = new QPushButton(tab);
        del->setObjectName(QStringLiteral("del"));
        del->setGeometry(QRect(410, 320, 161, 41));
        del->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        name_orc_2 = new QLineEdit(tab);
        name_orc_2->setObjectName(QStringLiteral("name_orc_2"));
        name_orc_2->setGeometry(QRect(470, 280, 131, 31));
        name_orc_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 280, 141, 31));
        label_3->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
""));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 170, 121, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        quest1 = new QPushButton(tab_2);
        quest1->setObjectName(QStringLiteral("quest1"));
        quest1->setGeometry(QRect(290, 90, 131, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(110, 20, 381, 61));
        label_9->setAlignment(Qt::AlignCenter);
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(170, 130, 391, 241));
        tableView_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        N = new QLineEdit(tab_2);
        N->setObjectName(QStringLiteral("N"));
        N->setGeometry(QRect(420, 60, 81, 20));
        N->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        quest2 = new QPushButton(tab_3);
        quest2->setObjectName(QStringLiteral("quest2"));
        quest2->setGeometry(QRect(290, 80, 131, 31));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 40, 651, 21));
        pitch_2 = new QComboBox(tab_3);
        pitch_2->setObjectName(QStringLiteral("pitch_2"));
        pitch_2->setGeometry(QRect(420, 40, 111, 22));
        pitch_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(180, 120, 351, 231));
        tableView_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        quest3 = new QPushButton(tab_4);
        quest3->setObjectName(QStringLiteral("quest3"));
        quest3->setGeometry(QRect(280, 80, 131, 31));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 40, 591, 21));
        regist_2 = new QComboBox(tab_4);
        regist_2->setObjectName(QStringLiteral("regist_2"));
        regist_2->setGeometry(QRect(490, 40, 71, 22));
        regist_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(160, 120, 361, 231));
        tableView_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        quest4 = new QPushButton(tab_5);
        quest4->setObjectName(QStringLiteral("quest4"));
        quest4->setGeometry(QRect(290, 80, 131, 31));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 40, 521, 16));
        tableView_5 = new QTableView(tab_5);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(170, 120, 351, 231));
        tableView_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        material_2 = new QComboBox(tab_5);
        material_2->setObjectName(QStringLiteral("material_2"));
        material_2->setGeometry(QRect(560, 40, 71, 22));
        material_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_5, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\320\236\321\200\320\272\320\265\321\201\321\202\321\200\321\213", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\320\222\320\260\321\210\320\270 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213</span></p></body></html>", Q_NULLPTR));
        load->setText(QApplication::translate("Widget", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", Q_NULLPTR));
        add->setText(QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\200\320\272\320\265\321\201\321\202\321\200 ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\320\260 </span></p></body></html>", Q_NULLPTR));
        save->setText(QApplication::translate("Widget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        del->setToolTip(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:8pt;\">\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\320\265\321\201\321\214 \320\276\321\200\320\272\320\265\321\201\321\202\321\200</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        del->setText(QApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\276\321\200\320\272\320\265\321\201\321\202\321\200 ", Q_NULLPTR));
        name_orc_2->setText(QString());
        label_3->setText(QApplication::translate("Widget", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\320\260 ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "(\320\262\320\262\320\276\320\264\320\270\321\202\321\214 \321\201 \320\275\320\270\320\266\320\275\320\270\320\274 \n"
"\320\277\320\276\320\264\321\207\321\221\321\200\320\272\320\270\320\262\320\260\320\275\320\270\320\265\320\274)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\321\200\320\272\320\265\321\201\321\202\321\200", Q_NULLPTR));
        quest1->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270", Q_NULLPTR));
        label_9->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\264\320\273\320\270\320\275\320\260 \321\201\321\202\321\200\321\203\320\275\321\213 \n"
"\n"
" \321\203 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\260 \320\261\320\276\320\273\321\214\321\210\320\265 ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\320\227\320\260\320\277\321\200\320\276\321\201 1", Q_NULLPTR));
        quest2->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270", Q_NULLPTR));
        label_10->setText(QApplication::translate("Widget", "\320\235\320\260\320\271\321\202\320\270 \320\262\321\201\320\265 \320\276\321\200\320\272\320\265\321\201\321\202\321\200\321\213, \320\262 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \321\203 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\321\205 \320\270\320\275\321\201\321\202\321\200\321\203\320\274\320\265\320\275\321\202\320\276\320\262                                \320\262\321\213\321\201\320\276\321\202\320\260 \320\267\320\262\321\203\321\207\320\260\320\275\320\270\321\217", Q_NULLPTR));
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
