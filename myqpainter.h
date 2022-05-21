#ifndef MYQPAINTER_H
#define MYQPAINTER_H

#include <QWidget>

#include<triangleshape.h>
#include<squareshape.h>
#include<circleshape.h>

class MyQPainter : public QWidget
{
    Q_OBJECT

public:
    explicit MyQPainter(QWidget *parent = nullptr);

    enum Shape { Circle, Square, Triangle } shapeType;

    CircleShape circleShape;
    TriangleShape triangleShape;
    SquareShape squareShape;

protected:
    void paintEvent(QPaintEvent*);
    void checkShapeType(AbstractShape&) const;
signals:

};

#endif // MYQPAINTER_H
