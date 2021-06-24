#include "mainwindow11.h"
#include "ui_mainwindow11.h"

MainWindow11::MainWindow11(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow11)
{
    ui->setupUi(this);
    this->setWindowTitle("QScrollBar Demo");
    scrollBar=new QScrollBar(this);
    spinBox=new QSpinBox(this);
    scrollBar->setOrientation(Qt::Horizontal);
    scrollBar->setGeometry(QRect(50,50,180,20));
    spinBox->setGeometry(QRect(50,90,100,25));
    scrollBar->setPageStep(10);
    connect(scrollBar,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));
    connect(spinBox,SIGNAL(valueChanged(int)),scrollBar,SLOT(setValue(int)));
    scrollBar->setValue(50);
}

MainWindow11::~MainWindow11()
{
    delete ui;
}
