#include "mainwindow13.h"
#include "ui_mainwindow13.h"

MainWindow13::MainWindow13(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow13)
{
    ui->setupUi(this);
    this->setWindowTitle("QCheckBox Demo");
    checkBox1=new QCheckBox(this);
    checkBox2=new QCheckBox(this);
    checkBox3=new QCheckBox(this);
    label=new QLabel(this);
    checkBox1->setGeometry(QRect(50,50,50,50));
    checkBox2->setGeometry(QRect(100,50,50,50));
    checkBox3->setGeometry(QRect(150,50,50,50));
    label->setGeometry(QRect(50,100,200,30));
    checkBox1->setText("mathematics");
    checkBox2->setText("chinese");
    checkBox3->setText("English");
    connect(checkBox1,SIGNAL(clicked()),this,SLOT(checkChange()));
    connect(checkBox2,SIGNAL(clicked()),this,SLOT(checkChange()));
    connect(checkBox3,SIGNAL(clicked()),this,SLOT(checkChange()));

}
void MainWindow13::checkChange()
{
    if(sender() == checkBox1) {
    //判断是否被选中
    if(checkBox1->checkState() == Qt::Checked) {
    str += "mathematics"; }else
    {
    str = str.replace(QString("mathematics"),QString(""));
    }
    }else if(sender() == checkBox2) {
    if(checkBox2->checkState() == Qt::Checked) {
    str += "chinese"; }else
    {
    str = str.replace(QString("chinese"),QString(""));
    }
    }else if(sender() == checkBox3) {
    if(checkBox3->checkState() == Qt::Checked) {
    str += "english"; }else
    {
    str = str.replace(QString("english"),QString(""));
    } }
    //绑定值
    label->setText(str);
}

MainWindow13::~MainWindow13()
{
    delete ui;
}
