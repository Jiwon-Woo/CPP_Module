#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	bureaucratX("X", 5);
	Bureaucrat	bureaucratY("Y", 50);
	Bureaucrat	bureaucratZ("Z", 138);
	ShrubberyCreationForm	defaultSC = ShrubberyCreationForm();
	ShrubberyCreationForm	formSC("SC");
	RobotomyRequestForm	defaultRR = RobotomyRequestForm();
	RobotomyRequestForm	formRR("RR");
	PresidentialPardonForm	defaultPP = PresidentialPardonForm();
	PresidentialPardonForm	formPP("PP");

	std::cout << std::endl << "#############################" << std::endl;
	std::cout << "# overload operator << test #" << std::endl;
	std::cout << "#############################" << std::endl << std::endl;
	std::cout << bureaucratX << std::endl;
	std::cout << bureaucratY << std::endl;
	std::cout << bureaucratZ << std::endl;
	std::cout << defaultSC << std::endl;
	std::cout << formSC << std::endl;
	std::cout << defaultRR << std::endl;
	std::cout << formRR << std::endl;
	std::cout << defaultPP << std::endl;
	std::cout << formPP << std::endl;
	std::cout << std::endl;

	std::cout << "###################" << std::endl;
	std::cout << "# Success execute #" << std::endl;
	std::cout << "###################" << std::endl << std::endl;
	try 
	{
		bureaucratX.executeForm(defaultSC);
		std::cout << std::endl;
		bureaucratY.executeForm(formSC);
		std::cout << std::endl;
		bureaucratX.executeForm(defaultRR);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
		std::cout << std::endl;
		bureaucratX.executeForm(defaultRR);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
		std::cout << std::endl;
		bureaucratX.executeForm(defaultPP);
		std::cout << std::endl;
		bureaucratX.executeForm(formPP);
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
		bureaucratZ.executeForm(defaultSC);
		bureaucratZ.executeForm(formSC);
		std::cout << std::endl;
		bureaucratY.executeForm(defaultRR);
		bureaucratY.executeForm(formRR);
		std::cout << std::endl;
		bureaucratY.executeForm(defaultPP);
		bureaucratY.executeForm(formPP);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
}
