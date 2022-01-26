#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    //Constructors
    AMateria(void);
    AMateria(std::string const & type);

    //Assign Operator overload
    AMateria(const AMateria &);
    AMateria &operator=(const AMateria &);

    //Functions
    std::string const & getType(void) const; //Returns the materia type
    virtual AMateria* clone(void) const = 0;
    virtual void use(ICharacter &target);

    //destructors
    ~AMateria();
};




#endif