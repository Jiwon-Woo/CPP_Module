#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	bureaucratX("X", 5);
	Bureaucrat	bureaucratY("Y", 50);
	Bureaucrat	bureaucratZ("Z", 138);
	ShrubberyCreationForm	formSC("SC");
	RobotomyRequestForm	formRR("RR");
	PresidentialPardonForm	formPP("PP");

	std::cout << std::endl << "#############################" << std::endl;
	std::cout << "# overload operator << test #" << std::endl;
	std::cout << "#############################" << std::endl << std::endl;
	std::cout << bureaucratX << std::endl;
	std::cout << bureaucratY << std::endl;
	std::cout << bureaucratZ << std::endl;
	std::cout << formSC << std::endl;
	std::cout << formRR << std::endl;
	std::cout << formPP << std::endl;
	std::cout << std::endl;

	std::cout << "################################" << std::endl;
	std::cout << "# Fail to execute (not signed) #" << std::endl;
	std::cout << "################################" << std::endl << std::endl;
	try 
	{
		bureaucratY.executeForm(formSC);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
		std::cout << std::endl;
		bureaucratX.executeForm(formPP);
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "#################" << std::endl;
	std::cout << "# Sign the form #" << std::endl;
	std::cout << "#################" << std::endl << std::endl;
	try 
	{
		bureaucratX.signForm(formSC);
		std::cout << formSC << std::endl;
		bureaucratX.signForm(formRR);
		std::cout << formRR << std::endl;
		bureaucratX.signForm(formPP);
		std::cout << formPP << std::endl;
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
		bureaucratY.executeForm(formSC);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
		std::cout << std::endl;
		bureaucratX.executeForm(formRR);
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
		bureaucratZ.executeForm(formSC);
		std::cout << std::endl;
		bureaucratY.executeForm(formRR);
		std::cout << std::endl;
		bureaucratY.executeForm(formPP);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
}
