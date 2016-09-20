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
    //this path will be different on your machine until we get the file system figured out
    player->setMedia(QUrl::fromLocalFile("/Users/trevorcantrell/Desktop/words.wav"));
    player->setVolume(100);
    player->play();
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
