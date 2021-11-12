#include "Karen.hpp"

#define C_NRML "\033[0m"
#define C_BLCK "\033[30m"
#define C_RED  "\033[31m"
#define C_GREN "\033[32m"
#define C_YLLW "\033[33m"
#define C_BLUE "\033[34m"
#define C_PRPL "\033[35m"
#define C_AQUA "\033[36m"

Karen::Karen()
{
	complain_list[0].level = "DEBUG";
	complain_list[0].func_ptr = &Karen::debug;
	complain_list[1].level = "INFO";
	complain_list[1].func_ptr = &Karen::info;
	complain_list[2].level = "WARNING";
	complain_list[2].func_ptr = &Karen::warning;
	complain_list[3].level = "ERROR";
	complain_list[3].func_ptr = &Karen::error;
}

void	Karen::debug( void )
{
	std::cout << C_GREN << "[ DEBUG ]" << C_NRML << std::endl
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< std::endl << "I just love it!" << std::endl << std::endl;
}

void	Karen::info( void )
{
	std::cout << C_AQUA << "[ INFO ]" << C_NRML << std::endl
		<< "I cannot believe adding extra bacon cost more money." << std::endl
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl << std::endl;
}

void	Karen::warning( void )
{
	std::cout << C_YLLW << "[ WARNING ]" << C_NRML << std::endl
		<< "I think I deserve to have some extra bacon for free." << std::endl
		<< "I’ve been coming here for years and you just started working here last month."
		<< std::endl << std::endl;
}

void	Karen::error( void )
{
	std::cout << C_RED << "[ ERROR ]" << C_NRML << std::endl
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl << std::endl;
}

void	Karen::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (complain_list[i].level == level)
			return (this->*complain_list[i].func_ptr)();
	}
	std::cout << C_PRPL << "[ Probably complaining about insignificant problems ]"
		<< C_NRML << std::endl << std::endl;
}

Karen::~Karen()
{
}