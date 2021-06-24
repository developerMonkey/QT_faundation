#include "mainwindow7.h"
#include "ui_mainwindow7.h"

MainWindow7::MainWindow7(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow7)
{
    ui->setupUi(this);
    this->setWindowTitle("QFontComboBox Demo");
    fontComboBox=new QFontComboBox(this);
    button=new QPushButton(this);
    label=new QLabel(this);
    label->setGeometry(QRect(50,150,300,25));
    button->setText("button");
    button->move(180,50);
    connect(button,SIGNAL(released()),this,SLOT(txtButton()));
    fontComboBox->setGeometry(QRect(50,50,120,25));
}
void MainWindow7::txtButton()
{
    label->setText("select font:"+ fontComboBox->currentText());
}
MainWindow7::~MainWindow7()
{
    delete ui;
}
