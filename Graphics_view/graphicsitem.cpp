/***************************************************************************
 *   Copyright (C) 2021 by Self                                            *
 *   Created on : 20/07/2021                                               *                                                                  *
 *   Author : Er.Akash Erande                                              *
 ***************************************************************************/
/* IF you want to check the Image please update the path
 * from this path you can check image on device only */
#include "graphicsitem.h"
#include "ui_graphicsitem.h"
#include<QDebug>
GraphicsItem::GraphicsItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GraphicsItem)
{
    ui->setupUi(this);

    ui->graphicsView->show();
    ui->centralWidget->setGeometry(0,0,800,600);

}

GraphicsItem::~GraphicsItem()
{
    delete ui;
}

void GraphicsItem::on_pushButton_clicked()
{
    qDebug()<<"image open";
    QImage image("/home/root/images.jpg");

    item1 = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->addItem(item1);
}

void GraphicsItem::on_pushButton_2_clicked()
{
    ui->graphicsView->scene()->clear();
}

void GraphicsItem::on_pushButton_3_clicked()
{
    item= new MyItem;
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->addItem(item);
//    button = new QPushButton("Press To Switch");

//    scene->addWidget(button);
//    button->setGeometry(90,80,200,100);

    QBrush greenBrush(Qt::green);
    QBrush blueBrush(Qt::cyan);
    QPen outlinePen(Qt::black);
    outlinePen.setWidth(1);

    rectangle = scene->addRect(10,20,250,240,outlinePen,blueBrush);
    ellipse = scene->addEllipse(90,80,200,150,outlinePen,greenBrush);
//    Text = scene->addText("Renu Electronics",QFont("Arial",15));
    simpleText = scene->addSimpleText("Renu Electronics PVT LTD",QFont("Arial",15));
//    Text->setFlag(QGraphicsItem::ItemIsMovable);
    simpleText->setFlag(QGraphicsItem::ItemIsMovable);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable);
    ellipse->setFlag(QGraphicsItem::ItemIsMovable);

}
