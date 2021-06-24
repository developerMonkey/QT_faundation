#ifndef MAINWINDOW10_H
#define MAINWINDOW10_H

#include <QMainWindow>
#include <QDateEdit>
#include <QDateTime>
namespace Ui {
class MainWindow10;
}

class MainWindow10 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow10(QWidget *parent = nullptr);
    ~MainWindow10();

private:
    Ui::MainWindow10 *ui;
    QDateEdit *dateEdit;
};

#endif // MAINWINDOW10_H
