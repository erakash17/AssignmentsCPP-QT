#/***************************************************************************
#*   Copyright (C) 2021 by ME                                              *
#*   Created on : 07/07/2021                                               *                                                                  *
#*   Author : Er.Akash Erande                                              *
#***************************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QThread>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
 ui->setupUi(this);

}
asses::asses(QWidget *parent)
    :QWidget(parent)
{
    hLayout = new QHBoxLayout;
    vLayout = new QVBoxLayout;
    mainGrid = new QGridLayout(this);
    mainGrid->addLayout(hLayout,0,0);
    mainGrid ->addLayout(vLayout,1,0);

    pushbutton = new QPushButton("Click Me",this);
    pushbutton -> setGeometry(450,50,200,30);
    pushbutton->show();
//    pushbutton1 = new QPushButton("DB_Open",this);
//    pushbutton1->setGeometry(500,50,200,30);
//    pushbutton1->show();
    textbox = new QTextEdit(this);
    textbox -> setGeometry(450,90,300,50);
    textbox->setTextColor( QColor( "red" ) );
    textbox->setPlaceholderText("Enter the Data And Then click Me And Say Yes");
    textbox->show();
    table = new QTableWidget(this);


    qDebug()<<"here";

    table->setRowCount(10);
    table->setColumnCount(5);
    table->horizontalScrollBar()->setDisabled(true);
    table->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setSelectionBehavior(QAbstractItemView::SelectRows);
    table -> setGeometry(400,150,450,277);
    myheader = new QStringList();
    *myheader<<"Name"<<"Address"<<"Salary"<<"Emp Type"<<"Joining Date";
    table->setHorizontalHeaderLabels(*myheader);
    table->verticalHeader()->setVisible(false);
    table->show();
    hLayout->addWidget(pushbutton);
//    hLayout->addWidget(pushbutton1);
    vLayout->addWidget(textbox);
    vLayout->addWidget(table);


    connect(pushbutton, &QPushButton::released, this, &asses::onclick);


};
void asses::onclick()
{
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Testing Popup", "Check Vice Versa!!!",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply==QMessageBox::Yes){
//          textbox->setText("Button Pressed");
          QString data = textbox->toPlainText();
          qDebug()<<data;
          table->setItem(0, 0, new QTableWidgetItem(data));
          textbox->clear();
          textbox->setPlaceholderText("Say No to check Table Data on Textbox");

      }
      else{
//          textbox->setText("Don't Press");
//          QString data = textbox->toPlainText();
          QString tbd = table->item(0,0)->text();
          qDebug()<<tbd;
          textbox->setPlaceholderText("Enter the Data And Then click Me And Say Yes");
          textbox->setText(tbd);
          table->clear();
          myheader = new QStringList();
          *myheader<<"Name"<<"Address"<<"Salary"<<"Emp Type"<<"Joining Date";
          table->setHorizontalHeaderLabels(*myheader);


      }
}
//void asses::DB_open()
//{
//    qDebug<<"database Opened"
//}

MainWindow::~MainWindow()
{

    delete ui;
}
