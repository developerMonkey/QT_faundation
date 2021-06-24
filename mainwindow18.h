#ifndef MAINWINDOW18_H
#define MAINWINDOW18_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QWidget>
namespace Ui {
class MainWindow18;
}

class MainWindow18 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow18(QWidget *parent = nullptr);
    ~MainWindow18();

private:
    Ui::MainWindow18 *ui;
    QGridLayout *gridLayout;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QWidget *widget;
};

#endif // MAINWINDOW18_H
