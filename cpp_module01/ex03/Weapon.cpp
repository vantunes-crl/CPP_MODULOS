#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string const &Type):
Type{Type}
{}

Weapon::~Weapon()
{}

void Weapon::setType(std::string const &Type)
{
    this->Type = Type;
}

std::string const &Weapon::getType(void) const
{
    return (this->Type);
}