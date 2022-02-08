#include "whatever.hpp"
#include "iostream"

int main()
{
    {
    int a = 10;
    int b = 40;

    char c = 'c';
    char d = 'd';

    swap(a,b);
    
    std::cout << "A: " << a <<  " B: " << b << std::endl;

    swap(c,d);
    std::cout << "C: " << c <<  " D: " << d << std::endl;

    std::cout << min(c,d) << std::endl;
    std::cout << max(a,b) << std::endl;
    }

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}