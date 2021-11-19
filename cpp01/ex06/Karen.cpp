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

int	level_name_to_index( t_complain *complain_list, std::string level )
{
	int	level_num = UNDEFINED;

	for (int i = 0; i < 4; i++)
	{
		if (complain_list[i].level == level)
			level_num = i;
	}
	return level_num;
}

int	is_filtering(int level, int filter)
{
	if (level == UNDEFINED)
		return UNDEFINED;
	return level - filter >= 0 ? IMPORTANT : IGNORE;
}

void	Karen::complain( std::string level, std::string filter )
{
	int	level_num = level_name_to_index( complain_list, level );
	int	filter_num = level_name_to_index( complain_list, filter );
	int	filtering = is_filtering(level_num, filter_num);

	switch (filtering)
	{
		case IMPORTANT:
			(this->*complain_list[level_num].func_ptr)();
			break;
		case IGNORE:
			std::cout << C_BLCK << "[ Karen's complaint was ignored. ]" << C_NRML << std::endl << std::endl;
			break;
		case UNDEFINED:
			std::cout << C_BLUE << "[ This complaint is not defined. ]" << C_NRML << std::endl << std::endl;
			break;
		default:
			break;
	}
}

Karen::~Karen()
{
}