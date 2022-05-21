#include "triangleshape.h"

TriangleShape::TriangleShape() { }

TriangleShape::TriangleShape(std::array<QPoint, 3> _XYCoords)
{
    XYCoords = _XYCoords;
}

void TriangleShape::drawTriangleShape(QPainter& ptr) const
{
    QPolygon polygon;   // Используем класс полигона, чтобы отрисовать треугольник
    // Помещаем координаты точек в полигональную модель
    polygon << XYCoords[0] << XYCoords[1] << XYCoords[2];
    ptr.drawPolygon(polygon);  // Рисуем треугольник по полигональной модели
}

TriangleShape::~TriangleShape()
{

}
