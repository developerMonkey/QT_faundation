#include "mainwindow14.h"
#include "ui_mainwindow14.h"

MainWindow14::MainWindow14(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow14)
{
    ui->setupUi(this);
    this->setWindowTitle("QListView  Demo");
    listView=new QListView(this);
    listView->setGeometry(QRect(50,50,100,100));
    QStringList string;
    string<<"mathematics"<<"chinese"<<"english"<<"Geography"<<"history";
    model=new QStringListModel(string);
    listView->setModel(model);
}

MainWindow14::~MainWindow14()
{
    delete ui;
}
