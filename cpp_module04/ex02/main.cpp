#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // {
    //     std::cout << "Normal Test\n";
    //     const Animal* dog = new Dog();
    //     const Animal* cat = new Cat();

    //     dog->makeSound();

    //     delete dog;
    //     delete cat;
    // }

    // {

    //     Animal* cat = new Cat;
	//     Animal* cat1 = new Cat;
    //     Cat *catCpy = new Cat(*static_cast<Cat *>(cat1));

    //     delete cat;
    //     delete cat1;
    //     delete catCpy;

    //     Animal* dog = new Dog;
	//     Animal* dog1 = new Dog;
    //     Animal *dogCpy = new Dog(*static_cast<Dog *>(dog1));

    //     delete dog;
    //     delete dog1;
    //     delete dogCpy;
    // }

    {
        Animal *cat = new Cat;
        Animal *dog = new Dog;

        *cat = *dog;

        std::cout << cat->getType() << std::endl;
        cat->makeSound();
        std::cout << dog->getType() << std::endl;
        dog->makeSound();
    
        delete cat;
        delete dog;
    }


}