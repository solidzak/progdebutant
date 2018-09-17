#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QMediaPlayer"
#include <QMediaMetaData>
#include "QDebug"
#include "QString"
#include "QVariant"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMediaPlayer *player;

private:
    Ui::MainWindow *ui;
private slots:
    void modifmetadata(QString,QVariant);
    void changeflux(QString);
    void retoura0(bool num);
    void returnMediastatus(QMediaPlayer::MediaStatus );
    void returnMediastatus(bool );
    void returnnetworkConfigurationChanged(const QNetworkConfiguration);
    void returnplaybackRateChanged(qreal);
    void returnseekableChanged(bool seekable);
    void returnstateChanged(QMediaPlayer::State state);
    void returnvideoAvailableChanged(bool videoAvailable);
    void returnvolumeChanged(int volume);

};

#endif // MAINWINDOW_H
