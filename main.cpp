#include <QApplication>
#include<QGraphicsView>
#include"game.h"
#include"racer.h"

Game *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game=new Game();
    game->show();
    return a.exec();
}
