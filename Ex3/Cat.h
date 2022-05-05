#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
    void eat() override;
    void makeSound() override;
    void run();
};
