#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : AMateria
{
    public:
        Ice(void);
        ~Ice();
        AMateria* clone(void) const;
        void use(ICharacter &target);
};



#endif