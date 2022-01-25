#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        store[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
}


void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    while (store[i])
        i++;
    if (store[i])
        std::cout << "Can't learn, memory full\n";
    else
        store[i] = m;
        
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (store[i])
    {
       // std::cout << store[i]->getType() << std::endl;
        if (type == store[i]->getType())
            return store[i];
        i++;
    }
    std::cout << "Material Recipe not finded!\n";
    return (0);
}