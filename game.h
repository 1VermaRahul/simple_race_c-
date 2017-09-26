#ifndef GAME_H
#define GAME_H
#include<QGraphicsView>
#include"racer.h"
#include"racer2.h"
class Game:public QGraphicsView{
public:
    Game();
    Racer *racer;
    Racer2 *racer2;
};

#endif // GAME_H
