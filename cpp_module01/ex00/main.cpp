#include "Zombie.hpp"
#include <unistd.h>

std::string RandomName()
{
    srand (time(NULL));
    std::string names[16] = {"Bob", "Romeu", "Souza", "joao", "Rob", "Joze", "Rick", "Dean" ,"Hit", "BroBro", "Bart", "Vezer", "Viker", "Art", "Fallen", "Brain"};
    std::string name = names[rand() % 16];
    return (name);
}

int main(int argc, char **argv)
{
    Zombie z;

    z.newZombie(RandomName());
    usleep(1000000);
    z.randomChump(RandomName());
    return (0);
}