#include "Fixed.hpp"

Fixed::Fixed(void)
:FixedValue(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int n)
:FixedValue(n << FractralBits)
{

}

Fixed::Fixed(const float n)
:FixedValue(n * ( 1 << FractralBits))
{

}

std::ostream	&operator<<(std::ostream & os, const Fixed & obj)
{
	os << obj.toFloat();
    return os;
}

float Fixed::toFloat(void) const
{
    return (float)(FixedValue) / (1 << FractralBits);
}

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