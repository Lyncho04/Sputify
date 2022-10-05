#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDir>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_agregarCancion_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, "Elija la cancion a agregar");//conseguir nombre de este archivo
    QString Bibliotecadir="C:/Users/hevam_mxlc1ie/OneDrive/Documents";
    QDir(Bibliotecadir).mkdir("C:/Users/hevam_mxlc1ie/OneDrive/Documents/Biblioteca");
    Bibliotecadir="C:/Users/hevam_mxlc1ie/OneDrive/Documents/Biblioteca";
    QDir(Bibliotecadir).rename(filename,Bibliotecadir);

























}



void MainWindow::on_Playstop_clicked()
{
}

