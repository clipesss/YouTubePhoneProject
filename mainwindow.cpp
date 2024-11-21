#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->scrollArea->widget()->setMinimumHeight(565);
    ui->scrollArea->setWidgetResizable(true);
    startup();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startup()
{
    QLabel *picture1 = new QLabel(ui->scrollArea->widget());
    picture1->setStyleSheet("background-color:red;");
    picture1->setGeometry(0, 0, 390, 204);
    picture1->update();

    QLabel *picture2 = new QLabel(ui->scrollArea->widget());
    picture2->setStyleSheet("background-color:green;");
    picture2->setGeometry(0, 282, 390, 204);
    picture2->update();
}
