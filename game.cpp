#include"game.h"
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsItem>
Game::Game()
{
    QGraphicsScene *scene=new QGraphicsScene();
    racer=new Racer();
    scene->addItem(racer);
    racer->setPos(racer->x(),racer->y()+50);
    racer2=new Racer2();
    scene->addItem(racer2);
    racer2->setPos(racer2->x(),racer2->y()+400);
    racer->setFlag(QGraphicsItem::ItemIsFocusable);
    racer->setFocus();
    racer2->setFlag(QGraphicsItem::ItemIsFocusable);
    racer2->setFocus();
    QGraphicsView *view=new QGraphicsView(scene);
    view->show();
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
}
