#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat	defaultBureaucrat = Bureaucrat();
	Bureaucrat	a("a");
	Bureaucrat	b("b", 1);

	std::cout << std::endl;
	std::cout << "#############################" << std::endl;
	std::cout << "# overload operator << test #" << std::endl;
	std::cout << "#############################" << std::endl;
	std::cout << defaultBureaucrat << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;

	std::cout << "####################################" << std::endl;
	std::cout << "# Constructor argument is too high #" << std::endl;
	std::cout << "####################################" << std::endl;
	try 
	{
		Bureaucrat tooHigh("tooHigh", 0);
		std::cout << tooHigh << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "###################################" << std::endl;
	std::cout << "# Constructor argument is too low #" << std::endl;
	std::cout << "###################################" << std::endl;
	try 
	{
		Bureaucrat tooLow(Bureaucrat("tooLow", 151));
		std::cout << tooLow << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "###################################" << std::endl;
	std::cout << "# The grade is increased too much #" << std::endl;
	std::cout << "###################################" << std::endl;
	try 
	{
		b.incrementGrade();
		std::cout << b << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "###################################" << std::endl;
	std::cout << "# The grade is decreased too much #" << std::endl;
	std::cout << "###################################" << std::endl;
	try 
	{
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
