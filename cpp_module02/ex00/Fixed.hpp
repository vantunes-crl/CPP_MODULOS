#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int FixValue;
    static const int FractalBits = 8;
public:
    Fixed(void);
    Fixed (const Fixed&);
    ~Fixed(void);
    Fixed& operator=(const Fixed&);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};


#endif