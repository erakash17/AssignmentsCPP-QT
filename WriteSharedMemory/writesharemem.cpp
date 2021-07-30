/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *                                                                         *
 *   Author : Er. Akash Erande                                             *
 *                                                                         *
 *   Created on : 2021 : 7 : 29                                            *
 *****************************************************************************/
#include "writesharemem.h"
#include "ui_writesharemem.h"

WriteShareMem::WriteShareMem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WriteShareMem)
{
    ui->setupUi(this);
    sharememory = new QSharedMemory("Check");
//    sharememory.setKey("Check");

}

WriteShareMem::~WriteShareMem()
{
    delete ui;
    sharememory->detach();
}

void WriteShareMem::on_pushButton_clicked()
{
    if(sharememory->isAttached()){
        sharememory->detach();
    }
//    QString fileName = QFileDialog::getOpenFileName(0, QString(), QString(),
//                                            tr("Images (*.png *.xpm *.jpg)"));
//    QImage image;

    QBuffer buffer;
    QDataStream out(&buffer);
    buffer.open(QBuffer::ReadWrite);
    QString linedata = ui->lineEdit->text();
    buffer.write(linedata.toUtf8());
//    out<<image;
    qDebug()<<"data in"<<buffer.size();
    int size = buffer.size();
    if (!sharememory->create(size)) {
           qDebug()<<"Unable to create shared memory segment.";
           return;
       }
    sharememory->lock(); //synchronization of memory
    char *dest = reinterpret_cast<char *>(sharememory->data());
    const char *source = reinterpret_cast<const char *>(buffer.data().data());
    memcpy(dest, source, qMin(size, sharememory->size())); // Copy the data to be shared in the process
    sharememory->unlock(); // unlock the shared memory area
    ui->lineEdit->clear();
}

void WriteShareMem::on_pushButton_2_clicked()
{

    sharememory->attach();
    QBuffer buffer1;
//    QDataStream in(&buffer1);
//    QImage image;
    sharememory->lock();
    buffer1.setData((char*)sharememory->constData(),sharememory->size());
    buffer1.open(QBuffer::ReadWrite);
    buffer1.readAll();
//    in>>image;
    qDebug()<<buffer1.size();
    sharememory->unlock();
    qDebug() << buffer1.data().data();
    ui->textEdit->append(buffer1.data().data());
    sharememory->detach();
//    ui->label->setPixmap(QPixmap::fromImage(image));

}
