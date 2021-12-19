#include "Intern.hpp"

# define SC_FORM 0
# define RR_FORM 1
# define PP_FORM 2
# define UNKNOWN 3

const char*	Intern::UnknownFormException::what() const throw()
{
	return "\033[31mthe requested form is not known\033[0m";
}

Intern::Intern()
{
}

Intern::Intern(const Intern &)
{
}

Intern&	Intern::operator=(const Intern &)
{
	return *this;
}

Intern::~Intern()
{
}

int	formNameToIndex(std::string name)
{
	std::string	formName[3];

	formName[SC_FORM] = "shrubbery creation";
	formName[RR_FORM] = "robotomy request";
	formName[PP_FORM] = "presidential pardon";

	for (int i = 0; i < 3; i++)
	{
		if (formName[i] == name)
			return i;
	}
	return UNKNOWN;
}

Form* Intern::makeForm(std::string name, std::string target)
{
	int	formName = formNameToIndex(name);
	Form	*form;

	switch (formName)
	{
	case SC_FORM:
		form = new ShrubberyCreationForm(target);
		break;
	case RR_FORM:
		form = new RobotomyRequestForm(target);
		break;
	case PP_FORM:
		form = new PresidentialPardonForm(target);
		break;
	default:
		throw Intern::UnknownFormException();
	}
	std::cout << "\033[32mIntern creates <" << name << ">\033[0m" << std::endl;
	return form;
}
