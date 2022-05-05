#include <iostream>

#include "Bird.h"
#include "Cat.h"


int main()
{
    /*Bird bird;

    bird.eat();
    bird.makeSound();
    bird.fly();

    Cat cat;

    cat.eat();
    cat.makeSound();
    cat.run();*/

    Animal* animal = new Bird();
    animal->makeSound();

    delete animal;

    animal = new Cat();
    animal->eat();

    delete animal;

    return 0;
}
