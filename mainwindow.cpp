//here we define functionality for our app.
#include "mainwindow.h"//header file, defines classes like MainWindow
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//set up ui
    //this->setCentralWidget(ui->textEdit);//textEdit);
    //no member textEdit?
    //central widget will take up all of screen
}

MainWindow::~MainWindow()
{
    delete ui;
}

