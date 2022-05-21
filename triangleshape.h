#ifndef TRIANGLESHAPE_H
#define TRIANGLESHAPE_H

#include "abstractshape.h"
#include <QPainterPath>
#include <QMouseEvent>

class TriangleShape : public AbstractShape
{
public:
    TriangleShape();
    TriangleShape(const std::array<QPoint, 3>& _XYCoords);

    virtual int getXCoord(int index) override
    {
        if(index < (int)XYCoords.size())
            return XYCoords[index].x();
        else
            return 0;
    }

    virtual int getYCoord(const int index) override
    {
        if(index < (int)XYCoords.size())
            return XYCoords[index].y();
        else
            return 0;
    };

    void drawTriangleShape(QPainter&) const;
    virtual bool checkMouseEnter(const QPoint&) override;

    ~TriangleShape();
private:
    std::array<QPoint, 3> XYCoords;
};

#endif // TRIANGLESHAPE_H
