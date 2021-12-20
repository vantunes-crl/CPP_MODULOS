#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Contructor Call\n";
}

FragTrap::FragTrap(std::string name)
:ClapTrap(name)
{
    std::cout << "FragTrap Constructor Called\n";
    this->setAtcDamage(30);
    this->setEnergPoints(100);
    this->setHitpoints(100);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Call\n";
}

FragTrap::FragTrap(const FragTrap &cpy)
{
    std::cout << "FragTrap Copy Constructor Called\n";
    *this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &sign)
{
    if (this == &sign)
        return (*this);
    this->setName(sign.getName());
    this->setHitpoints(sign.getHitpoints());
    this->setEnergPoints(sign.getEnergPoints());
    this->setAtcDamage(sign.getAtcDamage());
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " Request A positive High five\n";
}