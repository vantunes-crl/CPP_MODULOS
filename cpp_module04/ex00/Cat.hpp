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





#endif