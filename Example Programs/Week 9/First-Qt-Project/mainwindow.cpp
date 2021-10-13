#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>

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


void MainWindow::on_click_me_button_clicked()
{
    std::cout<<"The button was clicked"<<std::endl;
    ui->msg_label->setText("Oops.. you clicked on the button...");
}


void MainWindow::on_actionQuit_triggered()
{
    qApp->exit(0);
}

