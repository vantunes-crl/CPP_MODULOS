#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string const &type):
	type(type)
{
}

void Weapon::SetType(std::string const &type)
{
    this->type = type;
}

std::string const &Weapon::GetType() const
{
    return(this->type);
}

Weapon::~Weapon()
{}