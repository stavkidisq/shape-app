#ifndef ABSTRACTSHAPE_H
#define ABSTRACTSHAPE_H

#include <QPainter>

class AbstractShape
{
public:

    virtual int getX(const int index) = 0;
    virtual int getY(const int index) = 0;

    virtual bool checkMouseEnter(const QPoint&) = 0;
    virtual void drawShape(QPainter&) = 0;
    virtual void showShapeDescription(QPoint&) = 0;
    virtual void setXYCoords(const QPoint&) = 0;
};

#endif // ABSTRACTSHAPE_H
