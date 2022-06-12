#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QMediaPlayer>
#include <QMediaPlaylist>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void Play();
    void Pause();
    void FindSong();
    void CurrentMusicChanged(QMediaContent song);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *mPlayer;
    QMediaPlaylist *mPlayList;
};
#endif // MAINWINDOW_H
