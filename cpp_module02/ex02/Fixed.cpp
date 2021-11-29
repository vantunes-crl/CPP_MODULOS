#include "Fixed.hpp"

Fixed::Fixed(void)
:FixedValue(0)
{}

Fixed::~Fixed()
{}

/* Convert interger to fixed point with bit shiffing */
Fixed::Fixed(const int n)
:FixedValue(n << FractralBits)
{}

/* Convert float to fixed point with bit shiffing */
Fixed::Fixed(const float n)
:FixedValue(n * ( 1 << FractralBits))
{}

/* floating point representation of thefixed point value into the parameter output stream */
std::ostream	&operator<<(std::ostream & os, const Fixed & obj)
{
	os << obj.toFloat();
    return os;
}

/* from fixed to float */
float Fixed::toFloat(void) const
{
    return (float)(FixedValue) / (1 << FractralBits);
}

/* fixed to int*/
int Fixed::toInt(void) const
{
    return (FixedValue >> 8);
}

Fixed   &Fixed::operator=(Fixed const & op)
{
    if (&op == this)
        return (*this);
    FixedValue = op.GetRawBits();
    return (*this);
}

int Fixed::GetRawBits(void) const
{
    return (FixedValue);
}

Fixed::Fixed( Fixed const &src )
{
    *this = src;
}

void Fixed::SetRawBits(const int n)
{
    FixedValue = n;
}

/* prefix */
Fixed &Fixed::operator++()
{}

/* posfix */
Fixed &Fixed::operator++( int )
{}

/* prefix */
Fixed &Fixed::operator--()
{}

/* posfix */
Fixed &Fixed::operator--( int )
{}

/* Relational operators */
bool Fixed::operator<(const Fixed& fix)
{}
bool Fixed::operator>(const Fixed& fix)
{}
bool Fixed::operator>=(const Fixed& fix)
{}
bool Fixed::operator<=(const Fixed& fix)
{}
bool Fixed::operator==(const Fixed& fix)
{}
bool Fixed::operator!=(const Fixed& fix)
{}

/* Binary operators */
Fixed Fixed::operator+(const Fixed& fix)
{}
Fixed Fixed::operator-(const Fixed& fix)
{}
Fixed Fixed::operator/(const Fixed& fix)
{}
Fixed Fixed::operator*(const Fixed& fix)
{}