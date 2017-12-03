#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "whale.h"
#include <QWidget>
#include <QMouseEvent>

class Game{
public:
    // constructors
    Game();

    // public methods
    void start();

    // public attributes
    QGraphicsScene * scene;
    QGraphicsView * view;
    Whale * whale;
};

#endif // GAME_H
