#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMediaPlayer"
#include <QMediaMetaData>
#include "QDebug"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    player  = new QMediaPlayer;
        connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(retoura0(qint64)));

        //connect(player, SIGNAL(audioAvailableChanged(bool)), this, SLOT(retoura0(bool)));
        //Signale que le statut du média actuel a changé.
        connect(player, SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus )), this, SLOT(returnMediastatus(QMediaPlayer::MediaStatus )));
        //Signale que le paramettre de "mute" a changé
        connect(player, SIGNAL(mutedChanged(bool )), this, SLOT(returnmutedchanged0(bool )));
        //Signale que le point d'accès réseau actif a été modifié en configuration et que tous les accès réseau ultérieurs utiliseront cette configuration.
        connect(player, SIGNAL(networkConfigurationChanged(const QNetworkConfiguration )), this, SLOT(returnnetworkConfigurationChanged(const QNetworkConfiguration)));
        //Signale des que le taux de lecture a été modifié.
        connect(player, SIGNAL(playbackRateChanged(qreal)), this, SLOT(returnplaybackRateChanged(qreal)));
        //Signale sur le changement lors de la recherche d'un status du player
        connect(player, SIGNAL(seekableChanged(bool)), this, SLOT(returnseekableChanged(bool)));
        //Signale lors de l'etat du players a changé
        connect(player, SIGNAL(stateChanged(QMediaPlayer::State)), this, SLOT(returnstateChanged(QMediaPlayer::State)));
        //Signale lors du changement du flux video valide(fonctionnelle)
        connect(player, SIGNAL(videoAvailableChanged(bool)), this, SLOT(returnvideoAvailableChanged(bool)));
        //Signale lors du changement du volume du lecteur
        connect(player, SIGNAL(volumeChanged(int)), this, SLOT(returnvolumeChanged(int)));





        player->setMedia(QUrl("http://radioclassique.ice.infomaniak.ch/radioclassique-high.mp3"));
        player->setVolume(50);
        player->play();

        connect(player, SIGNAL(metaDataChanged(QString,QVariant)), this, SLOT(modifmetadata(QString,QVariant)));
        QStringList radio;



        radio.append("http://www.skyrock.fm/stream.php/tunein16_128mp3.mp3");
        radio.append("http://e1-live-mp3-128.scdn.arkena.com/europe1.mp3");
        radio.append("http://mp3lg4.tdf-cdn.com/9243/lag_164753.mp3");
        radio.append("http://rmc.bfmtv.com/rmcinfo-mp3");
        radio.append("http://cdn.nrjaudio.fm/audio1/fr/30001/mp3_128.mp3?origine=fluxradios");
        radio.append("http://direct.mouv.fr/live/mouv-midfi.mp3");
        radio.append("http://radiofg.impek.com/fg");
        radio.append("http://streaming.radio.rtl2.fr/rtl2-1-44-128");
         radio.append("http://novazz.ice.infomaniak.ch/novazz-128.mp3");
         radio.append("http://icecast.funradio.fr/fun-1-48-192");


        ui->comboBox_Radio->addItems(radio);

        connect(ui->comboBox_Radio, SIGNAL(currentTextChanged(QString)),
                this, SLOT(changeflux(QString)));


    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }

    void MainWindow::modifmetadata(QString key, QVariant data)

    {

        //qDebug() << player->metaData("Title");
        //qDebug()<< player->metaData(QMediaMetaData::Duration).toString();
        //qDebug() << player->metaData(key);

         qDebug() << key << data;


       /* for ( const auto& metai : player->QMediaPlayer::availableMetaData()  )
        {
            qDebug() << key;
        }*/

    }

    void MainWindow::changeflux(QString rd)
    {
        qDebug() << "**********************";
        player->setMedia(QUrl(rd));
        player->play();
    }

    void MainWindow::retoura0(bool num)
    {
        qDebug() << num<<"retoura0";
    }

    void MainWindow::returnMediastatus(QMediaPlayer::MediaStatus status)
    {
        qDebug()<< status<<"returnMediastatus";
    }

    void MainWindow::returnMediastatus(bool muted)
    {
        qDebug()<< muted<<"returnMediastatus";
    }

    void MainWindow::returnnetworkConfigurationChanged(const QNetworkConfiguration netconf)
    {
        qDebug()<< netconf.identifier()<<"returnnetworkConfigurationChanged";
    }

    void MainWindow::returnplaybackRateChanged(qreal rate)
    {
        qDebug()<< rate<<"returnplaybackRateChanged";
    }

    void MainWindow::returnseekableChanged(bool seekable)
    {
        qDebug()<< seekable<<"returnseekableChanged";
    }

    void MainWindow::returnstateChanged(QMediaPlayer::State state)
    {
        qDebug()<< state<<"returnstateChanged";
    }

    void MainWindow::returnvideoAvailableChanged(bool videoAvailable)
    {
        qDebug()<< videoAvailable<<"returnvideoAvailableChanged";
    }

    void MainWindow::returnvolumeChanged(int volume)
    {
        qDebug()<< volume<<"returnvolumeChanged";
    }
