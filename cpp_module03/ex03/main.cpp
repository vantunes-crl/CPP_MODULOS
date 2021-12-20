#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap Frag("Souza");
    FragTrap CpyFrag(Frag);

    CpyFrag.highFivesGuys();

    std::cout << CpyFrag.getEnergPoints() << std::endl;

}