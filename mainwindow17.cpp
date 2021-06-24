#include "mainwindow17.h"
#include "ui_mainwindow17.h"

MainWindow17::MainWindow17(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow17)
{
    ui->setupUi(this);
    this->setWindowTitle("QHBoxLayout Demo");
    hboxLayout = new QHBoxLayout();
    button1 = new QPushButton("按钮1");
    button2 = new QPushButton("按钮2");
    button3 = new QPushButton("按钮3");
    //向布局中添加控件
    hboxLayout->addWidget(button1);
    hboxLayout->addWidget(button2);
    hboxLayout->addWidget(button3);
    //间隔
    hboxLayout->setSpacing(60);
    //实例 QWidget
    widget = new QWidget(); //绑定布局
    widget->setLayout(hboxLayout); //绑定界面
    this->setCentralWidget(widget);
}

MainWindow17::~MainWindow17()
{
    delete ui;
}
