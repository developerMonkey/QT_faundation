#ifndef MAINWINDOW16_H
#define MAINWINDOW16_H

#include <QMainWindow>
#include <QTableView>
#include <QStandardItemModel>
namespace Ui {
class MainWindow16;
}

class MainWindow16 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow16(QWidget *parent = nullptr);
    ~MainWindow16();

private:
    Ui::MainWindow16 *ui;
    QTableView *tableView;
    QStandardItemModel *model;
};

#endif // MAINWINDOW16_H
