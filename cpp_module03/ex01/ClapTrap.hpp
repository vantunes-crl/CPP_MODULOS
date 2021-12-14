#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int atcDamage;
    public:
        ClapTrap();
        ClapTrap(std::string const &name);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        virtual ~ClapTrap();
};


#endif