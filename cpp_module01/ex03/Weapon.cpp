#include "Weapon.hpp"

void Weapon::SetType(std::string const &type)
{
    this->type = type;
}

std::string const &Weapon::GetType() const
{
    return(this->type);
}