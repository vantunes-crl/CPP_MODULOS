#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    protected:
        ScavTrap(void);
    public:
        /* Constructor */
        ScavTrap(std::string name);
        
        /* Overloading */
        ScavTrap(const ScavTrap &cpy);
        ScavTrap &operator=(const ScavTrap &sign);

        /* Functions */
        void guardGate();

        /* Destructor */
        virtual ~ScavTrap();
};



#endif