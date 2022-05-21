#ifndef CIRCLESHAPE_H
#define CIRCLESHAPE_H

#include "abstractshape.h"

class CircleShape : public AbstractShape
{
public:
    CircleShape();
    CircleShape(const QPoint& _centerPoint, int _radius);

    QPoint centerPoint;
    int radius;

    virtual int getXCoord(const int index) override { return index; };
    virtual int getYCoord(const int index) override {return index; };

    virtual void drawCircleShape(QPainter&) const;

    ~CircleShape();
};

#endif // CIRCLESHAPE_H
