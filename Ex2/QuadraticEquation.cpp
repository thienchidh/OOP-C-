#include "QuadraticEquation.h"

#include <iostream>

QuadraticEquation::QuadraticEquation()
{
}

QuadraticEquation::QuadraticEquation(double a, double b, double c): a(a),
                                                                    b(b),
                                                                    c(c)
{
}

double QuadraticEquation::get_a() const
{
    return a;
}

void QuadraticEquation::set_a(double a)
{
    this->a = a;
}

double QuadraticEquation::get_b() const
{
    return b;
}

void QuadraticEquation::set_b(double b)
{
    this->b = b;
}

double QuadraticEquation::get_c() const
{
    return c;
}

void QuadraticEquation::set_c(double c)
{
    this->c = c;
}

double QuadraticEquation::getDelta()
{
    return b * b - 4 * a * c;
}

void QuadraticEquation::getRoot()
{
    const auto delta = this->getDelta();
    if (delta > 0)
    {
        std::cout << (-b + std::sqrt(delta)) / (2.0 * a) << "\n";
        std::cout << (-b - std::sqrt(delta)) / (2.0 * a) << "\n";
        return;
    }
    if (delta < 0)
    {
        std::cout << "...\n";
        return;
    }

    // delta == 0
    std::cout << -b / (2.0 * a) << "\n";
}
