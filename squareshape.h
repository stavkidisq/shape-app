#ifndef SQUARESHAPE_H
#define SQUARESHAPE_H

#include "abstractshape.h"
#include <QMouseEvent>
#include <QToolTip>

class SquareShape : public AbstractShape
{
public:
    SquareShape();
    SquareShape(const std::array<QPoint, 2>& _XYCoords);

    virtual bool checkMouseEnter(const QPoint&) override;
    virtual void drawShape(QPainter&) override;
    virtual void showShapeDescription(QPoint&) override;
    virtual void setXYCoords(const QPoint&) override;

    virtual int getX(const int index) override;
    virtual int getY(const int index) override;

    ~SquareShape();

private:
    std::array<QPoint, 2> XYCoords;
};

#endif // SQUARESHAPE_H
