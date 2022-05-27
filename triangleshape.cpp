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
    auto getBorder = [mousePoint](const QPoint& a, const QPoint& b)
    {
        return (a.x() - mousePoint.x())*(b.y() - a.y()) - (b.x() - a.x())*(a.y() - mousePoint.y());
    };

    int p1 = getBorder(XYCoords[0], XYCoords[1]);
    int p2 = getBorder(XYCoords[1], XYCoords[2]);
    int p3 = getBorder(XYCoords[2], XYCoords[0]);

    if(p1*p2 > 0 && p1*p3 > 0 && p2*p3 > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

QString TriangleShape::getShapeDescription()
{
    return "This is triangle shape";
}

void TriangleShape::setXYCoords(const QPoint& point)
{  
    QPoint sumPoint = XYCoords[0] + XYCoords[1] + XYCoords[2];
    QPoint center = QPoint(sumPoint.x() / 3, sumPoint.y() / 3);

    QPoint dot = center - point;

    XYCoords[0] = XYCoords[0] - dot;
    XYCoords[1] = XYCoords[1] - dot;
    XYCoords[2] = XYCoords[2] - dot;
}

TriangleShape::~TriangleShape()
{

}
