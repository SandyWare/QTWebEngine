#include "mousememory.h"

mousememory::mousememory(QObject *parent) : QObject(parent)
{

}

void mousememory::test()
{
    qDebug() <<"Hello from C++";
}

void mousememory::save()
{
    qDebug() <<"Save Data";
}

void mousememory::clear()
{
    qDebug() <<"Clear Data";
}

void mousememory::add(double x, double y)
{
    QPoint p(x,y);
    qDebug() <<"Adding " <<p.x() <<" " <<p.y()<<endl;
}

void mousememory::add(QPointF point)
{
    qDebug() <<"Adding QPointF" <<point.x() <<" " << point.y()<<endl;

}

