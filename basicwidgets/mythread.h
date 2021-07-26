#/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 07/07/2021                                               *                                                                  *
#*   Author : Er.Akash Erande                                              *
#***************************************************************************/
#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
class MyThread : public QThread
{
public:
    explicit MyThread(QString s);
    QString filename = "text.txt";
    void run();
private:
    QString name;
};

#endif // MYTHREAD_H
