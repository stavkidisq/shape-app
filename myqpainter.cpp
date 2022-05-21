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
}
