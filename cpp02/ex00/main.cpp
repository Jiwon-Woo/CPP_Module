#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = a;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// std::cout << std::endl << &a << std::endl;
	// std::cout << &b << std::endl;
	// std::cout << &c << std::endl << std::endl;
	return 0;
}