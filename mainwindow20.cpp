#include "mainwindow20.h"
#include "ui_mainwindow20.h"

MainWindow20::MainWindow20(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow20)
{
    ui->setupUi(this);
    this->setWindowTitle("QTabWidget Demo");
    tabWidget=new QTabWidget(this);
    tabWidget->setGeometry(QRect(30,30,340,140));
    tabWidget->addTab(new tabA,"A栏目");
    tabWidget->addTab(new tabB,"B栏目");
}
tabA::tabA(QWidget *parent):QWidget(parent)
{
  QPushButton *buttonA = new QPushButton(this);
  buttonA->setText("页面 A");
}
tabB::tabB(QWidget *parent):QWidget(parent)
{
  QPushButton *buttonB = new QPushButton(this);
  buttonB->setText("页面 B");
}
MainWindow20::~MainWindow20()
{
    delete ui;
}
