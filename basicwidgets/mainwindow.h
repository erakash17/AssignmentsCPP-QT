#/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 07/07/2021                                               *                                                                  *
#*   Author : Er.Akash Erande                                              *
#***************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QThread>
#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QTableWidget>
#include <QScrollBar>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QDebug>
#include <QString>
#include <QHeaderView>
#include <QDebug>


namespace Ui {
class MainWindow;
}
class asses : public QWidget
{
    Q_OBJECT

public:
    asses(QWidget *parent=nullptr);
private slots:
  void onclick();
//  void DB_open();
private:
    QPushButton *pushbutton;
//    QPushButton *pushbutton1;
    QTextEdit *textbox;
    QTableWidget *table;
    QHBoxLayout *hLayout;
    QVBoxLayout *vLayout;
    QGridLayout *mainGrid;
    QStringList *myheader;



};

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
