#include"racer2.h"
#include<QKeyEvent>
#include<bits/stdc++.h>
#include<QTimer>
Racer2::Racer2()
{
    setPixmap(QPixmap(":/images/car1.jpg"));
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(200);
}

void Racer2::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Right){
//        setPos(x()+10,y());

    }
}

void Racer2::move()
{
    int random_number=rand()%10;
    if(x()<600)
    setPos(x()+random_number,y());
    if(x()==600)
        std::cout<<"racer 2 has won!!";
}
