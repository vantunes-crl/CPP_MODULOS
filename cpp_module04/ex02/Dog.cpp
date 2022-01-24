#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor Called\n";
    type = "Dog";
    brain = new Brain;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called\n";
    delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Au au au\n";
}

Dog::Dog(const Dog &cpy)
:brain(new Brain)
{
    std::cout << "Dog Copy constructor Called\n";
    *this = cpy;
}

Dog &Dog::operator=(const Dog &assing)
{
    std::cout << "Dog assign Operator Called\n";
    *brain = *assing.brain;
    type = assing.type;
    return (*this);
}
