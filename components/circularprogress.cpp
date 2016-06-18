#include "circularprogress.h"
#include <QPainter>
#include "circularprogress_p.h"

CircularProgressPrivate::CircularProgressPrivate(CircularProgress *q)
    : q_ptr(q)
{
}

CircularProgressPrivate::~CircularProgressPrivate()
{
}

void CircularProgressPrivate::init()
{
}

CircularProgress::CircularProgress(QWidget *parent)
    : QWidget(parent),
      d_ptr(new CircularProgressPrivate(this))
{
    d_func()->init();
}

CircularProgress::~CircularProgress()
{
}

void CircularProgress::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawRect(rect());
}
