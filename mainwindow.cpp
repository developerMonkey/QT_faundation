#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Qt UI Demo");
    this->setMaximumSize(300,300);
    this->setMinimumSize(300,300);
    button1=new QPushButton(this);
    button2=new QPushButton(this);
    button3=new QPushButton(this);
    button4=new QPushButton(this);
    button5=new QPushButton(this);
    button6=new QPushButton(this);
    button7=new QPushButton(this);
    button8=new QPushButton(this);
    button9=new QPushButton(this);
    button10=new QPushButton(this);
    button11=new QPushButton(this);
    button12=new QPushButton(this);
    button13=new QPushButton(this);
    button14=new QPushButton(this);
    button15=new QPushButton(this);
    button16=new QPushButton(this);
    button17=new QPushButton(this);
    button18=new QPushButton(this);
    button19=new QPushButton(this);
    button20=new QPushButton(this);
    button21=new QPushButton(this);

    button1->setText("QPushButton");
    button1->setGeometry(QRect(0,0,100,40));
    button2->setText("QLabel ");
    button2->setGeometry(QRect(100,0,100,40));
    button3->setText("QLineEdit ");
    button3->setGeometry(QRect(200,0,100,40));
    button4->setText("QTextEdit");
    button4->setGeometry(QRect(0,40,100,40));
    button5->setText("QPlainTextEdit");
    button5->setGeometry(QRect(100,40,100,40));
    button6->setText("QComboBox");
    button6->setGeometry(QRect(200,40,100,40));
    button7->setText("QFontComboBox");
    button7->setGeometry(QRect(0,80,100,40));
    button8->setText("QSpinBox");
    button8->setGeometry(QRect(100,80,100,40));
    button9->setText("QTimeEdit");
    button9->setGeometry(QRect(200,80,100,40));
    button10->setText("QDateEdit");
    button10->setGeometry(QRect(0,120,100,40));
    button11->setText("QScrollBar");
    button11->setGeometry(QRect(100,120,100,40));
    button12->setText("QRadioButton");
    button12->setGeometry(QRect(200,120,100,40));
    button13->setText("QCheckBox");
    button13->setGeometry(QRect(0,160,100,40));
    button14->setText("QListView");
    button14->setGeometry(QRect(100,160,100,40));
    button15->setText("QTreeView");
    button15->setGeometry(QRect(200,160,100,40));
    button16->setText("QTableView");
    button16->setGeometry(QRect(0,200,100,40));
    button17->setText("QHBoxLayout");
    button17->setGeometry(QRect(100,200,100,40));
    button18->setText("QGridLayout");
    button18->setGeometry(QRect(200,200,100,40));
    button19->setText("QGroupBox");
    button19->setGeometry(QRect(0,240,100,40));
    button20->setText("QTabWidget");
    button20->setGeometry(QRect(100,240,100,40));
    button21->setText("QMenuAndQToolBar");
    button21->setGeometry(QRect(200,240,100,40));


    connect(button1,SIGNAL(clicked()),this,SLOT(open_show_button_function()));
    connect(button2,SIGNAL(clicked()),this,SLOT(open_show_label_function()));
    connect(button3,SIGNAL(clicked()),this,SLOT(open_show_LineEdit_function()));
    connect(button4,SIGNAL(clicked()),this,SLOT(open_show_TextEdit_function()));
    connect(button5,SIGNAL(clicked()),this,SLOT(open_show_PlainTextEdit_function()));
    connect(button6,SIGNAL(clicked()),this,SLOT(open_show_ComboBox_function()));
    connect(button7,SIGNAL(clicked()),this,SLOT(open_show_FontComboBox_function()));
    connect(button8,SIGNAL(clicked()),this,SLOT(open_show_SpinBox_function()));
    connect(button9,SIGNAL(clicked()),this,SLOT(open_show_TimeEdit_function()));
    connect(button10,SIGNAL(clicked()),this,SLOT(open_show_DateEdit_function()));
    connect(button11,SIGNAL(clicked()),this,SLOT(open_show_ScrollBar_function()));
    connect(button12,SIGNAL(clicked()),this,SLOT(open_show_RadioButton_function()));
    connect(button13,SIGNAL(clicked()),this,SLOT(open_show_CheckBox_function()));
    connect(button14,SIGNAL(clicked()),this,SLOT(open_show_ListView_function()));
    connect(button15,SIGNAL(clicked()),this,SLOT(open_show_TreeView_function()));
    connect(button16,SIGNAL(clicked()),this,SLOT(open_show_TableView_function()));
    connect(button17,SIGNAL(clicked()),this,SLOT(open_show_HBoxLayout_function()));
    connect(button18,SIGNAL(clicked()),this,SLOT(open_show_GridLayout_function()));
    connect(button19,SIGNAL(clicked()),this,SLOT(open_show_GroupBox_function()));
    connect(button20,SIGNAL(clicked()),this,SLOT(open_show_TabWidget_function()));
    connect(button21,SIGNAL(clicked()),this,SLOT(open_show_MenuAndToolBar_function()));
}

void MainWindow::open_show_button_function()
{
   w1.show();
}
void MainWindow::open_show_label_function()
{
   w2.show();
}
void MainWindow::open_show_LineEdit_function()
{
   w3.show();
}
void MainWindow::open_show_TextEdit_function()
{
   w4.show();
}
void MainWindow::open_show_PlainTextEdit_function()
{
   w5.show();
}
void MainWindow::open_show_ComboBox_function()
{
   w6.show();
}
void MainWindow::open_show_FontComboBox_function()
{
   w7.show();
}
void MainWindow::open_show_SpinBox_function()
{
   w8.show();
}
void MainWindow::open_show_TimeEdit_function()
{
   w9.show();
}
void MainWindow::open_show_DateEdit_function()
{
   w10.show();
}
void MainWindow::open_show_ScrollBar_function()
{
   w11.show();
}
void MainWindow::open_show_RadioButton_function()
{
   w12.show();
}
void MainWindow::open_show_CheckBox_function()
{
   w13.show();
}
void MainWindow::open_show_ListView_function()
{
  w14.show();
}
void MainWindow::open_show_TreeView_function()
{
  w15.show();
}
void MainWindow::open_show_TableView_function()
{
  w16.show();
}
void MainWindow::open_show_HBoxLayout_function()
{
  w17.show();
}
void MainWindow::open_show_GridLayout_function()
{
  w18.show();
}
void MainWindow::open_show_GroupBox_function()
{
  w19.show();
}
void MainWindow::open_show_TabWidget_function()
{
  w20.show();
}
void MainWindow::open_show_MenuAndToolBar_function()
{
  w21.show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
