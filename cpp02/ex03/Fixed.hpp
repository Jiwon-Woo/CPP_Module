#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	fixedPoint;
	static const int	fractionalBits;
public:
	Fixed();
	Fixed( int raw );
	Fixed( float raw );
	Fixed( const Fixed &fixed );
	~Fixed();

	Fixed&	operator=( const Fixed &fixed );
	bool	operator>( const Fixed &fixed ) const;
	bool	operator<( const Fixed &fixed ) const;
	bool	operator>=( const Fixed &fixed ) const;
	bool	operator<=( const Fixed &fixed ) const;
	bool	operator==( const Fixed &fixed ) const;
	bool	operator!=( const Fixed &fixed ) const;
	Fixed	operator+( const Fixed &fixed ) const;
	Fixed	operator-( const Fixed &fixed ) const;
	Fixed	operator*( const Fixed &fixed ) const;
	Fixed	operator/( const Fixed &fixed ) const;
	Fixed&	operator++( void );	// 전위 연산자
	Fixed&	operator--( void );
	Fixed	operator++( int );	// 후위 연산자
	Fixed	operator--( int );

	int	getRawBits( void ) const;
	int	toInt( void ) const;
	float	toFloat( void ) const;
	void	setRawBits( int const raw );
	void	setRawBits( float const raw );
	static const Fixed&	min( const Fixed &f1, const Fixed &f2 );
	static const Fixed&	max( const Fixed &f1, const Fixed &f2 );

};

std::ostream&	operator<<( std::ostream &os, const Fixed &fixed );

#endif