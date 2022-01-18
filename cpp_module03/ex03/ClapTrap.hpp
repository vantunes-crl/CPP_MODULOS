#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int atcDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string const &name);
        ClapTrap(const ClapTrap &cpy);

        ClapTrap &operator=(const ClapTrap &sign);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap &setName(std::string name);
        ClapTrap &setHitpoints(int num);
        ClapTrap &setEnergPoints(int num);
        ClapTrap &setAtcDamage(int num);

        std::string getName() const;
        int    getHitpoints() const;
        int    getEnergPoints() const;
        int    getAtcDamage() const;

        virtual ~ClapTrap();
};


#endif