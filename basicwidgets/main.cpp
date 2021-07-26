#/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 07/07/2021                                               *                                                                  *
#*   Author : Er.Akash Erande                                              *
#***************************************************************************/
#include "mainwindow.h"
#include <QApplication>
//#include "mythread.h"
int main(int argc, char *argv[])
{
//    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    QApplication a(argc, argv);

//    MyThread thread1("Akash"), thread2("Erande");
//    thread1.start();
//    thread2.start();
    asses w;
    w.resize(1280, 1024);
    w.show();

    return a.exec();
}
