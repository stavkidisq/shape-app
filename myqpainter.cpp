#include "myqpainter.h"

MyQPainter::MyQPainter(QWidget *parent)
    : QWidget{parent}
{
    this->setMouseTracking(true);
}

void MyQPainter::paintEvent(QPaintEvent*)
{
    QPainter painter(this); // Создаём новый объект рисовальщика
    painter.setPen(QPen(Qt::black, 3, Qt::SolidLine)); // Настройки рисования
    painter.setBrush(QBrush(QColor(0xFA, 0xFE, 0x78))); // Настройка заднего фона фигуры

    for(auto& shape : shapes)
    {
        shape->drawShape(painter);
    }

    painter.setBrush(QBrush(QColor(0, 128, 50)));

    for(auto& shape : shapes)
    {
        if(shape->checkMouseEnter(mousePoint))
            shape->drawShape(painter);
    }
}

void MyQPainter::mouseMoveEvent(QMouseEvent * event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        for(auto& shape : shapes)
        {
            if(shape->checkMouseEnter(mousePoint))
                shape->setXYCoords(mousePoint);
        }
    }

    if(!(event->buttons() & Qt::LeftButton))
    {
        for(auto& shape : shapes)
        {
            if(shape->checkMouseEnter(mousePoint))
                QToolTip::showText(this->mapToGlobal(mousePoint), shape->getShapeDescription());
        }
    }

    mousePoint = event->pos();
    update();
}

void MyQPainter::mousePressEvent(QMouseEvent * event)
{
    if(event->buttons() & Qt::RightButton)
    {
        QMenu* shapeMenu = new QMenu();

        shapeMenu->addAction("Delete", this, SLOT(deleteShape()));
        shapeMenu->popup(this->mapToGlobal(mousePoint));
    }
}

void MyQPainter::deleteShape()
{
    for(size_t index = 0; index < shapes.size(); index++)
    {
        if(shapes.at(index)->checkMouseEnter(mousePoint))
            shapes.erase(shapes.begin() + index);
    }
}
