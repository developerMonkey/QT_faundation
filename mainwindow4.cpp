#include "mainwindow4.h"
#include "ui_mainwindow4.h"

MainWindow4::MainWindow4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow4)
{
    ui->setupUi(this);
    this->setWindowTitle("QTextEdit Demo");
    textEdit=new QTextEdit(this);
    textEdit->setGeometry(QRect(50,50,200,150));
    textEdit->setText("this is first line<br/>this is second line");
}

MainWindow4::~MainWindow4()
{
    delete ui;
}
