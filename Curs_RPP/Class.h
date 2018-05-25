#ifndef CLASS_H
#define CLASS_H

#include <QWidget>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QVector>

using std :: iterator;

class Mus_Instruments
{
    public:
        QString name_inst;
};
class String_Inst : public Mus_Instruments
{
    public:
        QString bore;
};
class Percussion_Inst : public Mus_Instruments
{
    public:
        QString pitch;
};
class Wind_Inst : public Mus_Instruments
{
    public:
        QString regist;
        QString material;
};
class Factory_Inst
{
    public:
        QVector <String_Inst> Create_S(QVector <String_Inst> &array_s, QString name_inst, QString bore);
        QVector <Percussion_Inst> Create_P(QVector <Percussion_Inst> &array_p, QString name_inst, int pitch);
        QVector <Wind_Inst> Create_W(QVector <Wind_Inst> &array_w, QString name_inst, int regist, int material);
};
class Orchestra
{
    public:
        QString name_orc;
        QVector <String_Inst> array_s;
        QVector <Percussion_Inst> array_p;
        QVector <Wind_Inst> array_w;
};
struct Result
{
    QString name;
    QString name_inst;
    QString parameter;
};
class Data
{
    public:
        QVector <Orchestra> array_orc;
        QVector <Result> answer;

        QVector <Result> find_b (QVector <Orchestra> array_orc, QString N);
        QVector <Result> find_p (QVector <Orchestra> array_orc,int N);
        QVector <Result> find_r (QVector <Orchestra> array_orc, int N);
        QVector <Result> find_m (QVector <Orchestra> array_orc, int N);

};


#endif // CLASS_H
