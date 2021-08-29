#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>



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
//    connect(ui->pb_1,SIGNAL(clicked()),this , SLOT(personal()));
//    connect(ui->pb_2,SIGNAL(clicked()),this , SLOT(business()));
      connect(ui->le_1, SIGNAL (textChanged(QString)),this , SLOT(getinput(QString)));
      connect(ui->pb_1, SIGNAL(clicked()),this , SLOT(AddTask()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::personal()
//{
//    QListWidgetItem *newItem = new QListWidgetItem;
//    newItem->setText(input);
//    ui->lw_1->insertItem(0, newItem);
//    ui->le_1->clear();
//}

//void MainWindow::business()
//{
//    QListWidgetItem *newItem = new QListWidgetItem;
//    newItem->setText(input);
//    ui->lw_2->insertItem(0, newItem);
//    ui->le_1->clear();
//}

void MainWindow::AddTask()

{
    QListWidget* plist = NULL;
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(input);
//    int temp = 0;
//    ui->mytab->currentChanged(int temp);

//    QListWidget* list = (QListWidget*) ui->mytab->widget(temp); // for the first tab

//    list->insertItem(0, newItem);
//    ui->le_1->clear();
    if ( ui->mytab->currentIndex() == 0)
{
        QWidget* pWidget= ui->mytab->findChild<QWidget *>("lw_1");
        plist = (QListWidget *)pWidget;
        plist->insertItem(0, newItem);


    }


    else
    {
        QWidget* pWidget= ui->mytab->findChild<QWidget *>("lw_2");
        plist = (QListWidget *)pWidget;
        plist->insertItem(0, newItem);

    }
//  int currenttab = ui->mytab->currentIndex();
//    QListWidget* plist = NULL;
//    QWidget* pWidget= ui->mytab->widget(temp); // for the second tab
//    // You can use metaobject to get widget type or qobject_cast
//    if (strcmp(pWidget->metaObject()->className(),"QListWidget"))
//    {
//        plist = (QListWidget*)pWidget;
//      }



//    plist->insertItem(0, newItem);
    ui->le_1->clear();

}

void MainWindow::getinput(QString str)
{
    input = str;

}


