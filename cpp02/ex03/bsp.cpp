#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point	ab(b - a);
	Point	ac(c - a);
	Point	ap(point - a);

	Fixed	t1((ap.getX() * ac.getY() -  ac.getX() * ap.getY()) / 
				(ab.getX() * ac.getY() - ac.getX() * ab.getY()));
	
	Fixed	t2((ap.getX() * ab.getY() -  ab.getX() * ap.getY()) / 
				(ac.getX() * ab.getY() - ab.getX() * ac.getY()));

	if ((Fixed(0.0f) <= t1 + t2 && t1 + t2 <= Fixed(1.0f))
			&& (Fixed(0.0f) <= t2 && t2 <= Fixed(1.0f))
			&& (Fixed(0.0f) <= t1 && t1 <= Fixed(1.0f)))
		return true;
	
	return false;
}