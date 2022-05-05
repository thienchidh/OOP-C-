#include <iostream>

#include "Rectangle.h"

int main()
{
    
    Rectangle rec(50, 10);
    
    std::cout << rec.getArea() << "\n";

    std::cout << rec.getPerimeter() << "\n";

    return 0;
}
