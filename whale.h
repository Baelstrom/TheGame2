#ifndef WHALE_H
#define WHALE_H

#include <QKeyEvent>
#include <QDebug>
#include <QMouseEvent>
#include <QGraphicsRectItem>


class Whale
{
public:
    Whale();
    // getters / setters
    QList<QGraphicsRectItem*>  getWhale();

    // public methods
//    void drawWhale();
    void keyPressEvent(QKeyEvent * event);
    void mouseMoveEvent(QMouseEvent * event);

private:
    QList<QGraphicsRectItem*> whale;
    QGraphicsRectItem * head;
};

#endif // WHALE_H
