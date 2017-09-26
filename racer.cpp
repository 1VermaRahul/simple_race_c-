#include"racer.h"
#include<QKeyEvent>
#include<bits/stdc++.h>
#include<QTimer>
#include<QString>
#include<QFont>
#include<QGraphicsTextItem>

Racer::Racer()
{

    setPixmap(QPixmap(":/images/car.jpg"));
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(200);
}

void Racer::move()
{
    int random_number=rand()%20;
    if(x()<600)
    setPos(x()+random_number,y());
    if(x()==600){
        setPlainText(QString("Yellow car wins!!"));
           setDefaultTextColor(Qt::blue);
           setFont(QFont("times",16));
    }
}
