#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template <typename T>
T print(T &i)
{
    std::cout << i << std::endl;
    return (i);
}

template <typename T>
T add(T &i)
{
    ++i;
    return (i);
}

template<typename T>
void iter(T *array, int len, T func(T &))
{
    int i = 0;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
}




#endif