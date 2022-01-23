#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat  Default Constructor Called\n";
    type = "Cat";
    this->brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called \n";
    delete this->brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Miau Miau!\n";
}

Cat::Cat(const Cat& cpy)
:brain(new Brain)
{
    std::cout << "Cat Copy Constructor Called\n";
    *this = cpy;
}

Cat &Cat::operator=(const Cat &assign)
{
    std::cout << "Cat assign Constructor Called\n";
    
    *brain = *assign.brain;
    type = assign.type;
    return *this;
}


// wrong cat without virtual

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat  Default Constructor Called\n";
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called \n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "Miau Miau!\n";
}

WrongCat::WrongCat(const WrongCat& cpy)
{
    std::cout << "WrongCat Copy Constructor Called\n";
    *this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    if (this == &assign)
        return (*this);
    type = assign.type;
    return *this;
}