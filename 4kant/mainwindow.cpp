#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene =new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    square = new MySquare();
    scene->addItem(square);
}

MainWindow::~MainWindow()
{
    delete ui;

}

