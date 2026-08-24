#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double newLength, double newWidth);

    void setLength(double newLength);
    void setWidth(double newWidth);

    double getLength() const;
    double getWidth() const;
    double getArea() const;
};

#endif
