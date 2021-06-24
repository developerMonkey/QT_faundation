#include "mainwindow21.h"
#include "ui_mainwindow21.h"
MainWindow21::MainWindow21(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow21)
{
    ui->setupUi(this);
    this->setWindowTitle("QMenu、QToolBar Demo");
    fileMenu=new QMenu(this);
    editMenu=new QMenu(this);
    helpMenu=new QMenu(this);
    newAct=new QAction(QIcon(""),tr("new create"),this);
    newAct->setShortcut(tr("Ctrl+N"));
    newAct->setStatusTip(tr("new create folder"));
    connect(newAct,SIGNAL(triggered()),this,SLOT(newFile()));
    cutAct=new QAction(QIcon(""),tr("cut"),this);
    cutAct->setShortcut(tr("Ctrl+X"));
    cutAct->setStatusTip(tr("cut content"));
    copyAct=new QAction(QIcon(),tr("copy"),this);
    cutAct->setShortcut(tr("Ctrl+C"));
    copyAct->setStatusTip(tr("copy content"));
    pasteAct=new QAction(QIcon(""),tr(""),this);
    pasteAct->setShortcut(tr("Ctrl+V"));
    pasteAct->setStatusTip(tr("paster content"));
    aboutQtAct=new QAction(tr("about Qt"),this);
    aboutQtAct->setStatusTip(tr("about Qt message"));
    connect(aboutQtAct,SIGNAL(triggered()),qApp,SLOT(aboutQt()));
    fileMenu=menuBar()->addMenu(tr("file"));
    fileMenu->addAction(newAct);
    fileMenu->addSeparator();
    editMenu=menuBar()->addMenu(tr("edit"));
    editMenu->addAction(cutAct);
    editMenu->addAction(copyAct);
    editMenu->addAction(pasteAct);
    menuBar()->addSeparator();
    helpMenu=menuBar()->addMenu(tr("help"));
    helpMenu->addAction(aboutQtAct);
    fileToolBar=addToolBar(tr("new create"));
    fileToolBar->addAction(newAct);
    editToolBar=addToolBar(tr("change"));
    editToolBar->addAction(cutAct);
    editToolBar->addAction(copyAct);
    editToolBar->addAction(pasteAct);
}
void MainWindow21::newFile()
{
    QMessageBox::warning(this,tr("Warning"),
tr("创建新文件?"),
QMessageBox::Yes | QMessageBox::Default, QMessageBox::No);
}
MainWindow21::~MainWindow21()
{
    delete ui;
}
