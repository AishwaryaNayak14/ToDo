/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *welcome_label;
    QLabel *label_2;
    QLineEdit *le_1;
    QSplitter *splitter;
    QPushButton *pb_1;
    QPushButton *pb_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *lw_1;
    QWidget *tab_2;
    QListWidget *lw_2;
    QMenuBar *menubar;
    QMenu *menuToDo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(370, 395);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        welcome_label = new QLabel(centralwidget);
        welcome_label->setObjectName(QStringLiteral("welcome_label"));
        QFont font;
        font.setFamily(QStringLiteral("URW Chancery L"));
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        welcome_label->setFont(font);

        gridLayout->addWidget(welcome_label, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_1 = new QLineEdit(centralwidget);
        le_1->setObjectName(QStringLiteral("le_1"));

        gridLayout->addWidget(le_1, 2, 0, 1, 1);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pb_1 = new QPushButton(splitter);
        pb_1->setObjectName(QStringLiteral("pb_1"));
        splitter->addWidget(pb_1);
        pb_2 = new QPushButton(splitter);
        pb_2->setObjectName(QStringLiteral("pb_2"));
        splitter->addWidget(pb_2);

        gridLayout->addWidget(splitter, 3, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lw_1 = new QListWidget(tab);
        lw_1->setObjectName(QStringLiteral("lw_1"));
        lw_1->setGeometry(QRect(0, 0, 351, 192));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lw_2 = new QListWidget(tab_2);
        lw_2->setObjectName(QStringLiteral("lw_2"));
        lw_2->setGeometry(QRect(0, 0, 351, 192));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 370, 22));
        menuToDo = new QMenu(menubar);
        menuToDo->setObjectName(QStringLiteral("menuToDo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuToDo->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        welcome_label->setText(QApplication::translate("MainWindow", "Hi Useless!! Tell me your chore ", 0));
        label_2->setText(QApplication::translate("MainWindow", "Enter the chore -", 0));
        pb_1->setText(QApplication::translate("MainWindow", "Personal", 0));
        pb_2->setText(QApplication::translate("MainWindow", "Business", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Personal", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Business", 0));
        menuToDo->setTitle(QApplication::translate("MainWindow", "ToDo", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
