#ifndef WIDGET_CH_H
#define WIDGET_CH_H

#include <QWidget>
#include "Class.h"
#include <QAbstractTableModel>
#include <QVariant>

namespace Ui {
class Widget_ch;
}

class myTableModel3 : public QAbstractTableModel
{
    Orchestra orc;

public:
        myTableModel3 (Orchestra old_orc)
        {
            orc = old_orc;
        }
private:
        int rowCount(const QModelIndex &parent) const;
        int columnCount(const QModelIndex &parent) const;
        QVariant data(const QModelIndex &index, int role) const;
        QVariant headerData(int section, Qt::Orientation orientation, int role) const;
};

class Widget_ch : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_ch( Orchestra &param, QWidget *parent = 0);
    ~Widget_ch();
    Orchestra orc;

protected:
    void closeEvent( QCloseEvent *e );

signals:
    void firstWindow(Orchestra orc);

private slots:
    void on_add_clicked(bool checked);

    void on_str_clicked(bool checked);

    void on_perc_clicked(bool checked);

    void on_wind_clicked(bool checked);

    void on_tableView_clicked(const QModelIndex &index);

    void on_del_clicked(bool checked);


private:
    Ui::Widget_ch *ui;
};

#endif // WIDGET_CH_H
