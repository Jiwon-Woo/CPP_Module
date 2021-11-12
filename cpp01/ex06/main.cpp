#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen = Karen();

	if (argc != 2)
	{
		std::cout << C_BLUE << "This program requires one factor."
			<< C_NRML << std::endl;
		return 1;
	}
	std::string filter(argv[1]);
	if (!(filter == "DEBUG" || filter == "INFO" || filter == "WARNING" || filter == "ERROR"))
	{
		std::cout << C_PRPL << "[ Probably complaining about insignificant problems ]"
			<< C_NRML << std::endl;
		return 0;
	}
	karen.complain("debug", filter);
	karen.complain("INFO", filter);
	karen.complain("WARNING", filter);
	karen.complain("ERROR", filter);
	karen.complain("DEBUG", filter);
}