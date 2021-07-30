/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *                                                                         *
 *   Author : Er. Akash Erande                                             *
 *                                                                         *
 *   Created on : 2021 : 7 : 29                                            *
 *****************************************************************************/
#ifndef WRITESHAREMEM_H
#define WRITESHAREMEM_H

#include <QMainWindow>
#include <QSharedMemory>
#include <QDebug>
#include<QBuffer>
#include<QDataStream>
#include<QFileDialog>
namespace Ui {
class WriteShareMem;
}

class WriteShareMem : public QMainWindow
{
    Q_OBJECT

public:
    explicit WriteShareMem(QWidget *parent = 0);
    ~WriteShareMem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::WriteShareMem *ui;
    QSharedMemory *sharememory;
};

#endif // WRITESHAREMEM_H
