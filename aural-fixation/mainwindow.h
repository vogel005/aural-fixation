#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

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

    //void on_pauseButton_clicked();
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> trevor_c_branch

    void on_SliderProgress_sliderMoved(int position);
>>>>>>> trevor_c_branch

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    void on_progressBar_valueChanged(int value);
=======
    void on_actionAddNewTrack_triggered();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
>>>>>>> trevor_c_branch
=======
    void on_actionAddNewTrack_triggered();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
>>>>>>> trevor_c_branch
=======
    void on_actionAddNewTrack_triggered();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
>>>>>>> trevor_c_branch

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
