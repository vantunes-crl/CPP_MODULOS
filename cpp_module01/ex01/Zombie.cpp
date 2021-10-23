#include "Zombie.hpp"

void Zombie::SetName(std::string name) {this->name = name;}

std::string Zombie::GetName() {return (this->name);}

Zombie::Zombie()
{}
Zombie::~Zombie()
{}

void deleteHorde(Zombie *Horde)
{
    
}

void Zombie::annunce()
{
     std::cout << this->name << " " << "BraiiiiiiinnnzzzZ..." << '\n';
}



