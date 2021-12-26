#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <random>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

# define A_INDEX 0
# define B_INDEX 1
# define C_INDEX 2

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

# endif