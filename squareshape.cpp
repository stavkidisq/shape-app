#include "squareshape.h"

SquareShape::SquareShape() { }

SquareShape::SquareShape(std::array<QPoint, 2> _XYCoords)
{
    XYCoords = _XYCoords;
}

void SquareShape::drawSquareShape(QPainter& ptr) const
{
    QPolygon polygon;   // Используем класс полигона, чтобы отрисовать треугольник
    // Помещаем координаты точек в полигональную модель
    polygon << XYCoords[0] << QPoint(XYCoords[0].x(), XYCoords[1].y()) << XYCoords[1] << QPoint(XYCoords[1].x(), XYCoords[0].y());
    ptr.drawPolygon(polygon);  // Рисуем треугольник по полигональной модели
}

SquareShape::~SquareShape()
{

}
