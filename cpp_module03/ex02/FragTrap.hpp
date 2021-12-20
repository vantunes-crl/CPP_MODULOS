#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    private:
        FragTrap(void);
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);
        FragTrap &operator=(const FragTrap &sign);


        void highFivesGuys(void);
        virtual ~FragTrap();
};




#endif