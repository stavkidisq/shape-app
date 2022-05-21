#include "squareshape.h"

SquareShape::SquareShape() { }

SquareShape::SquareShape(const std::array<QPoint, 2>& _XYCoords)
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

bool SquareShape::checkMouseEnter(const QPoint& mousePoint)
{
    if(mousePoint.y() <= XYCoords[0].y() && mousePoint.y() >= XYCoords[1].y()
            && mousePoint.x() <= XYCoords[0].x() && mousePoint.x() >= XYCoords[1].x())
    {
        return true;
    }
    else
    {
        return false;
    }
}

SquareShape::~SquareShape()
{

}
