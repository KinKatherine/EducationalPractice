#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "json.hpp"
#include <QMainWindow>
#include <QPainter>
#include <QPaintEvent>
#include <QFileDialog>
#include <fstream>
#include"person.h"

QT_BEGIN_NAMESPACE
namespace Ui {
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

    void on_openPushButton_clicked();

    void on_savePushButton_clicked();

    void on_addPushButton_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<int> Ages;
    std::vector<ns::Person> vector;
    virtual void paintEvent(QPaintEvent*);
};
#endif // MAINWINDOW_H
