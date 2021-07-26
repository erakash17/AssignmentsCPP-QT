/***************************************************************************
 *   Copyright (C) 2021 by Self                                            *
 *   Created on : 20/07/2021                                               *                                                                  *
 *   Author : Er.Akash Erande                                              *
 ***************************************************************************/
#include "myitem.h"
#include "graphicsitem.h"
MyItem::MyItem()
{
    Pressed = false;
    setFlag(ItemIsMovable);
}
QRectF MyItem::boundingRect() const
{
    return QRectF(0,0,100,100);
}
void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();
    if(Pressed)
    {
       QPen Pen (Qt::red,3);
       QBrush blueBrush(Qt::cyan);
       painter->setBrush(blueBrush);
       painter->setPen(Pen);
       painter->drawRect(rect);
    }
    else
    {
        QPen Pen (Qt::blue,3);
        QBrush greenBrush(Qt::green);
        painter->setPen(Pen);
        painter->setBrush(greenBrush);
        painter->drawRect(rect);
    }
}



void MyItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed =true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void MyItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed =false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
