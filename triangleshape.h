#ifndef TRIANGLESHAPE_H
#define TRIANGLESHAPE_H

#include "abstractshape.h"
#include <QPainterPath>
#include <QMouseEvent>
#include <QToolTip>

class TriangleShape : public AbstractShape
{
public:
    TriangleShape();
    TriangleShape(const std::array<QPoint, 3>& _XYCoords);

    virtual void drawShape(QPainter&) override;
    virtual bool checkMouseEnter(const QPoint&) override;
    virtual void showShapeDescription(QPoint&) override;

    QString shapeDescription = "This is triangle shape";

    ~TriangleShape();
private:
    std::array<QPoint, 3> XYCoords;
};

#endif // TRIANGLESHAPE_H
