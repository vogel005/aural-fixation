#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>

QMediaPlayer *player = new QMediaPlayer;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

//Play Button
//note - play() starts from beginning. does not resume if paused prior to press
void MainWindow::on_playButton_clicked()
{
    if(!player->state() == player->PlayingState)
    {
        player->setMedia(QUrl::fromLocalFile("../res/words.wav"));
        player->setVolume(100);
        player->play();
    }
    //this path will be different on your machine until we get the file system figured out
    else{

    }

    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &MainWindow::on_durationChanged);

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
