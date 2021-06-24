#ifndef MAINWINDOW20_H
#define MAINWINDOW20_H

#include <QMainWindow>
#include <QTabWidget>
#include <QWidget>
#include <QPushButton>
namespace Ui {
class MainWindow20;
}

class MainWindow20 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow20(QWidget *parent = nullptr);
    ~MainWindow20();

private:
    Ui::MainWindow20 *ui;
    QTabWidget *tabWidget;

};
class tabA:public QWidget
{
        Q_OBJECT
public:
    tabA(QWidget *parent=0);
};
class tabB:public QWidget
{
    Q_OBJECT
public:
    tabB(QWidget *parent=0);
};
#endif // MAINWINDOW20_H
