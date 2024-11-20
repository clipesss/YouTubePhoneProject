#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Test buttons
    QPushButton *button = new QPushButton(ui->scrollArea->widget());
    button->setStyleSheet("background-color:red;");
    button->setGeometry(0, 0, 390, 100);
    button->update();

    QPushButton *button2 = new QPushButton(ui->scrollArea->widget());
    button2->setStyleSheet("background-color:green;");
    button2->setGeometry(0, 100, 390, 100);
    button2->update();

    ui->scrollArea->widget()->setMinimumHeight(1000);
    ui->scrollArea->setWidgetResizable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
