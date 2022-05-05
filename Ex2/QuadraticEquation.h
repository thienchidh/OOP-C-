#pragma once
class QuadraticEquation
{
public:
    double a;
    double b;
    double c;

    QuadraticEquation();

    QuadraticEquation(double a, double b, double c);

    double get_a() const;
    void set_a(double a);
    double get_b() const;
    void set_b(double b);
    double get_c() const;
    void set_c(double c);

    double getDelta();

    void getRoot();
};

