#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {
    private:
        std::vector<unsigned int> storeNumbers;
        unsigned int size;
    public:
        Span();
        Span(int n);
        Span(const Span &);
        Span &operator=(const Span &);
        void addNumber(const int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        void addRandomNumbers(int n);
};

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