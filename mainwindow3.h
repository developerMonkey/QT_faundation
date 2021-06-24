#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = nullptr);
    ~MainWindow3();

private:
    Ui::MainWindow3 *ui;
private:
    QLineEdit *lineEdit;
    QLabel *tagLabel;
    QPushButton *commit_button;
    QLabel *output_label;
private slots:
    void getLineEdit_value();
};

#endif // MAINWINDOW3_H
