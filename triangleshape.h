#ifndef TRIANGLESHAPE_H
#define TRIANGLESHAPE_H

#include "abstractshape.h"
#include <QPainterPath>

class TriangleShape : public AbstractShape
{
public:
    TriangleShape();
    TriangleShape(std::array<QPoint, 3> _XYCoords);

    std::array<QPoint, 3> XYCoords;

    virtual int getXCoord(int index) override
    {
        if(index < (int)XYCoords.size())
            return XYCoords[index].x();
        else
            return 0;
    }

    virtual int getYCoord(const int index) override { return index; };

    void drawTriangleShape(QPainter&) const;

    ~TriangleShape();
};

#endif // TRIANGLESHAPE_H
