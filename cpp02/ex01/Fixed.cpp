#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int raw ) : fixedPoint(raw << Fixed::fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float raw ) : fixedPoint(roundf(raw * (1 << Fixed::fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
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
	return this->fixedPoint;
}

int	Fixed::toInt( void ) const
{
	return this->fixedPoint >> Fixed::fractionalBits;
}

float	Fixed::toFloat( void ) const
{
	return (float)(this->fixedPoint) / (1 << Fixed::fractionalBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw << Fixed::fractionalBits;
}

void	Fixed::setRawBits( float const raw )
{
	this->fixedPoint = roundf(raw * (1 << Fixed::fractionalBits));
}

std::ostream&	operator<<( std::ostream &os, const Fixed &fixed )
{
	os << fixed.toFloat();
	return os;
}