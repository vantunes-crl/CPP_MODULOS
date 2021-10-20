#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zomb;
    zomb.SetName(name);
    zomb.announce();
}
