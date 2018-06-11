#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    /* comment lancer l'autre dialog */
    //dialog.exec();
    qDebug()<<"on cherche";
}
