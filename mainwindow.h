#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <mainwindow1.h>
#include <mainwindow2.h>
#include <mainwindow3.h>
#include <mainwindow4.h>
#include <mainwindow5.h>
#include <mainwindow6.h>
#include <mainwindow7.h>
#include <mainwindow8.h>
#include <mainwindow9.h>
#include <mainwindow10.h>
#include <mainwindow11.h>
#include <mainwindow12.h>
#include <mainwindow13.h>
#include <mainwindow14.h>
#include <mainwindow15.h>
#include <mainwindow16.h>
#include <mainwindow17.h>
#include <mainwindow18.h>
#include <mainwindow19.h>
#include <mainwindow20.h>
#include <mainwindow21.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *button10;
    QPushButton *button11;
    QPushButton *button12;
    QPushButton *button13;
    QPushButton *button14;
    QPushButton *button15;
    QPushButton *button16;
    QPushButton *button17;
    QPushButton *button18;
    QPushButton *button19;
    QPushButton *button20;
    QPushButton *button21;
    MainWindow1 w1;
    MainWindow2 w2;
    MainWindow3 w3;
    MainWindow4 w4;
    MainWindow5 w5;
    MainWindow6 w6;
    MainWindow7 w7;
    MainWindow8 w8;
    MainWindow9 w9;
    MainWindow10 w10;
    MainWindow11 w11;
    MainWindow12 w12;
    MainWindow13 w13;
    MainWindow14 w14;
    MainWindow15 w15;
    MainWindow16 w16;
    MainWindow17 w17;
    MainWindow18 w18;
    MainWindow19 w19;
    MainWindow20 w20;
    MainWindow21 w21;

private slots:
    void open_show_button_function();
    void open_show_label_function();
    void open_show_LineEdit_function();
    void open_show_TextEdit_function();
    void open_show_PlainTextEdit_function();
    void open_show_ComboBox_function();
    void open_show_FontComboBox_function();
    void open_show_SpinBox_function();
    void open_show_TimeEdit_function();
    void open_show_DateEdit_function();
    void open_show_ScrollBar_function();
    void open_show_RadioButton_function();
    void open_show_CheckBox_function();
    void open_show_ListView_function();
    void open_show_TreeView_function();
    void open_show_TableView_function();
    void open_show_HBoxLayout_function();
    void open_show_GridLayout_function();
    void open_show_GroupBox_function();
    void open_show_TabWidget_function();
    void open_show_MenuAndToolBar_function();

};


#endif // MAINWINDOW_H
