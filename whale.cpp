#include "whale.h"
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "game.h"
#include <QMouseEvent>
#include <QDebug>
extern Game * game;

Whale::Whale()
{

}

QList<QGraphicsRectItem *> Whale::getWhale()
{
    return whale;
}


//void Whale::drawWhale(){
//    // This function adds all the slices of the whale to the scene
//    qDebug() << "inside drawWhale()";


//    // number of slices
//    size_t numOfRects = 3;
//    qDebug() << "init noOf Rects";
//    // interator to create them
//    for (size_t i = 1; i < numOfRects+1; i++ ) {
//        qDebug() << "inside Loop";
//        // create the rect
//        QGraphicsRectItem * slice = new QGraphicsRectItem();
//        qDebug() << "created slice";
//        // set the size of the rect and the position
//        slice->setRect(20*i,20*i,100,100);
//        qDebug() << "set my rect";
////        // set the position
////        slice->setPos(100*i,100*i);

//        // append to list of whale slices
//        whale.append(slice);
//        qDebug() << "appended";
//        // add to scene
//        game->scene->addItem(slice);
//        qDebug() << "created";
//    }

//    // set the head of the whale to be focusable so that we can move it
//    head = whale.first();
//    head->setFlag(QGraphicsItem::ItemIsFocusable);
//    head->setFocus();
//    qDebug() << head;
//}


void Whale::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}
