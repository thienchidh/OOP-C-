#include "Manager.h"

#include <iostream>

void Manager::doSomething()
{
    Employee::doSomething();
    std::cout << "Manager::doSomething" << "\n";
}

void Manager::saySomething()
{
    std::cout << "Manager::saySomething" << "\n";
}
