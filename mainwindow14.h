#ifndef MAINWINDOW14_H
#define MAINWINDOW14_H

#include <QMainWindow>
#include <QListView>
#include <QStringListModel>
namespace Ui {
class MainWindow14;
}

class MainWindow14 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow14(QWidget *parent = nullptr);
    ~MainWindow14();
    QListView *listView;
    QStringListModel *model;

private:
    Ui::MainWindow14 *ui;
};

#endif // MAINWINDOW14_H
