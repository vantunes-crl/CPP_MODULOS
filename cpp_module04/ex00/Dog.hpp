#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog: public Animal
{
    private:
        
    public:
        Dog(void);

        Dog(const Dog &);
        Dog &operator=(const Dog &);

        void makeSound(void) const;
        ~Dog();
        
};



#endif