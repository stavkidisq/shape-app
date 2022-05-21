#include "circleshape.h"

CircleShape::CircleShape() { }

CircleShape::CircleShape(const QPoint& _centerPoint, const int _radius)
{
    centerPoint = _centerPoint;
    radius = _radius;
}

void CircleShape::drawShape(QPainter& painter)
{
    painter.drawEllipse(centerPoint, radius, radius);
}

bool CircleShape::checkMouseEnter(const QPoint& mousePoint)
{
    if(pow(mousePoint.y() - centerPoint.y(), 2) + pow(mousePoint.x() - (centerPoint.x()), 2) < pow(radius, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void CircleShape::showShapeDescription(QPoint & point)
{
    QToolTip::showText(point, "This is circle shape");
}

CircleShape::~CircleShape()
{

}
