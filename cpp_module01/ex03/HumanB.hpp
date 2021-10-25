#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string name;
    const Weapon *weapon;
public:
    HumanB(std::string const &name);
    virtual ~HumanB();
    void SetWeapon(const Weapon &weapon);
    void attack() const;
};