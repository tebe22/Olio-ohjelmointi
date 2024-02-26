#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    setGameInfoText("S E L E C T   P L A Y   T I M E");
    ui->progressBar->setRange(0,100);
    ui->progressBar->setValue(0);
    ui->progressBar_2->setRange(0,100);
    ui->progressBar_2->setValue(0);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));


}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::timeout(){

    updateProgressBar();

    if (currentplayer == 1){
        player1Time++;

        if (player1Time == gameTime){
            pQTimer->stop();
             setGameInfoText("Player 2 Won");
    }
    else {
        player2Time++;


        if (player2Time == gameTime) {
            pQTimer->stop();
            setGameInfoText("Player 1 Won");

        }
    }

}
}

void MainWindow::setGameInfoText(QString u)
{
    ui->label->setText(u);
}

void MainWindow::on_stopBtn_clicked()

{

    player1Time = 0;
    player2Time = 0;
    updateProgressBar();
    pQTimer->stop();

    setGameInfoText("New game via start button");
}

void MainWindow::on_twoMin_clicked()
{
    gameTime = 120;
    setGameInfoText("Redy to play");
    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);
}


void MainWindow::on_fiveMin_clicked()
{
    gameTime = 300;
    setGameInfoText("Redy to play");

}

void MainWindow::updateProgressBar()
{
    int remainingTime1 = gameTime - player1Time;
    int remainingTime2 = gameTime - player2Time;

    int bar1 = remainingTime1 * 100 / gameTime;
    int bar2 = remainingTime2 * 100 / gameTime;

    ui ->progressBar->setValue(bar1);
    ui ->progressBar_2->setValue(bar2);

}



void MainWindow::on_startBtn_clicked()
{
    pQTimer->start(1000);

    currentplayer = 1;
    setGameInfoText("Game ongoing");
    updateProgressBar();


}


void MainWindow::on_switch1_clicked()
{
    currentplayer = 2;
}


void MainWindow::on_switch2_clicked()
{
    currentplayer = 1;
}

