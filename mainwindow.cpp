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

    wgt->shapes.push_back(std::shared_ptr<AbstractShape>(new CircleShape(QPoint(300, 100), 50)));
    wgt->shapes.push_back(std::shared_ptr<AbstractShape>(new TriangleShape({ QPoint(150, 100), QPoint(180, 100), QPoint(140, 50) })));
    wgt->shapes.push_back(std::shared_ptr<AbstractShape>(new SquareShape({QPoint(300, 300), QPoint(150, 150)})));

    ui->verticalLayout->addWidget(wgt.get());

    //wgt->setMouseTracking(true);

    ui->retranslateUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

