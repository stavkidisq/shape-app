#ifndef SQUARESHAPE_H
#define SQUARESHAPE_H

#include "abstractshape.h"

class SquareShape : public AbstractShape
{
public:
    SquareShape();
    SquareShape(std::array<QPoint, 2> _XYCoords);

    std::array<QPoint, 2> XYCoords;

    virtual int getXCoord(const int index) override { return index; };
    virtual int getYCoord(const int index) override { return index; };

    void drawSquareShape(QPainter&) const;

    ~SquareShape();
};

#endif // SQUARESHAPE_H
