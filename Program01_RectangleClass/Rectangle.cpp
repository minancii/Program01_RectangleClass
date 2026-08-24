#include "Rectangle.h"

Rectangle::Rectangle()
{
    length = 0.0;
    width = 0.0;
}

Rectangle::Rectangle(double newLength, double newWidth)
{
    setLength(newLength);
    setWidth(newWidth);
}

void Rectangle::setLength(double newLength)
{
    if (newLength >= 0)
        length = newLength;
    else
        length = 0.0;
}

void Rectangle::setWidth(double newWidth)
{
    if (newWidth >= 0)
        width = newWidth;
    else
        width = 0.0;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getArea() const
{
    return length * width;
}