/***************************************************************************
 *   Copyright (C) 2021 by ME                                              *
 *   Created on : 21/07/2021                                               *                                                                  *
 *   Author : Er.Akash Erande                                              *
 ***************************************************************************/
#include <QCoreApplication>
#include <QNetworkInterface>
#include <QList>
#include <QDebug>


QString getMacAddress()
{
    QString text;
    foreach(QNetworkInterface interface, QNetworkInterface::allInterfaces())
    {
        text += "Interface:"+interface.hardwareAddress()+"\n";
    }
    qDebug()<<text.toLatin1();
    return text;
}

QString getHostIpAddress()
{
    QString strIpAddress;
    QList <QNetworkInterface> nets = QNetworkInterface :: allInterfaces ();
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
//    qDebug()<<list;


    qDebug()<<"Mac Address "<<nets[1].hardwareAddress();
    qDebug()<<"IP Address "<<list[2].toString();
//    qDebug()<<"Mac Address "<<list[3].toString();
//    foreach (QHostAddress address, list)
//    {
//        if(address.protocol()== QAbstractSocket::IPv4Protocol)
//        {
//          strIpAddress = address.toString();
////          qDebug()<<strIpAddress;
//        }
//    }
    return strIpAddress;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    getMacAddress();
    getHostIpAddress();
    return a.exec();
}
