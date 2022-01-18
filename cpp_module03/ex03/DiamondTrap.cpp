#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Constructor Called\n";
}

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(name), FragTrap(name), ScavTrap(name), name(name)
{
    std::cout << "DiamondTrap Constructor Called \n";

    ClapTrap::name = name + ClapTrap::getName();

    hitPoints  = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    atcDamage = FragTrap::atcDamage;
}

DiamondTrap::~DiamondTrap()
{
}

void DiamondTrap::attack(std::string name)
{
    ScavTrap::attack(name);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "DiamondTrap Name:" << this->name << " ClapClap Name:" << ClapTrap::name << std::endl;
}