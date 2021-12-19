#include "ShrubberyCreationForm.hpp"

int		main()
{
	Bureaucrat	bureaucratX("X", 50);
	Bureaucrat	bureaucratY("Y", 138);
	ShrubberyCreationForm	defaultForm = ShrubberyCreationForm();
	ShrubberyCreationForm	formA("A");
	ShrubberyCreationForm	formB("B");

	std::cout << std::endl << "#############################" << std::endl;
	std::cout << "# overload operator << test #" << std::endl;
	std::cout << "#############################" << std::endl << std::endl;
	std::cout << bureaucratX << std::endl;
	std::cout << bureaucratY << std::endl;
	std::cout << defaultForm << std::endl;
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	std::cout << std::endl;

	std::cout << "###################" << std::endl;
	std::cout << "# Success execute #" << std::endl;
	std::cout << "###################" << std::endl << std::endl;
	try 
	{
		std::cout << bureaucratX << std::endl << std::endl;
		std::cout << formA << std::endl;
		bureaucratX.executeForm(formA);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "################" << std::endl;
	std::cout << "# Fail execute #" << std::endl;
	std::cout << "################" << std::endl;
	try 
	{
		std::cout << bureaucratY << std::endl << std::endl;
		std::cout << formA << std::endl;
		bureaucratY.executeForm(formA);
		bureaucratY.executeForm(defaultForm);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "###################" << std::endl;
	std::cout << "# Success execute #" << std::endl;
	std::cout << "###################" << std::endl << std::endl;
	try 
	{
		bureaucratY.incrementGrade();
		std::cout << bureaucratY << std::endl << std::endl;
		std::cout << formB << std::endl;
		bureaucratY.executeForm(formB);
		bureaucratY.executeForm(defaultForm);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
