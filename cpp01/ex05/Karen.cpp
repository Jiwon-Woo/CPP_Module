#include "Karen.hpp"

Karen::Karen()
{
	complain_list[DEBUG].level = "DEBUG";
	complain_list[DEBUG].func_ptr = &Karen::debug;
	complain_list[INFO].level = "INFO";
	complain_list[INFO].func_ptr = &Karen::info;
	complain_list[WARNING].level = "WARNING";
	complain_list[WARNING].func_ptr = &Karen::warning;
	complain_list[ERROR].level = "ERROR";
	complain_list[ERROR].func_ptr = &Karen::error;
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
	for (int i = 0; i < TOTAL_NUM_OF_LEVEL; i++)
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