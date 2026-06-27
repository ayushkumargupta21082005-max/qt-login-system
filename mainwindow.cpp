#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

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

void MainWindow::on_pushButton_clicked()
{
    QString uxname=  ui->uname->text();
    QString uxpass = ui->upass->text();

    if (uxname =="akg" && uxpass=="12345"){
        hide();
        loguser_sucess = new loginWindow(this);
        loguser_sucess->show();

    }else{
        QMessageBox::critical(this,"login failed","incorrect credentials");

    }
}

