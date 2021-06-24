#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    this->setWindowTitle("QLabel Demo");//change window title name
    label=new QLabel("I am is QLabel",this);//argument and  initialize QLabel object
    label->setGeometry(QRect(100,100,200,30));//set ui place;
    //label 样式(CSS 样式表)
    //font-size 字号 //color 字体颜色 //font-weight 字宽 //font-style 字体样式
    label->setStyleSheet("font-size:20px;color:red;font-weight:bold;font- style:italic");
}

MainWindow2::~MainWindow2()
{
    delete ui;
}
