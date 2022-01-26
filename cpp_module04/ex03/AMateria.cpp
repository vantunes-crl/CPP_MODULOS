#include "AMateria.hpp"

// Constructors
AMateria::AMateria(void)
:type("")
{
}

AMateria::AMateria(std::string const &type)
:type(type)
{
}

//Normal Fuctions
void AMateria::use(ICharacter &target)
{}

//Getters
std::string const & AMateria::getType(void) const
{return (this->type);}

//Destructor
AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &cpy)
{
    *this = cpy;
}

AMateria &AMateria::operator=(const AMateria &assing)
{
    this->type = assing.type;
    return (*this);
}
