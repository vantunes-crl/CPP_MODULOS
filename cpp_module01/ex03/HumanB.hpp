#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string name;
    const Weapon *weapon;
public:
    HumanB(std::string const &name);
    void setWeapon(const Weapon &weapon);
    void attack(void) const;
    ~HumanB();
};



#endif