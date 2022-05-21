#include "myqpainter.h"

MyQPainter::MyQPainter(QWidget *parent)
    : QWidget{parent}
{
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
    mousePoint = event->pos();
    update();
}

void MyQPainter::mousePressEvent(QMouseEvent *)
{
    for(auto& shape : shapes)
    {
        if(shape->checkMouseEnter(mousePoint))
        {
            shape->showShapeDescription(mousePoint);
        }
    }

    repaint();
}
