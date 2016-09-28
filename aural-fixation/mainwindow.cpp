#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>

QMediaPlayer* player;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    player = new QMediaPlayer;
    ui->setupUi(this);
    player->setMedia(QUrl::fromLocalFile("../res/Sample.mp3"));
    player->setVolume(100);
    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &MainWindow::on_durationChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Play Button
//note - play() starts from beginning. does not resume if paused prior to press
void MainWindow::on_playButton_clicked()
{
    if(!player->state() == player->PlayingState || player->state() == player->PausedState)
    {
        player->play();
    }
    //this path will be different on your machine until we get the file system figured out
    else{
        player->pause();
    }



}

//Volume Slider
void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    player->setVolume(position);
}

//Pause Button
void MainWindow::on_pauseButton_clicked()
{
    player->pause();
}

void MainWindow::on_SliderProgress_sliderMoved(int position)
{
    player->setPosition(position);
}

void MainWindow::on_positionChanged(qint64 position)
{
    ui->SliderProgress->setValue(position);
}

void MainWindow::on_durationChanged(qint64 position)
{
    ui->SliderProgress->setMaximum(position);
}
