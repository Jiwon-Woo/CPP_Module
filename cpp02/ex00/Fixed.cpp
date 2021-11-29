#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed&	Fixed::operator=( const Fixed &fixed )
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPoint = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw << Fixed::fractionalBits;
}