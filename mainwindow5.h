#ifndef MAINWINDOW5_H
#define MAINWINDOW5_H

#include <QMainWindow>
#include <QPlainTextEdit>
namespace Ui {
class MainWindow5;
}

class MainWindow5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow5(QWidget *parent = nullptr);
    ~MainWindow5();

private:
    Ui::MainWindow5 *ui;
    QPlainTextEdit *plainTextEdit;
};

#endif // MAINWINDOW5_H
