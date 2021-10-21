#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <unistd.h>

class Zombie{
    private:
    std::string name;
    public:
        Zombie();
        virtual ~Zombie();
        void SetName(std::string name);
        std::string GetName();
        void annunce();
};

void deleteHorde(Zombie *Horde);
Zombie* zombieHorde( int N, std::string name );

#endif