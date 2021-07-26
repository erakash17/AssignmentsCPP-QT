/***************************************************************************
 *   Copyright (C) 2021 by Self                                            *
 *   Created on : 20/07/2021                                               *                                                                  *
 *   Author : Er.Akash Erande                                              *
 ***************************************************************************/
#ifndef MYITEM_H
#define MYITEM_H
#include <QPainter>
#include <QGraphicsItem>

class MyItem : public QGraphicsItem
{
public:
    MyItem();
    QRectF boundingRect() const;

    // overriding paint()
    void paint(QPainter * painter,
                   const QStyleOptionGraphicsItem * option,
                   QWidget * widget);

    //  state
    bool Pressed;
//private:
//        QGraphicsRectItem *rectangle;
//        QGraphicsTextItem *Text;

protected:

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // MYITEM_H
