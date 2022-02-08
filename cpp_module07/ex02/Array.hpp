#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"

template<typename T>
class Array
{
private:
    T *array;
    size_t ArraySize;
public:
    Array<T>();
    Array<T>(unsigned int n);

    Array<T>(const Array &);
    Array&	operator=(const Array &);

    T &operator[](std::size_t i) const;
    
    void printArray();
    std::size_t	size() const;

    ~Array();
};



#endif