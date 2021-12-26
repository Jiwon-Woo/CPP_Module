#include "A.hpp"

std::ostream&	operator<<(std::ostream &os, const A &)
{
	os << "A";
	return os;
}