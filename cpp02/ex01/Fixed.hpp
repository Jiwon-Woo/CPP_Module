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
	~Fixed();
	Fixed( const Fixed &fixed );
	Fixed&	operator=( const Fixed &fixed );
	int	getRawBits( void ) const;
	int	toInt( void ) const;
	float	toFloat( void ) const;
	void	setRawBits( int const raw );
	void	setRawBits( float const raw );
};

std::ostream&	operator<<( std::ostream &os, const Fixed &fixed );

#endif