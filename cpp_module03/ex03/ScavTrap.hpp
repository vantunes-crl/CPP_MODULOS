#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:

    public:
        /* Constructor */
        ScavTrap(void);
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