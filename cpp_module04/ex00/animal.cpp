#include "animal.hpp"

Animal::Animal()
:type("some Animal")
{
    std::cout << "Animal Defalt Constructor Called\n";
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called\n";
}

Animal::Animal(const Animal& cpy)
{
    std::cout << "Animal Copy constructor called\n";
    *this = cpy;
}

Animal &Animal::operator=(const Animal& assign)
{
    std::cout << "Assign Operator Called\n";
    if (this == &assign)
        return (*this);
    type = assign.type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "Cri..Cri...!\n";
}

std::string Animal::getType() const
{return this->type;}