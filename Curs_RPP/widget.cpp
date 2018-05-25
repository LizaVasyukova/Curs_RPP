#include "widget.h"
#include "ui_widget.h"
#include <QAbstractTableModel>
#include <QVariant>
#include <QPushButton>
#include <QDebug>

using std :: iterator;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
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
    QString fileName = QFileDialog::getOpenFileName(this,tr("Загрузить файл"), "",tr("Файлы (*.txt)"));
    QFile file(fileName);

    QString buff;
    QString baff;
    QString biff;
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream fin (&file);
        while (!fin.atEnd())
        {
            fin >> buff;
            while (buff != "|")
            {
                 Orchestra orc;
                 orc.name_orc = buff;
                 fin >> buff;
                 Factory_Inst FI;
                 if(buff == "*")
                 {
                      fin >> buff;
                      while (buff != "|")
                      {
                           fin >> baff;
                           orc.array_s = FI.Create_S(orc.array_s, buff, baff);
                           fin >> buff;
                       }
                       fin >> buff;
                  }
                  if(buff == "$")
                  {
                       fin >> buff;
                       while (buff != "|")
                       {
                            fin >> baff;
                            if (baff == "опр")
                            {
                                  orc.array_p = FI.Create_P(orc.array_p, buff, 0);
                            }
                            else
                            {
                                  orc.array_p = FI.Create_P(orc.array_p, buff, 1);
                            }
                            fin >> buff;
                        }
                        fin >> buff;
                  }
                  if(buff == "@")
                  {
                         fin >> buff;
                         while (buff != "|")
                         {
                              fin >> baff;
                              fin >> biff;
                              if ((baff == "низ") && (biff == "дер"))
                              {
                                   orc.array_w = FI.Create_W(orc.array_w, buff, 0, 0);
                              }
                              if ((baff == "низ") && (biff == "мед"))
                              {
                                   orc.array_w = FI.Create_W(orc.array_w, buff, 0, 1);
                              }
                              if ((baff == "сред") && (biff == "дер"))
                              {
                                   orc.array_w = FI.Create_W(orc.array_w, buff, 1, 0);
                              }
                              if ((baff == "сред") && (biff == "мед"))
                              {
                                   orc.array_w = FI.Create_W(orc.array_w, buff, 1, 1);
                              }
                              if ((baff == "выс") && (biff == "дер"))
                              {
                                   orc.array_w = FI.Create_W(orc.array_w, buff, 2, 0);
                              }
                              if ((baff == "выс") && (biff == "мед"))
                              {
                                   orc.array_w = FI.Create_W(orc.array_w, buff, 2, 1);
                              }
                              fin >> buff;
                          }
                   }
                   array_orc.push_back(orc);
                   fin >> buff;
           }
           file.close();
       }
   }

    myTableModel *myModel = new myTableModel(array_orc);
    ui->tableView->setModel(myModel);
}

void Widget::on_add_clicked(bool checked)
{
    Orchestra news;
    news.name_orc = ui->name_orc->text();
    array_orc.push_back(news);

    Widget_ch* wadd = new Widget_ch (news, 0);
    wadd->show();
    connect(wadd, SIGNAL(firstWindow(Orchestra)), this, SLOT(get_data(Orchestra)));
    ui->name_orc->clear();
}

void Widget::on_quest1_clicked(bool checked)
{
    Data D;
    QString bore = ui->N->text();
    QVector <Result> Res;
    Res = D.find_b(array_orc, bore);
    myTableModel2 *myModel2 = new myTableModel2(Res);
    ui->tableView_2->setModel(myModel2);
}

void Widget::on_quest2_clicked(bool checked)
{
    Data D;
    int P = (ui->pitch_2->currentIndex());
    QVector <Result> Res;
    Res = D.find_p(array_orc, P);
    myTableModel2 *myModel2 = new myTableModel2(Res);
    ui->tableView_3->setModel(myModel2);
}

void Widget::on_quest3_clicked(bool checked)
{
    Data D;
    int N = (ui->regist_2->currentIndex());
    QVector <Result> Res;
    Res = D.find_r(array_orc, N);
    myTableModel2 *myModel2 = new myTableModel2(Res);
    ui->tableView_4->setModel(myModel2);
}

void Widget::on_quest4_clicked(bool checked)
{
    Data D;
    int N = (ui->material_2->currentIndex());
    QVector <Result> Res;
    Res = D.find_m(array_orc, N);
    myTableModel2 *myModel2 = new myTableModel2(Res);
    ui->tableView_5->setModel(myModel2);
}

void Widget::on_save_clicked(bool checked)
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Сохранить в файл"), "",tr("Файлы (*.txt)"));
    QFile file(fileName);
    QTextStream fout (&file);
    QVector <Orchestra> :: iterator it;
    if (file.open(QIODevice::WriteOnly))
    {
        for (it = array_orc.begin(); it < array_orc.end(); it++)
        {
            fout << (*it).name_orc << " ";
            if (((*it).array_s).size() != 0)
            {
                fout << "* ";
                QVector <String_Inst> :: iterator it1;
                for (it1 = (*it).array_s.begin(); it1 < (*it).array_s.end(); it1++)
                {
                    fout << (*it1).name_inst << " " << (*it1).bore << " ";
                }
                fout << "| ";
            }
            if (((*it).array_p).size() != 0)
            {
                fout << "$ ";
                QVector <Percussion_Inst> :: iterator it2;
                for (it2 = (*it).array_p.begin(); it2 < (*it).array_p.end(); it2++)
                {
                    fout << (*it2).name_inst << " " << (*it2).pitch << " ";
                }
                fout << "| ";
            }
            if (((*it).array_w).size() != 0)
            {
                fout << "@ ";
                QVector <Wind_Inst> :: iterator it3;
                for (it3 = (*it).array_w.begin(); it3 < (*it).array_w.end(); it3++)
                {
                    fout << (*it3).name_inst << " " << (*it3).regist << " " << (*it3).material << " ";
                }
                fout << "| ";
            }
            fout << "|";
        }
    }
    file.close();
}


void Widget::on_tableView_clicked(const QModelIndex &index)
{
    ui->name_orc_2->setText(array_orc[index.row()].name_orc);
}

void Widget::on_tableView_doubleClicked(const QModelIndex &index)
{
    Widget_ch* wadd = new Widget_ch (array_orc[ui->tableView->currentIndex().row()], 0);
    wadd->show();
    connect(wadd, SIGNAL(firstWindow(Orchestra)), this, SLOT(get_data(Orchestra)));
}

void Widget::on_del_clicked(bool checked)
{
    for (int i = 0; i < array_orc.size(); i++)
    {
        if (array_orc[i].name_orc == ui->name_orc_2->text())
        {
            array_orc.remove(i);
        }
    }
    ui->name_orc_2->clear();
    myTableModel *myModel = new myTableModel(array_orc);
    ui->tableView->setModel(myModel);
}

void Widget::get_data(Orchestra orc)
{
    for (int i = 0; i < array_orc.size(); i++)
    {
        if (array_orc[i].name_orc == orc.name_orc)
        {
            array_orc[i] = orc;
        }
    }
    myTableModel *myModel = new myTableModel(array_orc);
    ui->tableView->setModel(myModel);
}
