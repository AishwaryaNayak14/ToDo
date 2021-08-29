#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QListWidgetItem *newItem = new QListWidgetItem;
//    newItem->setText("Grocery");
//    ui->lw_1->insertItem(0, "Lan");
//    newItem->setText("Laundry");
//    ui->lw_1->insertItem(1, newItem);
    connect(ui->pb_1,SIGNAL(clicked()),this , SLOT(personal()));
    connect(ui->pb_2,SIGNAL(clicked()),this , SLOT(business()));
    connect(ui->le_1, SIGNAL (textChanged(QString)),this , SLOT(getinput(QString)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::personal()
{
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(input);
    ui->lw_1->insertItem(0, newItem);
    ui->le_1->clear();
}

void MainWindow::business()
{
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(input);
    ui->lw_2->insertItem(0, newItem);
    ui->le_1->clear();
}



void MainWindow::getinput(QString str)
{
    input = str;

}


