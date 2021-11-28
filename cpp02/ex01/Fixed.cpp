#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int rawBits ) : rawBits(rawBits << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

// Fixed::Fixed( float f_rawBits ) : f_rawBits(f_rawBits)
// {
// 	std::cout << "Float constructor called" << std::endl;
// }

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
	this->rawBits = fixed.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	return this->rawBits;
}

int	Fixed::getfractionalBits( void ) const
{
	return this->fractionalBits;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = raw << Fixed::fractionalBits;
}

std::ostream&	operator<<( std::ostream &os, const Fixed &fixed )
{
	os << (fixed.getRawBits() >> fixed.getfractionalBits());
	return os;
}