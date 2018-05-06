#ifndef WIDGET_ADD_H
#define WIDGET_ADD_H

#include <QObject>
#include <QWidget>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);

signals:

public slots:
};

#endif // WIDGET_ADD_H
