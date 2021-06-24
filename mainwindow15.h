#ifndef MAINWINDOW15_H
#define MAINWINDOW15_H

#include <QMainWindow>
#include <QTreeView>
#include <QStandardItemModel>
namespace Ui {
class MainWindow15;
}

class MainWindow15 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow15(QWidget *parent = nullptr);
    ~MainWindow15();

private:
    Ui::MainWindow15 *ui;
    QTreeView *treeView;
    QStandardItemModel *model;
};

#endif // MAINWINDOW15_H
