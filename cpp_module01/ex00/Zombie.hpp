#ifndef ZUMBIE_HPP
#define ZUMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        virtual ~Zombie();
        void SetName(std::string str);
        std::string GetName();
        void announce();
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif