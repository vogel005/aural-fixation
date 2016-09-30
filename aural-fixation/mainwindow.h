#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playlist.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_playButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_pauseButton_clicked();

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);

    void on_progressBar_valueChanged(int value);

    void on_action_Add_New_Track_triggered();

private:
    Ui::MainWindow *ui;
    Playlist* _playlist;
};

#endif // MAINWINDOW_H
