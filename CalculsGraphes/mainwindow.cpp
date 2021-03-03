#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    calculs.calculDelta0();
    double d0 = calculs.getD0();
    ui->label->setText(QString::number(d0));
    calculs.getDVexpValues();
    calculs.getFrequencies();
    //delta0ExpGraph();
}
/*
void MainWindow::delta0ExpGraph()
{
    chart = new QChart();
    serie = new QLineSeries();

    for (int i = 0; i < frequencies.size(); ++i)
    {
        serie->append(dvexp[i], frequencies[i]);
    }
    chart->addSeries(serie);
}
*/
