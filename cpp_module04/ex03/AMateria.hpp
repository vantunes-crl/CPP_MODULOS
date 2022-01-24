#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
    AMateria(void);
    AMateria(std::string const & type);
    std::string const & getType(void) const; //Returns the materia type
    virtual AMateria* clone(void) const = 0;
    virtual void use(ICharacter &target);

    ~AMateria();
};




#endif