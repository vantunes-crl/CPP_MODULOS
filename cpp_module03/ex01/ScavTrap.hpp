#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap
{
    private:
        ClapTrap name;
    public:
        /* CONSTRUCTOR */
        ScavTrap();
        ScavTrap(const ClapTrap &name);

        /* FUNCTIONS */
        void attack(std::string const & target);

        /* DESTRUCTOR */
        virtual ~ScavTrap();
};



#endif