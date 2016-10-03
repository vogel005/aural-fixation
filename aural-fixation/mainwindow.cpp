#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qlistwidget.h"
#include <QListWidget>
#include <QListWidgetItem>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QMessageBox>


QMediaPlayer* player;
QString filename;

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
    ui->listWidget->item(0)->setText("Symphony track");
    ui->currentSong->setText("Symphony Track");
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
        ui->playButton->setText("Pause");
        player->play();

    }
    else{
        ui->playButton->setText("Play");
        player->pause();
    }



}

//Volume Slider
void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    player->setVolume(position);
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

void MainWindow::on_actionAddNewTrack_triggered()
{
    //save the filename
    filename = QFileDialog::getOpenFileName(this, tr("Open File MMRS"), "C://", "Music File(*.mp3 *.wav *.wma);;");
    //takes only the file name without the path
    QFile f(filename);
    QString name = f.fileName();
    QStringList parts = name.split("/");
    QString lastBit = parts.at(parts.size()-1);

    //add the item to the UI list
    ui->listWidget->addItem(lastBit);
    ui->playButton->setText("Play");
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    player->setMedia(QUrl::fromLocalFile(filename));
    ui->currentSong->setText(item->text());
}
