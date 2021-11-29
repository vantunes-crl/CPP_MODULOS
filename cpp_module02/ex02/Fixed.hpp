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
    void SetRawBits(const int n);

    /* overgloadings */
    Fixed& operator=(Fixed const &);
    /* prefix */
    Fixed& operator++();
    /* postfix */
    Fixed& operator++( int );
    /* prefix */
    Fixed& operator--();
    /* posfix */
    Fixed& operator--( int );

    /* Relational operators */
    bool operator<(const Fixed& fix);
    bool operator>(const Fixed& fix);
    bool operator>=(const Fixed& fix);
    bool operator<=(const Fixed& fix);
    bool operator==(const Fixed& fix);
    bool operator!=(const Fixed& fix);

    /* Binary operators */
    Fixed operator+(const Fixed& fix);
    Fixed operator-(const Fixed& fix);
    Fixed operator/(const Fixed& fix);
    Fixed operator*(const Fixed& fix);



    ~Fixed(void);
   
};

std::ostream	&operator<<( std::ostream &ostream, const Fixed &obj );




#endif