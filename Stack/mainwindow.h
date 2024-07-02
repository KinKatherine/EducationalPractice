#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<vector>
#include<list.h>
#include<QPainter>
#include<stack.h>

class MyStack;
class MyList;

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addPushButton_clicked();
    void on_showPushButton_clicked();
    void on_delPushButton_clicked();
    void on_emptyPushButton_clicked();
private:
    Ui::MainWindow *ui;
    MyStack *stack;
    std::vector<int> valueVector;

protected:
    void paintEvent(QPaintEvent*);
};
#endif // MAINWINDOW_H
