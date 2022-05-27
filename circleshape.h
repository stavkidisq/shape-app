#ifndef CIRCLESHAPE_H
#define CIRCLESHAPE_H

#include "abstractshape.h"
#include <QMouseEvent>
#include <QToolTip>

class CircleShape : public AbstractShape
{
public:
    CircleShape();
    CircleShape(const QPoint& _centerPoint, const int _radius);

    virtual bool checkMouseEnter(const QPoint&) override;
    virtual void drawShape(QPainter&) override;
    virtual void showShapeDescription(QPoint&) override;
    virtual void setXYCoords(const QPoint&) override;

    virtual int getX(const int index) override;
    virtual int getY(const int index) override;

    ~CircleShape();

private:
    QPoint centerPoint;
    int radius;
};

#endif // CIRCLESHAPE_H
