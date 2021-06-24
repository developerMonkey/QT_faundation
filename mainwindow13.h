#ifndef MAINWINDOW13_H
#define MAINWINDOW13_H

#include <QMainWindow>
#include <QCheckBox>
#include <QLabel>
namespace Ui {
class MainWindow13;
}

class MainWindow13 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow13(QWidget *parent = nullptr);
    ~MainWindow13();
private slots:
    void checkChange();
private:
    Ui::MainWindow13 *ui;
    QCheckBox *checkBox1;
    QCheckBox *checkBox2;
    QCheckBox *checkBox3;
    QLabel *label;
    QString str;
};

#endif // MAINWINDOW13_H
