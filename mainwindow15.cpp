#include "mainwindow15.h"
#include "ui_mainwindow15.h"

MainWindow15::MainWindow15(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow15)
{
    ui->setupUi(this);
    this->setWindowTitle("QTreeView Demo");
    //实例 QTreeView 控件
    treeView = new QTreeView(this);
    //位置
    treeView->setGeometry(QRect(50,50,150,200)); //实例数据类型 4 个节点，2 列
    model = new QStandardItemModel(3,2);
    //列名称
    model->setHeaderData(0,Qt::Horizontal,"第一列");
    model->setHeaderData(1,Qt::Horizontal,"第二列"); //定义节点
    QStandardItem *item1 = new QStandardItem("数学");
    item1->setIcon(QIcon("/home/task/Qt_projects/QT_foundation/mathematics.jpg"));
    QStandardItem *item2 = new QStandardItem("语文");
    item2->setIcon(QIcon("/home/task/Qt_projects/QT_foundation/chinese.jpg"));
    QStandardItem *item3 = new QStandardItem("外语");
    item3->setIcon(QIcon("/home/task/Qt_projects/QT_foundation/english.jpg"));
    //外语子项
    QStandardItem *item4 = new QStandardItem("外语A");
    item4->setIcon(QIcon("/home/task/Qt_projects/QT_foundation/english.jpg"));
    item3->appendRow(item4);
    //将节点添加至 QStandardItemModel
    model->setItem(0,0,item1);
    model->setItem(1,0,item2);
    model->setItem(2,0,item3);
    //将 QStandardItemModel 数据绑定 QTreeView 控件
    treeView->setModel(model);
}

MainWindow15::~MainWindow15()
{
    delete ui;
}
