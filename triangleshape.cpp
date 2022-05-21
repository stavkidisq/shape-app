#include "triangleshape.h"

TriangleShape::TriangleShape() { }

TriangleShape::TriangleShape(const std::array<QPoint, 3>& _XYCoords)
{
    XYCoords = _XYCoords;
}

void TriangleShape::drawShape(QPainter& ptr)
{
    QPolygon polygon;   // Используем класс полигона, чтобы отрисовать треугольник
    // Помещаем координаты точек в полигональную модель
    polygon << XYCoords[0] << XYCoords[1] << XYCoords[2];
    ptr.drawPolygon(polygon);  // Рисуем треугольник по полигональной модели
}

bool TriangleShape::checkMouseEnter(const QPoint& mousePoint)
{
    int p1 = (XYCoords[0].x() - mousePoint.x())*(XYCoords[1].y()-XYCoords[0].y())-(XYCoords[1].x()-XYCoords[0].x())*(XYCoords[0].y()-mousePoint.y());
    int p2 = (XYCoords[1].x()-mousePoint.x())*(XYCoords[2].y()-XYCoords[1].y())-(XYCoords[2].x()-XYCoords[1].x())*(XYCoords[1].y()-mousePoint.y());
    int p3 = (XYCoords[2].x()-mousePoint.x())*(XYCoords[0].y()-XYCoords[2].y())-(XYCoords[0].x()-XYCoords[2].x())*(XYCoords[2].y()-mousePoint.y());

    if(p1*p2 > 0 && p1*p3 > 0 && p2*p3 > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TriangleShape::showShapeDescription(QPoint & point)
{
    QToolTip::showText(point, "This is triangle shape");
}

TriangleShape::~TriangleShape()
{

}
