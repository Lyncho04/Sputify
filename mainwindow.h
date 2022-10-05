#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia/QMediaPlayer>

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


    void on_agregarCancion_clicked();

    void on_Playstop_clicked();

private:
    QMediaPlayer*reproductor=new QMediaPlayer(this);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H