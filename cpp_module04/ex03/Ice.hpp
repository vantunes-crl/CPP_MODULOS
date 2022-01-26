#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        //Contructors
        Ice(void);

        //Assing Operator Overload
        Ice(const Ice &);
        Ice &operator=(const Ice &);

        //Functions
        AMateria* clone(void) const;
        void use(ICharacter &target);

        //Destructors
        ~Ice();
};



#endif