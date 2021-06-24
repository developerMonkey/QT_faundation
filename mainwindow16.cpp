#include "mainwindow16.h"
#include "ui_mainwindow16.h"

MainWindow16::MainWindow16(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow16)
{
    ui->setupUi(this);
    this->setWindowTitle("QTableView Demo");
    tableView=new QTableView(this);
    tableView->setGeometry(QRect(50,50,310,200));
    model=new QStandardItemModel();
    model->setHorizontalHeaderItem(0,new QStandardItem("mathematics_A"));
    model->setHorizontalHeaderItem(1,new QStandardItem("chinese_A"));
    model->setHorizontalHeaderItem(2,new QStandardItem("english_A"));
    model->setItem(0,0,new QStandardItem("mathematics_A"));
    model->setItem(0,1,new QStandardItem("chinese_A"));
    model->setItem(0,2,new QStandardItem("english_A"));
    model->setItem(1,0,new QStandardItem("mathematics_B"));
    model->setItem(1,1,new QStandardItem("chinese_B"));
    model->setItem(1,2,new QStandardItem("english_B"));
    model->setItem(2,0,new QStandardItem("mathematics_C"));
    model->setItem(2,1,new QStandardItem("chinese_C"));
    model->setItem(2,2,new QStandardItem("english_C"));
    tableView->setModel(model);
}

MainWindow16::~MainWindow16()
{
    delete ui;
}
