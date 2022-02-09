#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template<typename T>
typename T::const_iterator easyfind(T &container, int n)
{
    typename T::const_iterator begin = container.begin();
    typename T::const_iterator end = container.end();
    typename T::const_iterator it = std::find(begin, end, n);

    if (it == end)
        throw std::out_of_range("Element not found!");
    return it;
}




#endif