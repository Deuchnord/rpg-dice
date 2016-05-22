#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdlib.h>
#include <time.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->result->setStyleSheet("font-size: 200px");
    srand(time(NULL));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int nbDice = ui->nbDice->value(),
            nbFace = ui->nbFaces->value(),
            result = 0;

    for(int i = 0; i < nbDice ; i++)
        result += rand() % nbFace + 1;

    ui->result->setText(QString::number(result));
}
