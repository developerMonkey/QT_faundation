#include "mainwindow5.h"
#include "ui_mainwindow5.h"

MainWindow5::MainWindow5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow5)
{
    ui->setupUi(this);
    this->setWindowTitle("QPlainTextEdit Demo");
    plainTextEdit=new QPlainTextEdit(this);
    plainTextEdit->setGeometry(QRect(50,50,200,100));
    plainTextEdit->setPlainText("first line \n second line \n thred line");
}

MainWindow5::~MainWindow5()
{
    delete ui;
}
