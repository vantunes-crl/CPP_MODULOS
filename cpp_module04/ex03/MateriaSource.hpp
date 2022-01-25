#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *store[3];
    public:
        MateriaSource(void);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};





#endif