/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *                                                                         *
 *   Author : Er. Akash Erande                                             *
 *                                                                         *
 *   Created on : 2021 : 7 : 29                                            *
 *****************************************************************************/
#ifndef READMEMORY_H
#define READMEMORY_H

#include <QMainWindow>
#include <QSharedMemory>
#include <QDebug>
#include<QBuffer>
#include<QDataStream>
namespace Ui {
class ReadMemory;
}

class ReadMemory : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReadMemory(QWidget *parent = 0);
    ~ReadMemory();
private slots:

    void on_pushButton_clicked();

private:
    Ui::ReadMemory *ui;
    QSharedMemory *sharememory;
};

#endif // READMEMORY_H
