#ifndef SQUARESHAPE_H
#define SQUARESHAPE_H

#include "abstractshape.h"
#include <QMouseEvent>

class SquareShape : public AbstractShape
{
public:
    SquareShape();
    SquareShape(const std::array<QPoint, 2>& _XYCoords);

    virtual int getXCoord(const int index) override { return index; };
    virtual int getYCoord(const int index) override { return index; };

    virtual bool checkMouseEnter(const QPoint&) override;

    void drawSquareShape(QPainter&) const;

    ~SquareShape();

private:
    std::array<QPoint, 2> XYCoords;
};

#endif // SQUARESHAPE_H
