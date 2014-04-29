#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <wiringPi.h>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    state = 0;

    //wiringPiSetupSys();

    //wiringPiISR(27,INT_EDGE_FALLING,myISR());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton1_clicked()
{
    if (state) {
        digitalWrite(17,0);
        state = 0;
    } else {
        digitalWrite(17,1);
        state = 1;
    }
}

void MainWindow::on_pushButton2_clicked()
{
    qint16 aux;

    aux = digitalRead(27);

    QString Text = QString::number(aux);
    ui->lineEdit->setText(Text);

}

void MainWindow::myISR()
{
    qDebug("ISR triggered in my Window!\n");
}
