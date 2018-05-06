#include "widget.h"
#include "ui_widget.h"
#include <QAbstractTableModel>
#include <QVariant>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label_5->hide();
    ui->bore->hide();
    ui->label_6->hide();
    ui->pitch->hide();
    ui->label_7->hide();
    ui->regist->hide();
    ui->label_8->hide();
    ui->material->hide();

}

Widget::~Widget()
{
    delete ui;
}

int myTableModel::rowCount(const QModelIndex &parent) const
{
    return vec.size();
}
int myTableModel::columnCount(const QModelIndex &parent) const
{
    return 1;
}
QVariant myTableModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (index.column() == 0)
        {
            QString answer = vec[index.row()].name_orc;
            return QVariant(answer);
        }
    }
    return QVariant();
}
QVariant myTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();
    if (orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return QVariant(QString::fromUtf8("Оркестр"));
        default:
            return QVariant();
        }
    }
    return QVariant();
}

int myTableModel2::rowCount(const QModelIndex &parent) const
{
    return vec.size();
}
int myTableModel2::columnCount(const QModelIndex &parent) const
{
    return 3;
}
QVariant myTableModel2::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (index.column() == 0)
        {
            QString answer = vec[index.row()].name;
            return QVariant(answer);
        }
        if (index.column() == 1)
        {
            QString answer = vec[index.row()].name_inst;
            return QVariant(answer);
        }
        if (index.column() == 2)
        {
            QString answer = vec[index.row()].parameter;
            return QVariant(answer);
        }
    }
    return QVariant();
}
QVariant myTableModel2::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();
    if (orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return QVariant(QString::fromUtf8("Оркестр"));
        case 1:
            return QVariant(QString::fromUtf8("Инструмент"));
        case 2:
            return QVariant(QString::fromUtf8("Значение параметра"));
        default:
            return QVariant();
        }
    }
    return QVariant();
}

void Widget::on_load_clicked(bool checked)
{
    Download dow;
    array_orc = dow.loading(array_orc);
    myTableModel *myModel = new myTableModel(array_orc);
    ui->tableView->setModel(myModel);

    qDebug() << "count = " << array_orc.size();
    QVector <Orchestra> :: iterator it;
    QVector <String_Inst> :: iterator it1;
    QVector <Percussion_Inst> :: iterator it2;
    QVector <Wind_Inst> :: iterator it3;

    for (it = array_orc.begin(); it < array_orc.end(); it++)
    {
        qDebug() << (*it).name_orc;
        for (it1 = (*it).array_s.begin(); it1 < (*it).array_s.end(); it1++)
        {
            qDebug() << (*it1).name_inst;
            qDebug() << (*it1).bore;
        }
        for (it2 = (*it).array_p.begin(); it2 < (*it).array_p.end(); it2++)
        {
            qDebug() << (*it2).name_inst;
            qDebug() << (*it2).pitch;
        }
        for (it3 = (*it).array_w.begin(); it3 < (*it).array_w.end(); it3++)
        {
            qDebug() << (*it3).name_inst;
            qDebug() << (*it3).regist;
            qDebug() << (*it3).material;
        }
    }
}

void Widget::on_add_clicked(bool checked)
{
    Factory_Orc FO;
        qDebug() << "we are here";

        if (ui->str->isChecked())
        {
            FO.Create(array_orc, ui->name_orc->text(), ui->name_inst->text(), ui->bore->text());
            ui->bore->clear();
        }
        if (ui->perc->isChecked())
        {
            FO.Create(array_orc, ui->name_orc->text(), ui->name_inst->text(), ui->pitch->currentIndex());
        }
        if (ui->wind->isChecked())
        {
            FO.Create(array_orc, ui->name_orc->text(), ui->name_inst->text(), ui->regist->currentIndex(), ui->material->currentIndex());
        }
        myTableModel *myModel = new myTableModel(array_orc);
        ui->tableView->setModel(myModel);


        qDebug() << "count = " << array_orc.size();
        QVector <Orchestra> :: iterator it;
        QVector <String_Inst> :: iterator it1;
        QVector <Percussion_Inst> :: iterator it2;
        QVector <Wind_Inst> :: iterator it3;

        for (it = array_orc.begin(); it < array_orc.end(); it++)
        {
            qDebug() << (*it).name_orc;
            for (it1 = (*it).array_s.begin(); it1 < (*it).array_s.end(); it1++)
            {
                qDebug() << (*it1).name_inst;
                qDebug() << (*it1).bore;
            }
            for (it2 = (*it).array_p.begin(); it2 < (*it).array_p.end(); it2++)
            {
                qDebug() << (*it2).name_inst;
                qDebug() << (*it2).pitch;
            }
            for (it3 = (*it).array_w.begin(); it3 < (*it).array_w.end(); it3++)
            {
                qDebug() << (*it3).name_inst;
                qDebug() << (*it3).regist;
                qDebug() << (*it3).material;
            }
        }

}

void Widget::on_str_clicked(bool checked)
{
    ui->name_inst->clear();
    ui->label_5->show();
    ui->bore->show();
    ui->label_6->hide();
    ui->pitch->hide();
    ui->label_7->hide();
    ui->regist->hide();
    ui->label_8->hide();
    ui->material->hide();
}

void Widget::on_perc_clicked(bool checked)
{
    ui->name_inst->clear();
    ui->label_5->hide();
    ui->bore->hide();
    ui->label_6->show();
    ui->pitch->show();
    ui->label_7->hide();
    ui->regist->hide();
    ui->label_8->hide();
    ui->material->hide();
}

void Widget::on_wind_clicked(bool checked)
{
    ui->name_inst->clear();
    ui->label_5->hide();
    ui->bore->hide();
    ui->label_6->hide();
    ui->pitch->hide();
    ui->label_7->show();
    ui->regist->show();
    ui->label_8->show();
    ui->material->show();
}

void Widget::on_quest1_clicked(bool checked)
{
    Data D;
    QString bore = ui->N->text();
    QVector <Result> Res;
    Res = D.find_b(array_orc, bore);
    myTableModel2 *myModel = new myTableModel2(Res);
    ui->tableView_2->setModel(myModel);

}

void Widget::on_quest2_clicked(bool checked)
{
    Data D;
    int P = (ui->pitch_2->currentIndex());
    QVector <Result> Res;
    Res = D.find_p(array_orc, P);
    myTableModel2 *myModel = new myTableModel2(Res);
    ui->tableView_3->setModel(myModel);
}

void Widget::on_quest3_clicked(bool checked)
{
    Data D;
    int N = (ui->regist_2->currentIndex());
    QVector <Result> Res;
    Res = D.find_r(array_orc, N);
    myTableModel2 *myModel = new myTableModel2(Res);
    ui->tableView_4->setModel(myModel);
}

void Widget::on_quest4_clicked(bool checked)
{
    Data D;
    int N = (ui->material_2->currentIndex());
    QVector <Result> Res;
    Res = D.find_m(array_orc, N);
    myTableModel2 *myModel = new myTableModel2(Res);
    ui->tableView_5->setModel(myModel);
}
