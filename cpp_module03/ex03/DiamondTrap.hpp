#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
    protected:
        DiamondTrap();
    public:
        DiamondTrap(std::string name);
        DiamondTrap( const DiamondTrap& cpy);

        void attack(std::string name);
        ~DiamondTrap();

        void whoAmI() const;
};


#endif