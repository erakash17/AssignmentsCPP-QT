/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 21/07/2021                                               *                                                                  *
#*   Author : Er.Akash Erande                                                 *
#***************************************************************************/
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
