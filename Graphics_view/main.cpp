/***************************************************************************
 *   Copyright (C) 2021 by Self                                            *
 *   Created on : 20/07/2021                                               *                                                                  *
 *   Author : Er.Akash Erande                                              *
 ***************************************************************************/
#include "graphicsitem.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GraphicsItem w;
//    MyItem w;
    w.show();

    return a.exec();
}
