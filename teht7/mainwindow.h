#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qtimer.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();


private slots:
    void on_stopBtn_clicked();

    void on_twoMin_clicked();

    void on_fiveMin_clicked();

    void on_startBtn_clicked();

    void on_switch1_clicked();

    void on_switch2_clicked();

private:
    short player1Time= 0;
    short player2Time = 0;
    short currentplayer;
    short gameTime;
    void updateProgressBar();
    void setGameInfoText(QString);
    QTimer * pQTimer;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
