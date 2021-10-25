
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string const &name):
	name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::SetWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->GetType() << std::endl;
	else
		std::cout << this->name << " can't attack because he has no Weapon !" << std::endl;
}