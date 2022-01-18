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
    if (this == &sign)
        return *this; 
    std::cout << "Operator Overload Call\n";
    name = sign.name;
    hitPoints = sign.hitPoints;
    energyPoints = sign.energyPoints;
    atcDamage  = sign.atcDamage;
    return *this;

}