#/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 07/07/2021                                               *                                                                  *
#*   Author : Er.Akash Erande                                              *
#***************************************************************************/
#include "mythread.h"

MyThread::MyThread(QString s) : name(s)
{

}
//void read(QString filename)
//{
//    QFile file(filename);
//    if(!file.open(QFile::ReadOnly |
//                  QFile::Text))
//    {
//        qDebug() << " Could not open the file for reading";
//        return;
//    }

//    QTextStream in(&file);
//    QString myText = in.readAll();
//    qDebug() << myText;

//    file.close();
//    return myText;
//}
void MyThread::run()
{
    for(int i = 0; i<=100; i++){
//        QString Text =  read(filename)

        qDebug()<<this->name<<" "<<i;
    }
}




