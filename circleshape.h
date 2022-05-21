#ifndef CIRCLESHAPE_H
#define CIRCLESHAPE_H

#include "abstractshape.h"
#include <QMouseEvent>

class CircleShape : public AbstractShape
{
public:
    CircleShape();
    CircleShape(const QPoint& _centerPoint, const int _radius);

    virtual bool checkMouseEnter(const QPoint&) override;

    void drawCircleShape(QPainter&) const;

    virtual int getXCoord(const int index) override { return index; };
    virtual int getYCoord(const int index) override { return index; };

    ~CircleShape();

private:
    QPoint centerPoint;
    int radius;
};

#endif // CIRCLESHAPE_H
