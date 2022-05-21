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

    circleShape.drawCircleShape(painter);
    squareShape.drawSquareShape(painter);
    triangleShape.drawTriangleShape(painter);

    painter.setBrush(GreenShapeBrush);

    if(circleShape.checkMouseEnter(mousePoint))
    {
        circleShape.drawCircleShape(painter);
    }

    if(squareShape.checkMouseEnter(mousePoint))
    {
        squareShape.drawSquareShape(painter);
    }

    if(triangleShape.checkMouseEnter(mousePoint))
    {
        triangleShape.drawTriangleShape(painter);
    }
}

void MyQPainter::mouseMoveEvent(QMouseEvent * event)
{
    mousePoint = event->pos();
    update();
}
