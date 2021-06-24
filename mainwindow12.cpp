#include "mainwindow12.h"
#include "ui_mainwindow12.h"

MainWindow12::MainWindow12(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow12)
{
    ui->setupUi(this);
    this->setWindowTitle("QRadioButton Demo");
    radioM=new QRadioButton(this);
    radioW=new QRadioButton(this);
    label=new QLabel(this);
    radioM->setGeometry(QRect(50,50,50,50));
    radioW->setGeometry(QRect(100,50,50,50));
    label->setGeometry(QRect(50,100,100,25));
    radioM->setText("Men");
    radioW->setText("Women");
    radioM->setChecked(true);
    label->setText("men");
    connect(radioM,SIGNAL(clicked()),this,SLOT(radioChange()));
    connect(radioW,SIGNAL(clicked()),this,SLOT(radioChange()));
}
void MainWindow12::radioChange()
{
    if(sender()==radioM)
    {
        label->setText("men");
    }
    else if (sender()==radioW) {
        label->setText("women");
    }
}
MainWindow12::~MainWindow12()
{
    delete ui;
}
