#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor Called\n";
}

ScavTrap::ScavTrap(const ClapTrap &name)
:name(name)
{
    std::cout << "Contructor Called\n";
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << this->name << " attack " << target << " causing " << this->atcDamage << '\n';
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor Called\n";
}
