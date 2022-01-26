#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        store[i] = 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (store[i] != 0)
        {
            std::cout << store[i]->getType() << " Deleted Materia in store\n";
            delete store[i];
        }
    }
}


void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    
    for (int i = 0; i < 4; i++)
    {
        if (!store[i])
        {
            store[i] = m;
            return;
        }
    }
    std::cout << "Can't learn, memory full\n";
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (store[i])
    {
        if (type == store[i]->getType())
            return store[i];
        i++;
    }
    std::cout << "Material Recipe not finded!\n";
    return (0);
}



MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    *this = cpy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assing)
{
    for (int i = 0; i < 4; i++)
        store[i] = assing.store[i];
    return (*this);
}