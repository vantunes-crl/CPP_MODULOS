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

std::string RandomName()
{
    srand (time(NULL));
    std::string names[16] = {"Bob", "Romeu", "Souza", "joao", "Rob", "Joze", "Rick", "Dean" ,"Hit", "BroBro", "Bart", "Vezer", "Viker", "Art", "Fallen", "Brain"};
    std::string name = names[rand() % 16];
    usleep(1000000);
    return (name);
}

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;

    if (N <= 0 || N > INT32_MAX)
    {
        std::cout << "Incorrect input, setting by default to 1\n";
        N = 1;
    }
    Zombie *Horde = new Zombie[N];
    Horde[0].SetName(name);
    Horde[0].annunce();
    while (++i < N)
    {
        Horde[i].SetName(RandomName());
        Horde[i].annunce();
    }
    return (Horde);
};