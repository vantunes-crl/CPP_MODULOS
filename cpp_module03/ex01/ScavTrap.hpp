#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
        ScavTrap(void);
    public:
        /* Constructor */
        ScavTrap(std::string name);
        
        /* Overloading */
        ScavTrap(const ScavTrap &cpy);
        ScavTrap &operator=(const ScavTrap &sign);

        /* Functions */
        void guardGate() const;

        /* Destructor */
        virtual ~ScavTrap();
};



#endif