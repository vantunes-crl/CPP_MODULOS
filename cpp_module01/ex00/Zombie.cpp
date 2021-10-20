#include "Zombie.hpp"

/* getter */
std::string Zombie::GetName() { return (name);}

/* setter */
void Zombie::SetName(std::string str) {name = str;}

void Zombie::announce()
{
    std::cout << this->name << " " << "BraiiiiiiinnnzzzZ..." << '\n';
}

/* Constructor */
Zombie::Zombie()
{}

/* Destructor */
Zombie::~Zombie()
{}
