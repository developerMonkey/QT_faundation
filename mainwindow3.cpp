#include "mainwindow3.h"
#include "ui_mainwindow3.h"

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
    this->setWindowTitle("QLineEdit Demo");
    tagLabel=new QLabel("password",this);
    tagLabel->setGeometry(QRect(50,100,50,25));
    lineEdit=new QLineEdit(this);
    lineEdit->setGeometry(QRect(100,100,200,25));
    lineEdit->setStyleSheet("border:1px;border-style:solid;color:red;border-color: blue red;");
    lineEdit->setMaxLength(12);
    lineEdit->setEchoMode(QLineEdit::Password);
    commit_button=new QPushButton("commit",this);
    commit_button->setGeometry(QRect(20,200,50,25));
    output_label=new QLabel(this);
    output_label->setGeometry(QRect(70,200,50,25));
    connect(commit_button,SIGNAL(clicked()),this,SLOT(getLineEdit_value()));
}

void MainWindow3::getLineEdit_value()
{
   output_label->setText(lineEdit->text());
}

MainWindow3::~MainWindow3()
{
    delete ui;
}
