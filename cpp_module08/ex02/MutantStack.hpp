#ifndef MUTANT_STACK
#define MUTANT_STACK

#include <stack>
#include <iostream>



template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator	iterator;
        ~MutantStack<T>(){};
        MutantStack<T>(){};

        iterator begin()
        {return (this->c.begin());};
        iterator end()
        {return this->c.end();};
} ;



#endif