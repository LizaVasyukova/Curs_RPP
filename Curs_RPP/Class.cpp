#include "Class.h"
#include <QAbstractTableModel>
#include <QFile>
#include <QTextStream>
#include <QVariant>
#include <QFileDialog>


QVector<String_Inst> Factory_Inst::Create_S(QVector<String_Inst> &array_s, QString name_inst, QString bore)
{
    String_Inst news;
    news.name_inst = name_inst;
    news.bore = bore;
    array_s.push_back(news);
    return array_s;
}

QVector<Percussion_Inst> Factory_Inst::Create_P(QVector<Percussion_Inst> &array_p, QString name_inst, int pitch)
{
    Percussion_Inst news;
    news.name_inst = name_inst;
    if (pitch == 0)
    {
       news.pitch = "опр";
    }
    else
    {
        news.pitch = "неопр";
    }
    array_p.push_back(news);
    return array_p;
}

QVector<Wind_Inst> Factory_Inst::Create_W(QVector<Wind_Inst> &array_w, QString name_inst, int regist, int material)
{
    Wind_Inst news;
    news.name_inst = name_inst;
    if (regist == 0)
    {
        news.regist = "низ";
    }
    if (regist == 1)
    {
        news.regist = "сред";
    }
    if (regist == 2)
    {
        news.regist = "выс";
    }
    if (material == 0)
    {
        news.material = "дер";
    }
    else
    {
        news.material = "мед";
    }
    array_w.push_back(news);
    return array_w;
}

void Factory_Orc::Create(QVector<Orchestra> &array_orc, QString name_orc, QString name_inst, QString bore)
{
    Factory_Inst FI;
    QVector <Orchestra> :: iterator it;
    int F = 0;
    for (it = array_orc.begin(); it < array_orc.end(); it++)
    {
         if (name_orc == (*it).name_orc)
         {
              F = 1;
              FI.Create_S((*it).array_s, name_inst, bore);
         }
     }
     if (F==0)
     {
         Orchestra news;
         news.name_orc = name_orc;
         String_Inst t;
         t.name_inst = name_inst;
         t.bore = bore;
         news.array_s.push_back(t);
         array_orc.push_back(news);
     }
}

void Factory_Orc::Create(QVector<Orchestra> &array_orc, QString name_orc, QString name_inst, int pitch)
{
    Factory_Inst FI;
    QVector <Orchestra> :: iterator it;
    int F = 0;
    for (it = array_orc.begin(); it < array_orc.end(); it++)
    {
          if (name_orc == (*it).name_orc)
          {
                F = 1;
                FI.Create_P((*it).array_p, name_inst, pitch);
          }
    }
    if (F==0)
    {
          Orchestra news;
          news.name_orc = name_orc;
          Percussion_Inst t;
          t.name_inst = name_inst;
          if (pitch == 0)
          {
                t.pitch = "опр";
          }
          else
          {
                t.pitch = "неопр";

          }
          news.array_p.push_back(t);
          array_orc.push_back(news);
    }
}

void Factory_Orc::Create(QVector<Orchestra> &array_orc, QString name_orc, QString name_inst, int regist, int material)
{
    Factory_Inst FI;
    QVector <Orchestra> :: iterator it;
    int F = 0;
    for (it = array_orc.begin(); it < array_orc.end(); it++)
    {
           if (name_orc == (*it).name_orc)
           {
                  F = 1;
                  FI.Create_W((*it).array_w, name_inst, regist, material);
           }
    }
    if (F==0)
    {
           Orchestra news;
           news.name_orc = name_orc;
           Wind_Inst t;
           t.name_inst = name_inst;
           if (regist == 0)
           {
                t.regist = "низ";
           }
           if (regist == 1)
           {
                t.regist = "сред";
           }
           if (regist == 2)
           {
                t.regist = "выс";
           }
           if (material == 0)
           {
                t.material = "дер";
           }
           else
           {
                t.material = "мед";
           }
           news.array_w.push_back(t);
           array_orc.push_back(news);
   }
}

QVector<Result> Data::find_b(QVector<Orchestra> array_orc, QString N)
{
    this->array_orc = array_orc;
    QVector <Orchestra> :: iterator it;
    QVector <String_Inst> :: iterator it1;
    for (it = array_orc.begin(); it < array_orc.end(); it++)
    {
          for (it1 = (*it).array_s.begin(); it1 < (*it).array_s.end(); it1++)
          {
                if ((*it1).bore > N)
                {
                      Result news;
                      news.name = (*it).name_orc;
                      news.name_inst  = (*it1).name_inst;
                      news.parameter = (*it1).bore;
                      answer.push_back(news);
                 }
          }
    }
    return  answer;
}

