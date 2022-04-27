#include <iostream>
#include <vector>

#include "Employee.h"
#include "Engineer.h"
#include "Manager.h"

int main()
{
    /*Employee employee1;
    // employee1.doSomething();

    Employee employee2("Nguyen Van B", 20, "address");
    // employee2.doSomething();

    std::cout << employee1 << "\n";

    std::cout << employee2 << "\n";
    */

    ///
    {
        Engineer engineer;
        engineer.doSomething();
    }

    Engineer* e = new Engineer();
    e->doSomething(); //Engineer::doSomething
    e->saySomething(); //Engineer::saySomething

    Employee* employee = new Engineer();
    employee->doSomething(); //Engineer::doSomething
    employee->saySomething(); //Engineer::saySomething


    std::cout << "-----------\n\n";

    auto manager = new Manager();
    // manager->saySomething();
    manager->doSomething();
    std::cout << "--++---------\n\n";


    std::vector<Employee*> arr{e, manager};
    for (const auto& x : arr)
    {
        x->doSomething();
    }

    std::cout << "--==---------\n\n";

    Employee* employee1 = new Engineer();
    employee1->doSomething(); //Engineer::doSomething
    employee1->saySomething(); //Engineer::saySomething

    employee1 = new Manager();
    employee1->doSomething();
    employee1->saySomething();


    auto employee2 = employee1;
    auto& employee3 = employee1;
    employee3 = nullptr;

    const auto& employee4 = employee1;



    return 0;
}
