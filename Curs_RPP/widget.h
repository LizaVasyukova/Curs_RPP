#ifndef WIDGET_H
#define WIDGET_H

#include "Class.h"
#include <QWidget>
#include <QAbstractTableModel>
#include <QVariant>
#include <widget_ch.h>
#include <QDebug>

namespace Ui {
class Widget;
}

class myTableModel : public QAbstractTableModel
{
    QVector <Orchestra> vec;

public:
        myTableModel (QVector <Orchestra> array_orc)
        {
            vec = array_orc;
        }
private:
        int rowCount(const QModelIndex &parent) const;
        int columnCount(const QModelIndex &parent) const;
        QVariant data(const QModelIndex &index, int role) const;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const;
};

class myTableModel2 : public QAbstractTableModel
{
    QVector <Result> vec;

public:
        myTableModel2 (QVector <Result> array_orc)
        {
            vec = array_orc;
        }
private:
        int rowCount(const QModelIndex &parent) const;
        int columnCount(const QModelIndex &parent) const;
        QVariant data(const QModelIndex &index, int role) const;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const;
};

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


    QVector <Orchestra> array_orc;
    myTableModel *myModel = new myTableModel(array_orc);
    QVector <Orchestra> loading(QVector <Orchestra> array_orc);

private slots:
    void on_load_clicked(bool checked);

    void on_add_clicked(bool checked);

    void on_quest1_clicked(bool checked);

    void on_quest2_clicked(bool checked);

    void on_quest3_clicked(bool checked);

    void on_quest4_clicked(bool checked);

    void on_save_clicked(bool checked);

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_del_clicked(bool checked);

    void get_data(Orchestra orc);

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H
