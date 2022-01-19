#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat: public Animal
{
private:
    
public:
    Cat(void);

    Cat(const Cat &);
    Cat &operator=(const Cat &);

    void makeSound(void) const;
    ~Cat();
};

class WrongCat: public WrongAnimal
{
private:
    
public:
    WrongCat(void);

    WrongCat(const WrongCat &);
    WrongCat &operator=(const WrongCat &);

    void makeSound(void) const;
    ~WrongCat();
};





#endif