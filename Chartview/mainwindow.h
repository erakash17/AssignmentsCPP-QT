/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 21/07/2021                                               *                                                                  *
#*   Author : Akash Erande                                                 *
#***************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts>
#include<QChartView>
#include <QLineSeries>
#include <QDebug>

namespace Ui {
class MainWindow;
}
using namespace QtCharts;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;




};

#endif // MAINWINDOW_H
