#include "Employee.h"

#include <iostream>

Employee::Employee()
{
    std::cout << "Employee::constructor 0" << "\n";
}

Employee::Employee(const std::string& name, int age, const std::string& address): name(name),
    age(age),
    address(address)
{
    std::cout << "Employee::constructor 1" << "\n";

}

Employee::~Employee()
{
    std::cout << "Employee::destructor" << "\n";
}

std::string Employee::get_name() const
{
    return name;
}

int Employee::get_age() const
{
    return age;
}

std::string Employee::get_address() const
{
    return address;
}

void Employee::set_name(const std::string& name)
{
    this->name = name;
}

void Employee::set_age(int age)
{
    this->age = age;
}

void Employee::set_address(const std::string& address)
{
    this->address = address;
}

void Employee::doSomething()
{
    std::cout << this->name << ". Employee::doSomething" << "\n";
}

std::ostream& operator<<(std::ostream& os, const Employee& obj)
{
    return os
        << "name: " << obj.name
        << " age: " << obj.age
        << " address: " << obj.address;
}
