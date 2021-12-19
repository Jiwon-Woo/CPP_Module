#include "Form.hpp"

int	main()
{
	Bureaucrat	bureaucratX("X", 50);
	Form	defaultForm = Form();
	Form	formA("A", HIGHEST_GRADE, HIGHEST_GRADE);
	Form	formB("B", 50, 50);

	std::cout << std::endl << "#############################" << std::endl;
	std::cout << "# overload operator << test #" << std::endl;
	std::cout << "#############################" << std::endl << std::endl;
	std::cout << bureaucratX << std::endl;
	std::cout << defaultForm << std::endl;
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	std::cout << std::endl;

	std::cout << "####################################" << std::endl;
	std::cout << "# Constructor argument is too high #" << std::endl;
	std::cout << "####################################" << std::endl;
	try 
	{
		Form tooHigh("tooHigh", 0, 50);
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
		Form tooLow(Form("tooLow", 50, 151));
		std::cout << tooLow << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;

	std::cout << "################" << std::endl;
	std::cout << "# Success sign #" << std::endl;
	std::cout << "################" << std::endl << std::endl;
	try 
	{
		std::cout << bureaucratX << std::endl << std::endl;
		std::cout << formB << std::endl;
		bureaucratX.signForm(formB);
		std::cout << std::endl << formB << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "============================================" << std::endl << std::endl;
	try 
	{
		std::cout << defaultForm << std::endl;
		bureaucratX.signForm(defaultForm);
		std::cout << std::endl << defaultForm << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "#############" << std::endl;
	std::cout << "# Fail sign #" << std::endl;
	std::cout << "#############" << std::endl;
	try 
	{
		bureaucratX.decrementGrade();
		Form copyFormB(formB);
		std::cout << std::endl << bureaucratX << std::endl << std::endl;
		std::cout << copyFormB << std::endl;
		bureaucratX.signForm(copyFormB);
		std::cout << std::endl << copyFormB << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===================================================================" << std::endl << std::endl;
	try 
	{
		std::cout << formA << std::endl;
		bureaucratX.signForm(formA);
		std::cout << std::endl << formA << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
}
