#pragma once
#include "Animal.h"

class Bird : public Animal
{
public:
    void eat() override;
    void makeSound() override;
    void fly();
};
