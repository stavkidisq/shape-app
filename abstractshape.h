#ifndef ABSTRACTSHAPE_H
#define ABSTRACTSHAPE_H

#include <QPainter>

class AbstractShape
{
public:
    virtual int getXCoord(const int index) = 0;
    virtual int getYCoord(const int index) = 0;
};

#endif // ABSTRACTSHAPE_H
