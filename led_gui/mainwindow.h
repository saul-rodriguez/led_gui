#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

private:
    Ui::MainWindow *ui;
    qint16 state;

public:
    void myISR();
};

#endif // MAINWINDOW_H
