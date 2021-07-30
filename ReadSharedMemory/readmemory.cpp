/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *                                                                         *
 *   Author : Er. Akash Erande                                             *
 *                                                                         *
 *   Created on : 2021 : 7 : 29                                            *
 *****************************************************************************/
#include "readmemory.h"
#include "ui_readmemory.h"

ReadMemory::ReadMemory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadMemory)
{
    ui->setupUi(this);
    sharememory = new QSharedMemory("Check");
//    sharememory.setKey("Check");
}

ReadMemory::~ReadMemory()
{
    delete ui;
}


void ReadMemory::on_pushButton_clicked()
{
    if(!sharememory->attach())
    {
        qDebug() << "cann't attach sahrememory！";
     }
     QBuffer buffer;
     sharememory->lock();
     buffer.setData((char*)sharememory->constData(),sharememory->size());
     buffer.open(QBuffer::ReadWrite);
     buffer.readAll();
     sharememory->unlock();
     sharememory->detach();
     qDebug() << buffer.data().data();
     ui->textEdit->append(buffer.data().data());

}
