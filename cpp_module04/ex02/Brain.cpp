#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called\n";
}

Brain::~Brain()
{
    std::cout << "Brain Desttructor Called\n";
}

Brain::Brain(const Brain &cpy)
{
    std::cout << "Brain Cpy Constructor Called\n";
    *this = cpy;
}

Brain &Brain::operator=(const Brain &assig)
{
    std::cout << "Brain Assign Operator Called\n";
    if (this == &assig)
        return (*this);
    int i = -1;
    while (++i < 100)
        ideas[i] = assig.ideas[i];
    return *this;
}