#ifndef CIRCLESHAPE_H
#define CIRCLESHAPE_H

#include "abstractshape.h"
#include <QMouseEvent>
#include <QToolTip>

class CircleShape : public AbstractShape
{
public:
    CircleShape();
    CircleShape(const QPoint& _centerPoint, const int _radius);

    virtual bool checkMouseEnter(const QPoint&) override;
    virtual void drawShape(QPainter&) override;
    virtual QString getShapeDescription() override;
    virtual void setXYCoords(const QPoint&) override;

    ~CircleShape();

private:
    QPoint centerPoint;
    int radius;
};

#endif // CIRCLESHAPE_H
