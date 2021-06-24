#ifndef MAINWINDOW8_H
#define MAINWINDOW8_H

#include <QMainWindow>
#include <QSpinBox>
namespace Ui {
class MainWindow8;
}

class MainWindow8 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow8(QWidget *parent = nullptr);
    ~MainWindow8();

private:
    Ui::MainWindow8 *ui;
    QSpinBox *spinBox;
};

#endif // MAINWINDOW8_H
