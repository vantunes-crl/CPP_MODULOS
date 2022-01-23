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


class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);

        WrongAnimal(const WrongAnimal&);
        WrongAnimal &operator=(const WrongAnimal&);

        void makeSound(void) const;

        std::string getType() const; 
        virtual ~WrongAnimal();
};

#endif