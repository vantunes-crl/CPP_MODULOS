#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string const &name):
name{name}, weapon{NULL}
{}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << '\n';
	else
		std::cout << this->name << " can't attack because he has no Weapon !" << '\n';
}