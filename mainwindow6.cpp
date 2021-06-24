#include "mainwindow6.h"
#include "ui_mainwindow6.h"

MainWindow6::MainWindow6(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow6)
{
    ui->setupUi(this);
    this->setWindowTitle("QComboBox Demo");
    comboBox=new QComboBox(this);
    comboBox->setGeometry(QRect(50,50,120,25));
    QStringList str;
    str<<"mathematics"<<"chinese"<<"Geography"<<"Biology"<<"Chemistry"<<"Politics";
    comboBox->addItems(str);
}

MainWindow6::~MainWindow6()
{
    delete ui;
}
