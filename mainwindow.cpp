#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <abstractshape.h>
#include <myqpainter.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wgt = new MyQPainter(this);

    wgt->circleShape = CircleShape(QPoint(250, 100), 200);
    wgt->triangleShape = TriangleShape({QPoint(100, 30), QPoint(100, 100), QPoint(50, 65)});
    wgt->squareShape = SquareShape({QPoint(200, 300), QPoint(100, 150)});

    ui->verticalLayout->addWidget(wgt);
    ui->retranslateUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

