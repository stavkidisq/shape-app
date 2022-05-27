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
    virtual QString getShapeDescription() override;
    virtual void setXYCoords(const QPoint&) override;

    ~SquareShape();

private:
    std::array<QPoint, 2> XYCoords;
};

#endif // SQUARESHAPE_H
