#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        //Constructors
        Cure();

        //Functions
        AMateria *clone(void) const;
        void use(ICharacter &target);

        //Operator assing Overload
        Cure(const Cure &);
        Cure &operator=(const Cure &);

        //Destructors
        ~Cure();
};


#endif