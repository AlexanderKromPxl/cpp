#include "mysquare.h"

MySquare::MySquare()
{
    Pressed = false;
    setFlag(ItemIsMovable);
}

QRectF MySquare::boundingRect() const
{
    int x=10;
    return QRectF(0,0,10*x,4*x);
}

void MySquare::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::blue);
    if(Pressed)
    {
        brush.setColor(Qt::red);
    }
    else
    {
        brush.setColor(Qt::blue);
    }
    painter->fillRect(rec,brush);
    painter->drawRect(rec);
}

void MySquare::mousPressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed =true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void MySquare::mouseReleasEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed =false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
