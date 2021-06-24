#include "mainwindow8.h"
#include "ui_mainwindow8.h"

MainWindow8::MainWindow8(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow8)
{
    ui->setupUi(this);
    this->setWindowTitle("QSpinBox Demo");
    spinBox=new QSpinBox(this);
    spinBox->setGeometry(QRect(50,50,100,25));
    spinBox->setRange(0,200);
    spinBox->setValue(10);
    spinBox->setSuffix("daller");
    spinBox->setPrefix("$");
}

MainWindow8::~MainWindow8()
{
    delete ui;
}
