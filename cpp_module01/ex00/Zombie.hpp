#ifndef ZUMBIE_HPP
#define ZUMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        void randomChump(std::string name);
        Zombie* newZombie(std::string name);
        virtual ~Zombie();
        void SetName(std::string str);
        std::string GetName();
        void announce();
};

#endif