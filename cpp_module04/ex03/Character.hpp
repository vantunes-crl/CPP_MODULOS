#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter 
{
    private:
        std::string name;
        AMateria *inventary[4];
    public:
        //Contructors
        Character(void);
        Character(std::string name);

        //Assing Operator Overload
        Character(const Character &);
        Character &operator=(const Character &);

        //Functions
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        //Destructors
        ~Character();
};



#endif