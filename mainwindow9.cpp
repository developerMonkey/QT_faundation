#include "mainwindow9.h"
#include "ui_mainwindow9.h"

MainWindow9::MainWindow9(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow9)
{
    ui->setupUi(this);
    this->setWindowTitle("QTimeEdit Demo");
    timeEdit=new QTimeEdit(this);
    timeEdit->setGeometry(QRect(50,50,120,25));
    QDateTime sysTime=QDateTime::currentDateTime();
    QStringList list=sysTime.toString("hh:mm:ss").split(':');
    timeEdit->setTime(QTime(list[0].toInt(),list[1].toInt(),list[2].toInt()));
}

MainWindow9::~MainWindow9()
{
    delete ui;
}