QVector<Result> Data::find_p(QVector<Orchestra> array_orc, int N)
{
    this->array_orc = array_orc;
    QVector <Orchestra> :: iterator it;
    QVector <Percussion_Inst> :: iterator it1;
    if (N == 0)
    {
         for (it = array_orc.begin(); it < array_orc.end(); it++)
         {
               for (it1 = (*it).array_p.begin(); it1 < (*it).array_p.end(); it1++)
               {
                    if ((*it1).pitch == "опр")
                    {
                          Result news;
                          news.name = (*it).name_orc;
                          news.name_inst  = (*it1).name_inst;
                          news.parameter = (*it1).pitch;
                          answer.push_back(news);
                     }
                }
         }
         return  answer;
    }
    else
    {
         for (it = array_orc.begin(); it < array_orc.end(); it++)
         {
               for (it1 = (*it).array_p.begin(); it1 < (*it).array_p.end(); it1++)
               {
                     if ((*it1).pitch == "неопр")
                     {
                          Result news;
                          news.name = (*it).name_orc;
                          news.name_inst  = (*it1).name_inst;
                          news.parameter = (*it1).pitch;
                          answer.push_back(news);
                      }
                }
          }
          return  answer;
    }
}

QVector<Result> Data::find_r(QVector<Orchestra> array_orc, int N)
{
    this->array_orc = array_orc;
    QVector <Orchestra> :: iterator it;
    QVector <Wind_Inst> :: iterator it1;
    if (N == 0)
    {
        for (it = array_orc.begin(); it < array_orc.end(); it++)
        {
             for (it1 = (*it).array_w.begin(); it1 < (*it).array_w.end(); it1++)
             {
                  if ((*it1).regist == "низ")
                  {
                        Result news;
                        news.name = (*it).name_orc;
                        news.name_inst  = (*it1).name_inst;
                        news.parameter = (*it1).regist;
                        answer.push_back(news);
                   }
              }
        }
        return  answer;
    }
    if (N == 1)
    {
        for (it = array_orc.begin(); it < array_orc.end(); it++)
        {
              for (it1 = (*it).array_w.begin(); it1 < (*it).array_w.end(); it1++)
              {
                   if ((*it1).regist == "сред")
                   {
                        Result news;
                        news.name = (*it).name_orc;
                        news.name_inst  = (*it1).name_inst;
                        news.parameter = (*it1).regist;
                        answer.push_back(news);
                    }
               }
         }
         return  answer;
    }
    if (N == 2)
    {
        for (it = array_orc.begin(); it < array_orc.end(); it++)
        {
             for (it1 = (*it).array_w.begin(); it1 < (*it).array_w.end(); it1++)
             {
                  if ((*it1).regist == "выс")
                  {
                        Result news;
                        news.name = (*it).name_orc;
                        news.name_inst  = (*it1).name_inst;
                        news.parameter = (*it1).regist;
                        answer.push_back(news);
                   }
              }
         }
         return  answer;
    }
}

QVector<Result> Data::find_m(QVector<Orchestra> array_orc, int N)
{
    this->array_orc = array_orc;
    QVector <Orchestra> :: iterator it;
    QVector <Wind_Inst> :: iterator it1;
    if (N == 0)
    {
         for (it = array_orc.begin(); it < array_orc.end(); it++)
         {
               for (it1 = (*it).array_w.begin(); it1 < (*it).array_w.end(); it1++)
               {
                    if ((*it1).material == "дер")
                    {
                         Result news;
                         news.name = (*it).name_orc;
                         news.name_inst  = (*it1).name_inst;
                         news.parameter = (*it1).material;
                         answer.push_back(news);
                    }
                }
         }
         return  answer;
    }
    else
    {
        for (it = array_orc.begin(); it < array_orc.end(); it++)
        {
             for (it1 = (*it).array_w.begin(); it1 < (*it).array_w.end(); it1++)
             {
                  if ((*it1).material == "мед")
                  {
                       Result news;
                       news.name = (*it).name_orc;
                       news.name_inst  = (*it1).name_inst;
                       news.parameter = (*it1).material;
                       answer.push_back(news);
                  }
              }
        }
        return  answer;
    }
}

QVector<Orchestra> Download::loading(QVector<Orchestra> array_orc)
{
    QFile file("C:\\Users\\AcErA\\Desktop\\Curs_RPP\\data.txt");
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
           return array_orc;
       }
   }
}
