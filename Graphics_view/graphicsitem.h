/***************************************************************************
 *   Copyright (C) 2021 by Self                                            *
 *   Created on : 20/07/2021                                               *                                                                  *
 *   Author : Er.Akash Erande                                              *
 ***************************************************************************/
#ifndef GRAPHICSITEM_H
#define GRAPHICSITEM_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "myitem.h"
#include <QPushButton>
namespace Ui {
class GraphicsItem;
}

class GraphicsItem : public QMainWindow
{
    Q_OBJECT

public:
    explicit GraphicsItem(QWidget *parent = 0);
    ~GraphicsItem();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::GraphicsItem *ui;
    QGraphicsScene *scene;
    QGraphicsItem *item1;
    MyItem *item;
    QPushButton *button;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *Text;
    QGraphicsSimpleTextItem *simpleText;
};

#endif // GRAPHICSITEM_H
