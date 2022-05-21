#ifndef MYQPAINTER_H
#define MYQPAINTER_H

#include <QWidget>
#include <QToolTip>

#include <triangleshape.h>
#include <squareshape.h>
#include <circleshape.h>

class MyQPainter : public QWidget
{
    Q_OBJECT

public:
    explicit MyQPainter(QWidget *parent = nullptr);

    enum Shape { Circle, Square, Triangle } shapeType;

    CircleShape circleShape;
    TriangleShape triangleShape;
    SquareShape squareShape;

    QPoint mousePoint;

    QBrush YellowShapeBrush = QBrush(QColor(0xFA, 0xFE, 0x78));
    QBrush GreenShapeBrush = QBrush(QColor(0, 128, 50));

protected:
    virtual void paintEvent(QPaintEvent*) override;
    virtual void mouseMoveEvent(QMouseEvent*) override;

    void checkShapeType(AbstractShape&) const;
signals:

};

#endif // MYQPAINTER_H
