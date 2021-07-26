/***************************************************************************
 *   Copyright (C) 2021 by ME                                              *
 *   Created on : 23/07/2021                                               *                                                                  *
 *   Author : Akash Erande                                                 *
 ***************************************************************************/
/* Check the path of file*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Timer = new QTimer(this);
    connect(Timer, SIGNAL(timeout()),
              this, SLOT(RWfile()));
    Timer->start(100);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::RWfile()
{
    QString filename = "/home/root/text.txt";
    QFile file(filename);
    if(!file.open(QFile::WriteOnly |
                      QFile::Text))
        {
            ui->textEdit->setPlainText(" Could not open file for writing");
            return;
        }
    QDateTime current = QDateTime::currentDateTime();
    QTextStream out(&file);
    out << current.toString();
    qDebug ()<<current.toString();
    file.close();


    QFile file1(filename);
    if(!file1.open(QFile::ReadOnly |
                      QFile::Text))
        {
            ui->textEdit->setPlainText(" Could not open file for Reading");
            return;
        }
    QTextStream in(&file1);
    QString mytext = in.readAll();
    ui->textEdit->setPlainText(mytext);
    ui->textEdit->setTextColor(Qt::blue);
    ui->textEdit->setStyleSheet(QStringLiteral("font: 28pt \"Nyala\";"));

    file1.close();

}
