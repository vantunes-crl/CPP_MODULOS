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
:FixedValue(roundf(n * ( 1 << FractralBits)))
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
{
    this->FixedValue++;
    return (*this);
}

/* posfix */
Fixed Fixed::operator++( int )
{
    Fixed temp = *this;
    ++*this;
    return (temp);
}

/* prefix */
Fixed &Fixed::operator--()
{
    this->FixedValue--;
    return (*this);
}

/* posfix */
Fixed Fixed::operator--( int )
{
    Fixed temp = *this;
    ++*this;
    return (temp);
}

/* Relational operators */
bool Fixed::operator<(const Fixed& fix)
{
    if (this->FixedValue < fix.FixedValue)
        return (true);
    return (false);
}

bool Fixed::operator>(const Fixed& fix)
{
    if (this->FixedValue > fix.FixedValue)
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& fix)
{
    if (this->FixedValue >= fix.FixedValue)
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& fix)
{
    if (this->FixedValue <= fix.FixedValue)
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& fix)
{
    if (this->FixedValue == fix.FixedValue)
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed& fix)
{
    if (this->FixedValue != fix.FixedValue)
        return (true);
    return (false);
}

/* Binary operators */
Fixed Fixed::operator+(const Fixed& fix)
{
    return (this->FixedValue + fix.FixedValue);
}

Fixed Fixed::operator-(const Fixed& fix)
{
    return (this->FixedValue - fix.FixedValue);
}
Fixed Fixed::operator/(const Fixed& fix)
{
    return (Fixed(this->toFloat() * fix.toFloat()));
}
Fixed Fixed::operator*(const Fixed& fix)
{
    return (Fixed(this->toFloat() * fix.toFloat()));
}

static Fixed &min(Fixed &a, Fixed &b);
static Fixed &max(Fixed &a, Fixed &b);

static const Fixed &min(const Fixed &a, const Fixed &b);
static const Fixed &max(const Fixed &a, const Fixed &b);