#pragma once
#include "Employee.h"

class Engineer: public Employee
{
public:
    void doSomething() override;

    void saySomething() override;
};
