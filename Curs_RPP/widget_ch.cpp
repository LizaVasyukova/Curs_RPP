#include "widget_ch.h"
#include "ui_widget_ch.h"
#include <QDebug>

Widget_ch::Widget_ch( Orchestra &param, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_ch)
{
    this->orc = param;
    ui->setupUi(this);
    ui->label_5->hide();
    ui->bore->hide();
    ui->label_6->hide();
    ui->pitch->hide();
    ui->label_7->hide();
    ui->regist->hide();
    ui->label_8->hide();
    ui->material->hide();

    ui->label_2->setText(orc.name_orc);
    myTableModel3 *myModel = new myTableModel3(orc);
    ui->tableView->setModel(myModel);
}

int myTableModel3::rowCount(const QModelIndex &parent) const
{
    return (orc.array_s.size() + orc.array_p.size() + orc.array_w.size());
}
int myTableModel3::columnCount(const QModelIndex &parent) const
{
    return 3;
}
QVariant myTableModel3::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (index.column() == 0)
        {
            if (index.row() < orc.array_s.size())
            {
                QString answer = orc.array_s[index.row()].name_inst;
                return QVariant(answer);
            }
            if ((index.row() >= orc.array_s.size())&&(index.row() < orc.array_s.size()+orc.array_p.size()))
            {
                QString answer = orc.array_p[index.row()-orc.array_s.size()].name_inst;
                return QVariant(answer);
            }
            if ((index.row() >= orc.array_s.size()+orc.array_p.size())&&(index.row() < orc.array_s.size() + orc.array_p.size() + orc.array_w.size()))
            {
                QString answer = orc.array_w[index.row()-orc.array_s.size()-orc.array_p.size()].name_inst;
                return QVariant(answer);
            }

        }
        if (index.column() == 1)
        {
            if (index.row() < orc.array_s.size())
            {
                QString answer = "Длина струны " + orc.array_s[index.row()].bore;
                return QVariant(answer);
            }
            if ((index.row() >= orc.array_s.size())&&(index.row() < orc.array_s.size()+orc.array_p.size()))
            {
                QString answer = "Высота звучания " + orc.array_p[index.row()-orc.array_s.size()].pitch;
                return QVariant(answer);
            }
            if ((index.row() >= orc.array_s.size()+orc.array_p.size())&&(index.row() < orc.array_s.size() + orc.array_p.size() + orc.array_w.size()))
            {
                QString answer = "Регистр " + orc.array_w[index.row()-orc.array_s.size()-orc.array_p.size()].regist;
                return QVariant(answer);
            }
        }
        if (index.column() == 2)
        {
            if ((index.row() >= orc.array_s.size()+orc.array_p.size())&&(index.row() < orc.array_s.size() + orc.array_p.size() + orc.array_w.size()))
            {
                QString answer = "Материал " + orc.array_w[index.row()-orc.array_s.size()-orc.array_p.size()].material;
                return QVariant(answer);
            }
        }
    }
    return QVariant();
}
QVariant myTableModel3::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();
    if (orientation == Qt::Horizontal)
    {
        switch (section)
        {
        case 0:
            return QVariant(QString::fromUtf8("Название инструмента"));
        case 1:
            return QVariant(QString::fromUtf8("Пара-"));
        case 2:
            return QVariant(QString::fromUtf8("метры"));
        default:
            return QVariant();
        }
    }
    return QVariant();
}

void Widget_ch::closeEvent(QCloseEvent *e)
{
    emit firstWindow(orc);
}

void Widget_ch::on_add_clicked(bool checked)
{
    Factory_Inst FI;

        if (ui->str->isChecked())
        {
            FI.Create_S(orc.array_s, ui->name_inst->text(), ui->bore->text());
            ui->name_inst->clear();
            ui->bore->clear();
        }
        if (ui->perc->isChecked())
        {
            FI.Create_P(orc.array_p, ui->name_inst->text(), ui->pitch->currentIndex());
            ui->name_inst->clear();
        }
        if (ui->wind->isChecked())
        {
            FI.Create_W(orc.array_w, ui->name_inst->text(), ui->regist->currentIndex(), ui->material->currentIndex());
            ui->name_inst->clear();
        }
        myTableModel3 *myModel = new myTableModel3(orc);
        ui->tableView->setModel(myModel);
}

void Widget_ch::on_str_clicked(bool checked)
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

void Widget_ch::on_perc_clicked(bool checked)
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

void Widget_ch::on_wind_clicked(bool checked)
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

Widget_ch::~Widget_ch()
{
    delete ui;
}


void Widget_ch::on_tableView_clicked(const QModelIndex &index)
{
    int s = orc.array_s.size();
    int p = orc.array_p.size();
    int w = orc.array_w.size();
    if (index.row() < s)
    {
        ui->str->click();
        ui->name_inst->clear();
        ui->bore->clear();
        ui->name_inst->insert(orc.array_s[index.row()].name_inst);
        ui->str->setDisabled(true);
        ui->perc->setEnabled(true);
        ui->wind->setEnabled(true);
        ui->bore->insert(orc.array_s[index.row()].bore);
    }

    else if ((index.row() >= s)&&(index.row() < s+p))
    {
        ui->perc->click();
        ui->str->setEnabled(true);
        ui->perc->setDisabled(true);
        ui->wind->setEnabled(true);
        ui->name_inst->clear();
        ui->name_inst->insert(orc.array_p[index.row()-s].name_inst);
        if (orc.array_p[index.row()-s].pitch == "опр")
        {
            ui->pitch->setCurrentIndex(0);
        }
        else
        {
            ui->pitch->setCurrentIndex(1);
        }

    }

    else if ((index.row() >= s+p)&&(index.row() < s + p + w))
    {
        ui->wind->click();
        ui->str->setEnabled(true);
        ui->perc->setEnabled(true);
        ui->wind->setDisabled(true);
        ui->name_inst->clear();
        ui->name_inst->insert(orc.array_w[index.row()-s-p].name_inst);
        if (orc.array_w[index.row()-s-p].regist == "низ")
        {
            ui->regist->setCurrentIndex(0);
        }
        if (orc.array_w[index.row()-s-p].regist == "сред")
        {
            ui->regist->setCurrentIndex(1);
        }
        if (orc.array_w[index.row()-s-p].regist == "выс")
        {
            ui->regist->setCurrentIndex(2);
        }

        if (orc.array_w[index.row()-s-p].material == "дер")
        {
            ui->material->setCurrentIndex(0);
        }
        else
        {
            ui->material->setCurrentIndex(1);
        }

    }
}



void Widget_ch::on_del_clicked(bool checked)
{
    for (int i = 0; i < orc.array_s.size(); i++)
    {
        if (orc.array_s[i].name_inst == ui->name_inst->text())
        {
            orc.array_s.remove(i);
        }
    }
    for (int i = 0; i < orc.array_p.size(); i++)
    {
        if (orc.array_p[i].name_inst == ui->name_inst->text())
        {
            orc.array_p.remove(i);
        }
    }
    for (int i = 0; i < orc.array_w.size(); i++)
    {
        if (orc.array_w[i].name_inst == ui->name_inst->text())
        {
            orc.array_w.remove(i);
        }
    }
    ui->name_inst->clear();
    myTableModel3 *myModel = new myTableModel3(orc);
    ui->tableView->setModel(myModel);
}
