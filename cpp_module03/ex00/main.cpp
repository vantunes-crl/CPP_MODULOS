#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap("Alfredo");

    Clap.attack("Random Target");
    Clap.takeDamage(20);
    Clap.beRepaired(20);

}