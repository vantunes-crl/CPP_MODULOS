#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain *brain = nullptr;
    public:
        Dog(void);

        Dog(const Dog &);
        Dog &operator=(const Dog &);

        void makeSound(void) const;
        ~Dog();
        
};



#endif