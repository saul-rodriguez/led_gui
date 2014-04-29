#include <QApplication>
#include "mainwindow.h"
#include <wiringPi.h>

void ISR(void);

MainWindow *pW;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;    
    w.show();
    
    wiringPiSetupSys();

    wiringPiISR(27,INT_EDGE_FALLING,&ISR);
    pW = &w;

    return a.exec();
}

void ISR(void)
{
    qDebug("ISR triggered\n");
    pW->myISR();
}
