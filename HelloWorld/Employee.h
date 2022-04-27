#pragma once
#include <ostream>
#include <string>

class Employee
{
protected:
    std::string name;
    int age = 0;
    std::string address;

public:
    Employee();

    Employee(const std::string& name, int age, const std::string& address);

    virtual ~Employee();

    std::string get_name() const;
    int get_age() const;
    std::string get_address() const;

    virtual void doSomething();

    virtual void saySomething() = 0;

    friend std::ostream& operator<<(std::ostream& os, const Employee& obj);
};

