#ifndef MAINWINDOW17_H
#define MAINWINDOW17_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>
#include <QWidget>
namespace Ui {
class MainWindow17;
}

class MainWindow17 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow17(QWidget *parent = nullptr);
    ~MainWindow17();

private:
    Ui::MainWindow17 *ui;
    QHBoxLayout *hboxLayout;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QWidget *widget;
};

#endif // MAINWINDOW17_H
