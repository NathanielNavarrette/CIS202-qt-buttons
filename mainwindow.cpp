#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    //initialize the buttons and labels
    button1 = new QPushButton("Click Me",this);
    button2 = new QPushButton("Bttn 2", this);
    label1 = new QLabel("Label 1",this);
    label2 = new QLabel("Label 2", this);

    //move the widgets so that they don't overlap each other
    label1->move(button1->pos()+QPoint(button1->width()+5,0));
    button2->move(label1->pos()+QPoint(label1->width()+5,0));
    label2->move(button2->pos()+QPoint(button2->width()+5,0));

    //"wire up" the buttons to slots
    //connect(QWidgetA, SIGNAL(QWidgetA signal), QWidgetB, SLOT(QWidgetB Slot))
    connect(button1,SIGNAL(clicked(bool)),this,SLOT(onbutton1Press()));
    connect(button2, SIGNAL(clicked(bool) ), this, SLOT(button2Press(bool)) );

    //just to get both buttons to show without having to resize the window
    this->setMinimumHeight(150);
    this->setMinimumWidth(500);
}

void MainWindow::onbutton1Press()
{
    qDebug() << "Button 1 pressed";
    label2->setText("Label 2 Text");
}

void MainWindow::button2Press(bool triggered)
{
    qDebug() << "Button 2 pressed";
    label2->setText("Changed Text");
}
