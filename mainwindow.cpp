#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <abstractshape.h>
#include <myqpainter.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wgt = std::make_unique<MyQPainter>(new MyQPainter(this));

    wgt->shapes.push_back(std::unique_ptr<AbstractShape>(new CircleShape(QPoint(300, 100), 50)));
    wgt->shapes.push_back(std::unique_ptr<AbstractShape>(new TriangleShape({ QPoint(100, 30), QPoint(100, 100), QPoint(50, 65) })));
    wgt->shapes.push_back(std::unique_ptr<AbstractShape>(new SquareShape({QPoint(200, 300), QPoint(100, 150)})));

    ui->verticalLayout->addWidget(wgt.get());

    wgt->setMouseTracking(true);

    ui->retranslateUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

