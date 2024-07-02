#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    stack = new MyStack();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::paintEvent(QPaintEvent*)
{

    valueVector.clear();



    for(int i=0;i<stack->Print().size();i++)
    {
        valueVector.push_back(stack->Print()[i]);
    }

   if(valueVector.size()==0)
    {
        return;
    }

    std::vector<int> sortvector = valueVector;
    std::sort(sortvector.begin(),sortvector.end());
    int max = sortvector[sortvector.size()-1];

    int height = this->height();
    int width = this->width();
    double kY = height/10;

    QPainter painter(this);
    painter.begin(this);
    for(int i=0;i<valueVector.size();i++)
    {
        QRect *rect=new QRect(10,99+kY*i,(width/((max+1)*10))*valueVector[i]*10, kY);
        painter.drawRoundedRect(*rect,0,0);
    }
    painter.end();
}

void MainWindow::on_showPushButton_clicked()
{
    this->update();
}


void MainWindow::on_delPushButton_clicked()
{
    stack->Pop();
    ui->emptyLineEdit->clear();
}


void MainWindow::on_emptyPushButton_clicked()
{
    bool val  = stack->IsEmpty();
    if (val==0)
    {
        ui->emptyLineEdit->setText("Не пустой");
    }
    else
    {
        ui->emptyLineEdit->setText("Пустой");
    }

}

void MainWindow::on_addPushButton_clicked()
{
    stack->Push(ui->addLineEdit->text().toInt());
    ui->addLineEdit->clear();
    ui->emptyLineEdit->clear();
}

