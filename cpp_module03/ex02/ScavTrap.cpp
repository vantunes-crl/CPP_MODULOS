#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor Called\n";
}

ScavTrap::ScavTrap(std::string name)
:ClapTrap(name)
{
    std::cout << "ScavTrap Contructor Called\n";
    setHitpoints(100);
    setEnergPoints(50);
    setAtcDamage(20);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode.\n";
}


ScavTrap::ScavTrap(const ScavTrap &cpy)
{
    std::cout << "ScavTrap Copy Constructor Called\n";
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &sign)
{
    std::cout << "Operator Overload Call\n";
    this->setName(sign.getName());
    this->setHitpoints(sign.getHitpoints());
    this->setEnergPoints(sign.getEnergPoints());
    this->setAtcDamage(sign.getAtcDamage());

    return *this;
}