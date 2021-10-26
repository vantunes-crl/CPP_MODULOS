#ifndef CLASS_WEAPON_HPP
#define CLASS_WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string Type;
public:
    Weapon();
    Weapon(std::string const &Type);
    virtual ~Weapon();
    std::string const &getType(void) const;
    void setType(std::string const &Type);
};


#endif