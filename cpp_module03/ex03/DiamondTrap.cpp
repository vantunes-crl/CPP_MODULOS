#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name):
FragTrap(name), ScavTrap(name), name(name)
{
    ClapTrap::getName();
}

DiamondTrap::~DiamondTrap()
{
}