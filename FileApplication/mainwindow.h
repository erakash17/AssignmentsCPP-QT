/***************************************************************************
 *   Copyright (C) 2021 by ME                                              *
 *   Created on : 23/07/2021                                               *                                                                  *
 *   Author : Akash Erande                                                 *
 ***************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QTimer>
#include <QMainWindow>
#include<QString>
#include<QDebug>
#include<QFile>
#include<QTextStream>
#include<QTime>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void RWfile();
private:
    Ui::MainWindow *ui;
    QTimer *Timer;
};

#endif // MAINWINDOW_H
