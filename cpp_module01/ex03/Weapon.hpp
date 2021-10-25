#ifndef CLASS_WEAPON_HPP
#define CLASS_WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string const &type);
    virtual ~Weapon();
    void SetType(std::string const &type);
    std::string const &GetType() const;
};


#endif