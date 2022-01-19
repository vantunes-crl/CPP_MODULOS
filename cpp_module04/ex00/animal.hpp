#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);

        Animal(const Animal&);
        Animal &operator=(const Animal&);

        virtual void makeSound(void) const;

        std::string getType() const; 
        virtual ~Animal();
};

#endif