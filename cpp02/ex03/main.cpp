#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(10, 0);
	Point b( 5.05f, 2 );
	Point c;
	Point point(a - b);

	bsp( a, b, c, point );

	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	return 0;
}