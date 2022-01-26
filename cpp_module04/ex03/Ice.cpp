#include "Ice.hpp"

Ice::Ice(void)
{
    AMateria::type = "ice";
}

Ice::~Ice(void)
{
}

AMateria *Ice::clone(void) const
{
    return (new Ice);
}

void Ice::use(ICharacter &target)
{
    if (!&target)
        return;
    std::cout << "Ice: * shoots an ice bolt at " << target.getName() << "*\n";
}