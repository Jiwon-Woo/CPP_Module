#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

void	isInTriangle( std::string name, bool bsp)
{
	std::cout << name;
	if (bsp)
		std::cout << " is inside the triangle" << std::endl;
	else
		std::cout << " cannot be found inside the triangle" << std::endl;
}

int main( void )
{
	Point a(10, 0);
	Point b(5.05f, 2);
	Point c(0, 0);
	Point p1(10, 0);
	Point p2(10.1, 0);

	bool bspP1 = bsp( a, b, c, p1 );
	bool bspP2 = bsp( a, b, c, p2 );

	isInTriangle("P1", bspP1);
	isInTriangle("P2", bspP2);

	return 0;
}