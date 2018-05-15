#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QLayout>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

public slots:
    void onbutton1Press();
	void button2Press(bool);

private:
    QPushButton *button1;
    QPushButton *button2;
	QLabel *label2;
    QLabel *label1;

	QHBoxLayout *m_layout = new QHBoxLayout(this);

};

#endif // MAINWINDOW_H
