#pragma once
class Animal
{
public:
    Animal();

    virtual ~Animal();

    virtual void eat() = 0;

    virtual void makeSound() = 0;
};

