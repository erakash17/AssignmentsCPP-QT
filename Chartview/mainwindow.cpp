/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 21/07/2021                                               *                                                                  *
#*   Author : Er.Akash Erande                                                 *
#***************************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLineSeries *blueSeries = new QLineSeries(); //create pointer to sen data to series
    blueSeries->append(0, 5.5);
    blueSeries->append(2, 4);
    blueSeries->append(5, 5);
    blueSeries->setColor(Qt::blue);
    *blueSeries << QPointF(5.5, 5) << QPointF(6, 6.8) << QPointF(7.5, 6) << QPointF(8, 3);
    QLineSeries *series = new QLineSeries();
    series->append(0,6.8);
    series->append(1,4);
    series->append(2, 8);
    series->append(3, 4);
    series->setColor(Qt::red);


    *series << QPointF(5.5, 5) << QPointF(6, 3) << QPointF(7.5, 6) << QPointF(8, 3);
    QChart *chart = new QChart();
    chart->addSeries(blueSeries);
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Demo Chart");
    chart->setToolTip("Line Chart");

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setParent(ui->horizontalFrame);




}

MainWindow::~MainWindow()
{
    delete ui;
}
