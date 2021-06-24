#include "mainwindow10.h"
#include "ui_mainwindow10.h"

MainWindow10::MainWindow10(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow10)
{
    ui->setupUi(this);
    this->setWindowTitle("QDateEdit Demo");
    dateEdit=new QDateEdit(this);
    dateEdit->setGeometry(QRect(50,50,120,25));
    QDateTime sysTime=QDateTime::currentDateTime();
    QStringList list=sysTime.toString("yyyy-MM-dd").split('-');
    dateEdit->setDate(QDate(list[0].toInt(),list[1].toInt(),list[2].toInt()));
}

MainWindow10::~MainWindow10()
{
    delete ui;
}
