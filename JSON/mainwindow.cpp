#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace nh = nlohmann;

namespace ns
{
void from_json(const nh::json& j, ns::Person& val)
    {
        j.at("age").get_to(val._age);
        j.at("name").get_to(val._name);

    }

    void to_json(nh::json& j, const ns::Person& val)
    {
        j["age"] = val._age;
        j["name"] = val._name;

    }
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::paintEvent(QPaintEvent *)
{
    Ages.clear();
    for (int i=0;i<vector.size();i++)
    {
        Ages.push_back(vector[i].GetAge());
    }
    if(Ages.size()==0)
    {
        return;
    }

        std::vector<int> sortvector = Ages;;
        std::sort(sortvector.begin(),sortvector.end());
        int max = sortvector[sortvector.size()-1];

        int height = this->height();
        int width = this->width();
        double kY = height/10;

        QPainter painter(this);
        painter.begin(this);
        for(int i=0;i<Ages.size();i++)
        {
            QRect *rect=new QRect(10,99+kY*i,(width/((max+1)*10))*Ages[i]*10, kY);
            painter.drawRoundedRect(*rect,0,0);
        }
        painter.end();

}

void MainWindow::on_openPushButton_clicked()
{
    QString name = QFileDialog::getOpenFileName(this,"Open");
    std::ifstream stream(name.toStdString());
    nh::json json = nh::json::parse(stream);

    nh::json j2 = nh::json::parse(json.dump());
    auto persons = j2.get<std::vector<ns::Person>>();

    vector.clear();

    for(int i=0;i<persons.size();i++)
    {
      vector.push_back(persons[i]);
    }

    update();
}

void MainWindow::on_savePushButton_clicked()
{
    QString name = QFileDialog::getSaveFileName(this,"Save");
    std::ofstream stream(name.toStdString());

    nh::json j = vector;
    stream << j.dump();
}


void MainWindow::on_addPushButton_clicked()
{
    ns::Person person(ui->nameLineEdit->text().toStdString(),ui->ageLineEdit->text().toInt());
    vector.push_back(person);
    repaint();
}



