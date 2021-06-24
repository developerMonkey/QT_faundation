#ifndef MAINWINDOW6_H
#define MAINWINDOW6_H

#include <QMainWindow>
#include <QComboBox>
namespace Ui {
class MainWindow6;
}

class MainWindow6 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow6(QWidget *parent = nullptr);
    ~MainWindow6();

private:
    Ui::MainWindow6 *ui;
    QComboBox *comboBox;
};

#endif // MAINWINDOW6_H
