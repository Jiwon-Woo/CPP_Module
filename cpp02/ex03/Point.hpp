#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point( float x, float y );
	Point( const Fixed &x, const Fixed &y );
	Point( const Point &point );
	~Point();
	Fixed	getX() const;
	Fixed	getY() const;
	Point&	operator=( const Point & );
	Point	operator+( const Point &point ) const;
	Point	operator-( const Point &point ) const;
};

#endif