#ifndef MYQPAINTER_H
#define MYQPAINTER_H

#include <QWidget>
#include <QToolTip>
#include <QGraphicsSceneMouseEvent>
#include <QMenu>

#include <triangleshape.h>
#include <squareshape.h>
#include <circleshape.h>

class MyQPainter : public QWidget
{
    Q_OBJECT

public:
    explicit MyQPainter(QWidget *parent = nullptr);

    std::vector<std::shared_ptr<AbstractShape>> shapes;
    CircleShape cShape;

    QPoint mousePoint;

protected:
    virtual void paintEvent(QPaintEvent*) override;
    virtual void mouseMoveEvent(QMouseEvent*) override;
    virtual void mousePressEvent(QMouseEvent*) override;

    size_t hoverShapeIndex = 0;
protected slots:
  void deleteShape();
};

#endif // MYQPAINTER_H
