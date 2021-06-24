#include "mainwindow1.h"
#include "ui_mainwindow1.h"

MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
    this->setWindowTitle("QPushButton Demo");
    button=new QPushButton("button_A",this);
    button->setGeometry(QRect(100,100,100,25));
    connect(button,SIGNAL(released()),this,SLOT(txtButton()));

}
void MainWindow1::txtButton()
{
  button->setText("button_B");
}

MainWindow1::~MainWindow1()
{
    delete ui;
}
