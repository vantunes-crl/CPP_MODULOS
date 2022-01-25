#include "Character.hpp"

// Constructors
Character::Character(void)
{
    for (int i = 0; i < 4; i++)
        inventary[i] = nullptr;
}

Character::Character(std::string name)
:name(name)
{}

//Destructors
Character::~Character(void)
{}

//getters
std::string const &Character::getName(void) const
{ return (this->name);}


//functions pure virtual
void Character::equip(AMateria* m)
{
    int i = 0;
    while (inventary[i])
        i++;
    if (!inventary[i])
    {
        inventary[i] = m;
        std::cout << "Equiped " << m->getType() << " slot " << i << std::endl;
    }
    else
        std::cout << "Inventary is full\n";
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        std::cout << "index out of range, invenrary just have 4 slots\n";
    else
        inventary[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0)
        std::cout << "index out of range, inventary just have 4 slots\n";
    else
        inventary[idx]->use(target);
}

