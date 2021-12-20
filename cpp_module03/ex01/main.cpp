#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap Scav("Souza");
    ScavTrap CpyScav(Scav);

    CpyScav.attack("Monster");
    CpyScav.takeDamage(20);
    Scav.beRepaired(20);

    Scav.guardGate();

}