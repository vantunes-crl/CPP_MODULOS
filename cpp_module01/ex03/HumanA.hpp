#ifndef CLASS_HUMAN_A_HPP
#define CLASS_HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string name;
    const Weapon &weapon;
public:
    HumanA(std::string const &name, const Weapon &weapon);
    virtual ~HumanA();
    void attack(void) const;
};

#endif