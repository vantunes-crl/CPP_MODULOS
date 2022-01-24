#include "Character.hpp"

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
        inventary[i] = nullptr;
}

Character::~Character(void)
{}

std::string const & Character::getName(void) const
{ return (this->name);}

void Character::equip(AMateria* m)
{
    int i = 0;
    while (this->inventary[i])
        i++;
    inventary[i] = m;
}

void Character::unequip(int idx)
{}

void Character::use(int idx, ICharacter& target)
{}

