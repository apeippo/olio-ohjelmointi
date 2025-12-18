#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    counter = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BtnCount_clicked()
{
    counter ++;
        QString s = QString::number(counter);
    ui->txtResult->setText(s);
ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
}


void MainWindow::on_BtnReset_clicked()
{
    counter = 0;

    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}

