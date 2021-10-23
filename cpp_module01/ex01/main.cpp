#include "Zombie.hpp"

int main(int argc, char **argv)
{
    Zombie *zombie;

    zombie = zombieHorde(5, "Paulo");
    delete[] zombie;
}