#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int width, int height): width(width),
                                             height(height)
{
}

void Rectangle::set_width(int width)
{
    this->width = width;
}

void Rectangle::set_height(int height)
{
    this->height = height;
}

int Rectangle::getArea()
{
    return width * height;
}

int Rectangle::getPerimeter()
{
    return (width + height) * 2;
}
