#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:name(""), hitPoints(10), energyPoints(10), atcDamage(0)
{
    std::cout << "ClapTrap Default constructor was called\n";
}

ClapTrap::ClapTrap(std::string const &name)
:name(name), hitPoints(10), energyPoints(10), atcDamage(0)
{
    std::cout << "ClapTrap Constructor was called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor was called\n";
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << this->name << " attack " << target << " causing " << this->atcDamage << '\n';
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " receive " << amount << " damage\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " need use " << amount << " of points to be repair\n";
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "ClapTrap Copy Constructor Called\n";
    *this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &sign)
{
    std::cout << "ClapTrap Operator Overload Called\n";
    name = sign.name;
    hitPoints = sign.hitPoints;
    energyPoints = sign.energyPoints;
    atcDamage = sign.atcDamage;
    return (*this);
}

ClapTrap &ClapTrap::setHitpoints(int num)
{
    this->hitPoints = num;
    return (*this);
}

ClapTrap &ClapTrap::setEnergPoints(int num)
{
    this->energyPoints = num;
    return (*this);
}

ClapTrap &ClapTrap::setAtcDamage(int num)
{
    this->atcDamage = num;
    return (*this);
}

ClapTrap &ClapTrap::setName(std::string name)
{
    this->name = name;
    return (*this);
}

std::string ClapTrap::getName() const
{return (this->name);}

int    ClapTrap::getHitpoints() const
{return (this->hitPoints);}

int    ClapTrap::getEnergPoints() const
{return (this->energyPoints);}

int    ClapTrap::getAtcDamage() const
{return (this->atcDamage);}