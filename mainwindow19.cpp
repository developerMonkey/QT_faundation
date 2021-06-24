#include "mainwindow19.h"
#include "ui_mainwindow19.h"

MainWindow19::MainWindow19(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow19)
{
    ui->setupUi(this);
    this->setWindowTitle("QGroupBox Demo");
    box=new QGroupBox(this);
    box->setGeometry(QRect(30,30,340,100));
    box->setTitle("voice program");
    button=new QPushButton();
    button->setText("button");
    vbox=new QVBoxLayout;
    vbox->addWidget(button);
    box->setLayout(vbox);
}

MainWindow19::~MainWindow19()
{
    delete ui;
}
