#pragma once
#include <iostream>

class Rectangle
{
public:
    int width;
    int height;

    Rectangle();

    Rectangle(int width, int height);

    void set_width(int width);
    void set_height(int height);

    int getArea();

    int getPerimeter();
};

