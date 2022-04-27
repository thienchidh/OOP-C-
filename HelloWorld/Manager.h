#pragma once
#include "Employee.h"

class Manager : public Employee
{
public:
    void doSomething() override;

    void saySomething() override;
};
