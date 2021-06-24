#ifndef MAINWINDOW19_H
#define MAINWINDOW19_H

#include <QMainWindow>
#include <QGroupBox>
#include <QPushButton>
#include <QVBoxLayout>
namespace Ui {
class MainWindow19;
}

class MainWindow19 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow19(QWidget *parent = nullptr);
    ~MainWindow19();

private:
    Ui::MainWindow19 *ui;
    QGroupBox *box;
    QPushButton *button;
    QVBoxLayout *vbox;
};

#endif // MAINWINDOW19_H
