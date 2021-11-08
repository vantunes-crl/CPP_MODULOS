#include "Fixed.hpp"

Fixed::Fixed(void)
:FixValue(0)
{
    std::cout << "Default constructor called \n";
}

Fixed::~Fixed()
{
    std::cout << "Call the Destructor\n";
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    *this = copy;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "Call GetRawBits member function\n";
    return (this->FixValue);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "Call SetRawBits member function\n";
    this->FixValue = raw;
}

Fixed &Fixed::operator=(const Fixed& assig)
{
    std::cout << "Assignation operator called\n";
    FixValue = assig.getRawBits();
    return (*this);
}