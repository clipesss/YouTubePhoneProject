#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->scrollArea->widget()->setMinimumHeight(2096);
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
    picture1->setStyleSheet("background: url(:/resources/showVideo1.png);");
    picture1->setGeometry(0, 0, 390, 204);
    QLabel *videoName1 = new QLabel(ui->scrollArea->widget());
    videoName1->setText("Top 100 NBA Plays of 2021 🔥");
    videoName1->setStyleSheet("QLabel{font: 12pt \"Segoe UI\";color: white;}");
    videoName1->setGeometry(56,210,270,23);
    QLabel *videoDescription1 = new QLabel(ui->scrollArea->widget());
    videoDescription1->setText("NBA · 7,6 млн просмотров · 2 года назад");
    videoDescription1->setStyleSheet("QLabel{font: 8pt \"Segoe UI\";color: grey;}");
    videoDescription1->setGeometry(56,230,270,23);
    QPushButton *button1 = new QPushButton(ui->scrollArea->widget());
    button1->setGeometry(0,0,390,253);
    connect(button1, &QPushButton::clicked, this, [=]() {
        QPixmap px_showPhoto(":/resources/showVideo1.png");
        ui->label->setPixmap(px_showPhoto);

        ui->stackedWidget->setCurrentIndex(1);

        QString filename = "videos/video123.mp4";
        QMediaPlayer* player = new QMediaPlayer(ui->page_2);
        QVideoWidget* video = new QVideoWidget(ui->page_2);
        video->setGeometry(0,0,390,204);
        player->setVideoOutput(video);
        player->setSource(QUrl::fromLocalFile(filename));
        video->show();
        player->play();
    });

    QLabel *picture2 = new QLabel(ui->scrollArea->widget());
    picture2->setStyleSheet("background-color:green;");
    picture2->setGeometry(0, 282, 390, 204);
    QLabel *videoName2 = new QLabel(ui->scrollArea->widget());
    videoName2->setText("I've been training like LeBron James\nfor a week!");
    videoName2->setStyleSheet("QLabel{font: 12pt \"Segoe UI\";color: white;}");
    videoName2->setGeometry(56,492,290,45);
    QLabel *videoDescription2 = new QLabel(ui->scrollArea->widget());
    videoDescription2->setText("NBA · 7,6 млн просмотров · 2 года назад");
    videoDescription2->setStyleSheet("QLabel{font: 8pt \"Segoe UI\";color: grey;}");
    videoDescription2->setGeometry(56,531,270,23);

    QLabel *picture3 = new QLabel(ui->scrollArea->widget());
    picture3->setStyleSheet("background-color:yellow;");
    picture3->setGeometry(0, 564, 390, 204);
    QLabel *videoName3 = new QLabel(ui->scrollArea->widget());
    videoName3->setText("Top 100 NBA Plays of 2021 🔥");
    videoName3->setStyleSheet("QLabel{font: 12pt \"Segoe UI\";color: white;}");
    videoName3->setGeometry(56,774,270,23);
    QLabel *videoDescription3 = new QLabel(ui->scrollArea->widget());
    videoDescription3->setText("NBA · 7,6 млн просмотров · 2 года назад");
    videoDescription3->setStyleSheet("QLabel{font: 8pt \"Segoe UI\";color: grey;}");
    videoDescription3->setGeometry(56,794,270,23);

    QLabel *picture4 = new QLabel(ui->scrollArea->widget());
    picture4->setStyleSheet("background-color:purple;");
    picture4->setGeometry(0, 846, 390, 204);
    QLabel *videoName4 = new QLabel(ui->scrollArea->widget());
    videoName4->setText("Top 100 NBA Plays of 2021 🔥");
    videoName4->setStyleSheet("QLabel{font: 12pt \"Segoe UI\";color: white;}");
    videoName4->setGeometry(56,1056,270,23);
    QLabel *videoDescription4 = new QLabel(ui->scrollArea->widget());
    videoDescription4->setText("NBA · 7,6 млн просмотров · 2 года назад");
    videoDescription4->setStyleSheet("QLabel{font: 8pt \"Segoe UI\";color: grey;}");
    videoDescription4->setGeometry(56,1076,270,23);

    QLabel *picture5 = new QLabel(ui->scrollArea->widget());
    picture5->setStyleSheet("background-color:white;");
    picture5->setGeometry(0, 1128, 390, 204);
    QLabel *videoName5 = new QLabel(ui->scrollArea->widget());
    videoName5->setText("Top 100 NBA Plays of 2021 🔥");
    videoName5->setStyleSheet("QLabel{font: 12pt \"Segoe UI\";color: white;}");
    videoName5->setGeometry(56,1338,270,23);
    QLabel *videoDescription5 = new QLabel(ui->scrollArea->widget());
    videoDescription5->setText("NBA · 7,6 млн просмотров · 2 года назад");
    videoDescription5->setStyleSheet("QLabel{font: 8pt \"Segoe UI\";color: grey;}");
    videoDescription5->setGeometry(56,1358,270,23);


}

void MainWindow::on_pushButton_clicked()
{

}

