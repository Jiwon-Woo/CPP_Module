#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : fixedPoint(0)
{
}

Fixed::Fixed( int raw ) : fixedPoint(raw << Fixed::fractionalBits)
{
}

Fixed::Fixed( float raw ) : fixedPoint(roundf(raw * (1 << Fixed::fractionalBits)))
{
}

Fixed::Fixed( const Fixed &fixed )
{
	*this = fixed;
}

Fixed::~Fixed()
{
}

Fixed&	Fixed::operator=( const Fixed &fixed )
{
	this->fixedPoint = fixed.getRawBits();
	return *this;
}

bool	Fixed::operator>( const Fixed &fixed ) const
{
	return this->fixedPoint > fixed.getRawBits();
}

bool	Fixed::operator<( const Fixed &fixed ) const
{
	return this->fixedPoint < fixed.getRawBits();
}

bool	Fixed::operator>=( const Fixed &fixed ) const
{
	return this->fixedPoint >= fixed.getRawBits();
}

bool	Fixed::operator<=( const Fixed &fixed ) const
{
	return this->fixedPoint <= fixed.getRawBits();
}

bool	Fixed::operator==( const Fixed &fixed ) const
{
	return this->fixedPoint == fixed.getRawBits();
}

bool	Fixed::operator!=( const Fixed &fixed ) const
{
	return this->fixedPoint != fixed.getRawBits();
}

Fixed	Fixed::operator+( const Fixed &fixed ) const
{
	return Fixed( this->toFloat() + fixed.toFloat() );
}

Fixed	Fixed::operator-( const Fixed &fixed ) const
{
	return Fixed( this->toFloat() - fixed.toFloat() );
}

Fixed	Fixed::operator*( const Fixed &fixed ) const
{
	return Fixed( this->toFloat() * fixed.toFloat() );
}

Fixed	Fixed::operator/( const Fixed &fixed ) const
{
	return Fixed( this->toFloat() / fixed.toFloat() );
}

Fixed&	Fixed::operator++( void )	// 전위 연산자 ++a
{
	this->fixedPoint++;
	return *this;
}

Fixed&	Fixed::operator--( void )	// 전위 연산자 --a
{
	this->fixedPoint--;
	return *this;
}

Fixed	Fixed::operator++( int )	// 후위 연산자 a++
{
	Fixed	preFixed(*this);
	++(*this);
	return preFixed;
}

Fixed	Fixed::operator--( int )	// 후위 연산자 a--
{
	Fixed	preFixed(*this);
	--(*this);
	return preFixed;
}

const Fixed&	Fixed::min( const Fixed &f1, const Fixed &f2 )
{
	return f1 < f2 ? f1 : f2;
}

const Fixed&	Fixed::max( const Fixed &f1, const Fixed &f2 )
{
	return f1 > f2 ? f1 : f2;
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