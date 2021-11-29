#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point( float x, float y ) : x(Fixed(x)), y(Fixed(y))
{
}

Point::Point( const Fixed &x, const Fixed &y ) : x(x), y(y)
{
}

Point::Point( const Point &point ) : x(point.getX()), y(point.getY())
{
}

Point::~Point()
{
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}

Point&	Point::operator=( const Point & )
{
	return *this;
}

Point	Point::operator+( const Point &point ) const
{
	return Point(this->x + point.getX(), this->y + point.getY());
}

Point	Point::operator-( const Point &point ) const
{
	return Point(this->x - point.getX(), this->y - point.getY());
}
