#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon):
name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon.GetType() << std::endl;
}