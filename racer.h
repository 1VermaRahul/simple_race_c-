#ifndef RACER_H
#define RACER_H
#include<QGraphicsPixmapItem>
#include<QGraphicsRectItem>
#include<QObject>

class Racer:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Racer();
public slots:
    void move();
};

#endif // RACER_H
