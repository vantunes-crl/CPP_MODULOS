#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int FixedValue;
    static const int FractralBits = 8;
public:
    Fixed(void);
    Fixed(const int n);
    Fixed(const float n);
    Fixed( Fixed const &src );

    float toFloat(void) const;
    int toInt(void) const;
    int GetRawBits(void) const;

    Fixed& operator=(Fixed const &);
    ~Fixed(void);
   
};

std::ostream	&operator<<( std::ostream &ostream, const Fixed &obj );




#endif