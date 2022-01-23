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


// Wrong animal without virtual

WrongAnimal::WrongAnimal()
:type("some WrongAnimal")
{
    std::cout << "WrongAnimal Defalt Constructor Called\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    std::cout << "WrongAnimal Copy constructor called\n";
    *this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& assign)
{
    std::cout << "Assign Operator Called\n";
    if (this == &assign)
        return (*this);
    type = assign.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Cri..Cri...!\n";
}

std::string WrongAnimal::getType() const
{return this->type;}