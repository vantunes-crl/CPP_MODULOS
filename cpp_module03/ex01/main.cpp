#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap Clap("Alfredo");

    // Clap.attack("Random Target");
    // Clap.takeDamage(20);
    // Clap.beRepaired(20);
    ScavTrap Scav(Clap);
}