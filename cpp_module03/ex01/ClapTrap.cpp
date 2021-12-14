#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:name(""), hitPoints(10), energyPoints(10), atcDamage(0)
{
    std::cout << "Default constructor was called\n";
}

ClapTrap::ClapTrap(std::string const &name)
:name(name), hitPoints(10), energyPoints(10), atcDamage(0)
{
    std::cout << "Constructor was called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor was called\n";
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << this->name << " attack " << target << " causing " << this->atcDamage << '\n';
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " receive " << amount << " damage\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " need use " << amount << " of points to be repair\n";
}

