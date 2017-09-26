#ifndef RACER2_H
#define RACER2_H

#include<QGraphicsPixmapItem>
#include<QGraphicsRectItem>
#include<QObject>

class Racer2:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Racer2();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
};

#endif // RACER2_H
