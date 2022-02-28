#include "Span.hpp"
#include <algorithm>

Span::Span()
{}

Span::Span(int n)
:size(n)
{}

void Span::addNumber(const int n)
{
    if (storeNumbers.size() < this->size)
    {
        storeNumbers.push_back(n);
        std::cout << n << " was add\n";
    }
    else
        throw  std::out_of_range("Span is Full");
}

unsigned int Span::shortestSpan()
{
    unsigned int shorten = storeNumbers.at(0);
    if (storeNumbers.size() < 2)
        throw std::out_of_range("no span can be found");
    for (unsigned int i = 0; i != storeNumbers.size(); ++i)
    {
        if (shorten > storeNumbers.at(i))
            shorten = storeNumbers.at(i);
    }
    return *std::find(storeNumbers.begin(), storeNumbers.end(), shorten);;
}

unsigned int Span::longestSpan()
{
    unsigned int big = storeNumbers.at(0);
    if (storeNumbers.size() < 2)
        throw std::out_of_range("no span can be found");

    for (unsigned int i = 0; i != storeNumbers.size(); ++i)
    {
        if (big < storeNumbers.at(i))
            big = storeNumbers.at(i);
    }
    return *std::find(storeNumbers.begin(), storeNumbers.end(), big);
}

void Span::addRandomNumbers(int n)
{
    srand(time(0));

    int i = -1;
    while (++i < n)
    {
        addNumber(rand() % n);
    }
}
