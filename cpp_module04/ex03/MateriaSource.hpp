#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *store[4];
    public:
        //Contructors
        MateriaSource(void);
        
        //Assing Operator Overload
        MateriaSource(const MateriaSource &);
        MateriaSource &operator=(const MateriaSource &);

        //Functions
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

        //Destructors
        ~MateriaSource();
};





#endif