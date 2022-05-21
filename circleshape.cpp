#include "circleshape.h"

CircleShape::CircleShape() { }

CircleShape::CircleShape(const QPoint& _centerPoint, int _radius)
{
    centerPoint = _centerPoint;
    radius = _radius;
}

void CircleShape::drawCircleShape(QPainter& painter) const
{
    painter.drawEllipse(QRect(centerPoint.x(), centerPoint.y(), radius, radius));
}

CircleShape::~CircleShape()
{

}
