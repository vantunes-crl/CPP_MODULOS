#include "Span.hpp"

int main()
{
    Span sp = Span(10);

    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);

    try
    {
        sp.addRandomNumbers(10000);
        //std::cout << sp.longestSpan();
        std::cout << sp.shortestSpan();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }



    


    
}