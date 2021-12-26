#ifndef B_HPP
# define B_HPP

# include "Base.hpp"
# include <iostream>

class B : public Base
{
};

std::ostream&	operator<<(std::ostream &os, const B &);

#endif