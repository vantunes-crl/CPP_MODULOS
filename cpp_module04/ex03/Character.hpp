#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : ICharacter 
{
    private:
        std::string name;
        AMateria *inventary[3];
    public:
        Character(void);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        ~Character();
};



#endif