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

    std::vector<std::unique_ptr<AbstractShape>> shapes;

    QPoint mousePoint;

protected:
    virtual void paintEvent(QPaintEvent*) override;
    virtual void mouseMoveEvent(QMouseEvent*) override;
    virtual void mousePressEvent(QMouseEvent*) override;

signals:

};

#endif // MYQPAINTER_H
