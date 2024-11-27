#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVector>
#include <QtMultimedia/QtMultimedia>
#include <QtMultimediaWidgets/QtMultimediaWidgets>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void startup();
    void on_buttonHome_clicked();

    void on_buttonProfile_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //QVector<QPushButton*> buttons;
};
#endif // MAINWINDOW_H
