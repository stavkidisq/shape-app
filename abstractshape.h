#ifndef ABSTRACTSHAPE_H
#define ABSTRACTSHAPE_H

#include <QPainter>

class AbstractShape
{
public:
    virtual bool checkMouseEnter(const QPoint&) = 0;
    virtual void drawShape(QPainter&) = 0;
    virtual QString getShapeDescription() = 0;
    virtual void setXYCoords(const QPoint&) = 0;
};

#endif // ABSTRACTSHAPE_H
