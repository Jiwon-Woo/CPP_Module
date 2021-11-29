#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point ab(b - a);
	Point ac(c - a);
	Point ap(point - a);

	std::cout << a.getX() << std::endl;
	std::cout << a.getY() << std::endl;
	std::cout << b.getX() << std::endl;
	std::cout << b.getY() << std::endl;
	std::cout << c.getX() << std::endl;
	std::cout << c.getY() << std::endl;
	std::cout << point.getX() << std::endl;
	std::cout << point.getY() << std::endl << std::endl;

	std::cout << ab.getX() << std::endl;
	std::cout << ab.getY() << std::endl;
	std::cout << ac.getX() << std::endl;
	std::cout << ac.getY() << std::endl;
	std::cout << ap.getX() << std::endl;
	std::cout << ap.getY() << std::endl;

	return true;
}