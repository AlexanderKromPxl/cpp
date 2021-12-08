#ifndef MYSQUARE_H
#define MYSQUARE_H

#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>

class MySquare : public QGraphicsItem
{
public:
    MySquare();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool Pressed;
protected:
    void mousPressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleasEvent(QGraphicsSceneMouseEvent *event);
};

#endif // MYSQUARE_H
