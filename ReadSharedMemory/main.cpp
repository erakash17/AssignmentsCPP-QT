/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *                                                                         *
 *   Author : Er. Akash Erande                                             *
 *                                                                         *
 *   Created on : 2021 : 7 : 29                                            *
 *****************************************************************************/
#include "readmemory.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ReadMemory w;
    w.show();

    return a.exec();
}
