#ifndef A_HPP
# define A_HPP

# include "Base.hpp"
# include <iostream>

class A : public Base
{
};

std::ostream&	operator<<(std::ostream &os, const A &);

#endif