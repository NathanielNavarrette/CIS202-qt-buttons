#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    button1 = new QPushButton("Click Me",this);
    button2 = new QPushButton("Bttn 2", this);
    label1 = new QLabel("Label 1",this);
    label2 = new QLabel("Label 2", this);

    label1->move(button1->pos()+QPoint(button1->width()+5,0));
    button2->move(label1->pos()+QPoint(label1->width()+5,0));
    label2->move(button2->pos()+QPoint(button2->width()+5,0));

    connect(button1,SIGNAL(clicked(bool)),this,SLOT(onbutton1Press()));
    connect(button2, SIGNAL(clicked(bool) ), this, SLOT(button2Press(bool)) );
}

void MainWindow::onbutton1Press()
{
    qDebug() << "Pressed";
}

void MainWindow::button2Press(bool triggered)
{
    qDebug() << "Button 2 pressed";
}
