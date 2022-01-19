#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Default Constructor Called\n";
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Au au au\n";
}

Dog::Dog(const Dog &cpy)
{
    std::cout << "Dog Copy constructor Called\n";
    *this = cpy;
}

Dog &Dog::operator=(const Dog &assing)
{
    if (this == &assing)
        return (*this);
    type = assing.type;
    return (*this);
}
