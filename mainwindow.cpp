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
    QLabel *logoYoutube1 = new QLabel(ui->scrollArea->widget());
    QPixmap pxLogoYt1(":/resources/logoYoutube1.png");
    logoYoutube1->setPixmap(pxLogoYt1);
    logoYoutube1->setGeometry(12,214,33,33);
    QPushButton *button1 = new QPushButton(ui->scrollArea->widget());
    button1->setGeometry(0,0,390,255);
    connect(button1, &QPushButton::clicked, this, [=]() {

        ui->VideoName->setText("Top 100 NBA Plays of 2021 🔥");
        ui->VideoDescription->setText("NBA · 7,6 млн просмотров · 2 года назад");
        ui->ChannelName->setText("NBA");
        ui->counterLikes->setText("578 тыс.");
        QPixmap pxLogoYT(":/resources/logoYoutube1.png");
        ui->YouTubeLogo->setPixmap(pxLogoYT);

        QPixmap px_showPhoto(":/resources/showVideo1.png");
        ui->VideoPhoto->setPixmap(px_showPhoto);

        ui->stackedWidget->setCurrentIndex(1);
        QTimer::singleShot(2000, [&]() {
        QString filename = "videos/video1.mp4";
        QMediaPlayer* player = new QMediaPlayer(ui->page_2);
        QVideoWidget* video = new QVideoWidget(ui->page_2);
        video->setGeometry(0,0,390,204);
        player->setVideoOutput(video);
        player->setSource(QUrl::fromLocalFile(filename));
        video->show();
        player->play();
        });
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
    QLabel *logoYoutube2 = new QLabel(ui->scrollArea->widget());
    QPixmap pxLogoYt2(":/resources/logoYoutube1.png");
    logoYoutube2->setPixmap(pxLogoYt2);
    logoYoutube2->setGeometry(12,496,33,33);
    QPushButton *button2 = new QPushButton(ui->scrollArea->widget());
    button2->setGeometry(0,282,390,260);
    connect(button2, &QPushButton::clicked, this, [=]() {

        ui->VideoName->setText("Top 100 NBA Plays of 2021 🔥");
        ui->VideoDescription->setText("NBA · 7,6 млн просмотров · 2 года назад");
        ui->ChannelName->setText("NBA");
        ui->counterLikes->setText("578 тыс.");
        QPixmap pxLogoYT(":/resources/logoYoutube1.png");
        ui->YouTubeLogo->setPixmap(pxLogoYT);

        QPixmap px_showPhoto(":/resources/showVideo1.png");
        ui->VideoPhoto->setPixmap(px_showPhoto);

        ui->stackedWidget->setCurrentIndex(1);
        QTimer::singleShot(2000, [&]() {
            QString filename = "videos/video1.mp4";
            QMediaPlayer* player = new QMediaPlayer(ui->page_2);
            QVideoWidget* video = new QVideoWidget(ui->page_2);
            video->setGeometry(0,0,390,204);
            player->setVideoOutput(video);
            player->setSource(QUrl::fromLocalFile(filename));
            video->show();
            player->play();
        });
    });


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
    QLabel *logoYoutube3 = new QLabel(ui->scrollArea->widget());
    QPixmap pxLogoYt3(":/resources/logoYoutube1.png");
    logoYoutube3->setPixmap(pxLogoYt3);
    logoYoutube3->setGeometry(12,778,33,33);
    QPushButton *button3 = new QPushButton(ui->scrollArea->widget());
    button3->setGeometry(0,564,390,253);
    connect(button3, &QPushButton::clicked, this, [=]() {

        ui->VideoName->setText("Top 100 NBA Plays of 2021 🔥");
        ui->VideoDescription->setText("NBA · 7,6 млн просмотров · 2 года назад");
        ui->ChannelName->setText("NBA");
        ui->counterLikes->setText("578 тыс.");
        QPixmap pxLogoYT(":/resources/logoYoutube1.png");
        ui->YouTubeLogo->setPixmap(pxLogoYT);

        QPixmap px_showPhoto(":/resources/showVideo1.png");
        ui->VideoPhoto->setPixmap(px_showPhoto);

        ui->stackedWidget->setCurrentIndex(1);
        QTimer::singleShot(2000, [&]() {
            QString filename = "videos/video1.mp4";
            QMediaPlayer* player = new QMediaPlayer(ui->page_2);
            QVideoWidget* video = new QVideoWidget(ui->page_2);
            video->setGeometry(0,0,390,204);
            player->setVideoOutput(video);
            player->setSource(QUrl::fromLocalFile(filename));
            video->show();
            player->play();
        });
    });



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
    QLabel *logoYoutube4 = new QLabel(ui->scrollArea->widget());
    QPixmap pxLogoYt4(":/resources/logoYoutube1.png");
    logoYoutube4->setPixmap(pxLogoYt4);
    logoYoutube4->setGeometry(12,1060,33,33);
    QPushButton *button4 = new QPushButton(ui->scrollArea->widget());
    button4->setGeometry(0,846,390,253);
    connect(button4, &QPushButton::clicked, this, [=]() {

        ui->VideoName->setText("Top 100 NBA Plays of 2021 🔥");
        ui->VideoDescription->setText("NBA · 7,6 млн просмотров · 2 года назад");
        ui->ChannelName->setText("NBA");
        ui->counterLikes->setText("578 тыс.");
        QPixmap pxLogoYT(":/resources/logoYoutube1.png");
        ui->YouTubeLogo->setPixmap(pxLogoYT);

        QPixmap px_showPhoto(":/resources/showVideo1.png");
        ui->VideoPhoto->setPixmap(px_showPhoto);

        ui->stackedWidget->setCurrentIndex(1);
        QTimer::singleShot(2000, [&]() {
            QString filename = "videos/video1.mp4";
            QMediaPlayer* player = new QMediaPlayer(ui->page_2);
            QVideoWidget* video = new QVideoWidget(ui->page_2);
            video->setGeometry(0,0,390,204);
            player->setVideoOutput(video);
            player->setSource(QUrl::fromLocalFile(filename));
            video->show();
            player->play();
        });
    });



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
    QLabel *logoYoutube5 = new QLabel(ui->scrollArea->widget());
    QPixmap pxLogoYt5(":/resources/logoYoutube1.png");
    logoYoutube5->setPixmap(pxLogoYt5);
    logoYoutube5->setGeometry(12,1342,33,33);
    QPushButton *button5 = new QPushButton(ui->scrollArea->widget());
    button5->setGeometry(0,1128,390,253);
    connect(button5, &QPushButton::clicked, this, [=]() {

        ui->VideoName->setText("Top 100 NBA Plays of 2021 🔥");
        ui->VideoDescription->setText("NBA · 7,6 млн просмотров · 2 года назад");
        ui->ChannelName->setText("NBA");
        ui->counterLikes->setText("578 тыс.");
        QPixmap pxLogoYT(":/resources/logoYoutube1.png");
        ui->YouTubeLogo->setPixmap(pxLogoYT);

        QPixmap px_showPhoto(":/resources/showVideo1.png");
        ui->VideoPhoto->setPixmap(px_showPhoto);

        ui->stackedWidget->setCurrentIndex(1);
        QTimer::singleShot(2000, [&]() {
            QString filename = "videos/video1.mp4";
            QMediaPlayer* player = new QMediaPlayer(ui->page_2);
            QVideoWidget* video = new QVideoWidget(ui->page_2);
            video->setGeometry(0,0,390,204);
            player->setVideoOutput(video);
            player->setSource(QUrl::fromLocalFile(filename));
            video->show();
            player->play();
        });
    });

}

void MainWindow::on_buttonHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

