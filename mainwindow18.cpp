#include "mainwindow18.h"
#include "ui_mainwindow18.h"

MainWindow18::MainWindow18(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow18)
{
    ui->setupUi(this);
    this->setWindowTitle("QGridLayout Demo");
    gridLayout = new QGridLayout();
    button1 = new QPushButton("按钮1");
    button2 = new QPushButton("按钮2");
    button3 = new QPushButton("按钮3");
    //向布局中添加控件
    gridLayout->addWidget(button1,0,0,1,1);
    gridLayout->addWidget(button2,0,1,1,1);
    gridLayout->addWidget(button3,1,0,1,1);
    //实例 QWidget
    widget = new QWidget();
    //绑定布局
    widget->setLayout(gridLayout); //绑定界面
    this->setCentralWidget(widget);
}

MainWindow18::~MainWindow18()
{
    delete ui;
}
