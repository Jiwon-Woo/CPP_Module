#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	rawBits;
	static const int	fractionalBits;
public:
	Fixed();
	Fixed( int rawBits );
	// Fixed( float f_rawBits );
	~Fixed();
	Fixed( const Fixed &fixed );
	Fixed&	operator=( const Fixed &fixed );
	int	getRawBits( void ) const;
	int	getfractionalBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream&	operator<<( std::ostream &os, const Fixed &fixed );

#endif