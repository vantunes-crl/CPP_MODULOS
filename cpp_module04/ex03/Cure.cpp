#include "Cure.hpp"

Cure::Cure(void)
{
    AMateria::type = "cure";
}

Cure::~Cure(void)
{
}

AMateria *Cure::clone(void) const
{
    return (new Cure);
}

void Cure::use(ICharacter &target)
{
    if (!&target)
        return;
    std::cout << "Cure: * heals " << target.getName() << "'s wounds *\n";
}

Cure::Cure(const Cure &cpy)
{
    *this = cpy;
}

Cure &Cure::operator=(const Cure &assing)
{
    type = assing.type;
    return (*this);
}