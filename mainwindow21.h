#ifndef MAINWINDOW21_H
#define MAINWINDOW21_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QMessageBox>

namespace Ui {
class MainWindow21;
}

class MainWindow21 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow21(QWidget *parent = nullptr);
    ~MainWindow21();

private:
    Ui::MainWindow21 *ui;
    QMenu *fileMenu,*editMenu,*helpMenu;
    QToolBar *fileToolBar,*editToolBar;
    QAction *newAct;
    QAction *cutAct;
    QAction *copyAct;
    QAction *pasteAct;
    QAction *aboutQtAct;
private slots:
    void newFile();
};

#endif // MAINWINDOW21_H
