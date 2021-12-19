#include "Intern.hpp"

int	main()
{
	Bureaucrat	bureaucrat("bureaucrat", 5);
	Intern someRandomIntern;
	Form* rrf;
	Form* unknown;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << std::endl;

	bureaucrat.signForm(*rrf);
	std::cout << std::endl;
	bureaucrat.executeForm(*rrf);
	std::cout << std::endl;

	try
	{
		unknown = someRandomIntern.makeForm("unknown", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete rrf;
	delete unknown;
}
