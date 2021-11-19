#include "Karen.hpp"

int	print_error( std::string color, std::string error )
{
	std::cout << color << error << C_NRML << std::endl;
	return 1;
}

int	main(int argc, char **argv)
{
	Karen karen = Karen();

	if (argc != 2)
		return print_error( C_BLUE, "This program requires one factor." );
	std::string filter(argv[1]);
	if (!(filter == "DEBUG" || filter == "INFO" || filter == "WARNING" || filter == "ERROR"))
		return print_error( C_PRPL, "[ Probably complaining about insignificant problems ]" );
	karen.complain("debug", filter);
	karen.complain("INFO", filter);
	karen.complain("WARNING", filter);
	karen.complain("ERROR", filter);
	karen.complain("DEBUG", filter);
}