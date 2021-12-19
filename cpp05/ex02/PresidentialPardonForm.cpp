#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("ShrubberyCreation_", 25, 5), target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("ShrubberyCreation_" + target, 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pp) : Form(pp.getName(), 25, 5), target(pp.getTarget())
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExcuteGrade())
		throw Form::GradeTooLowException();
	else
	{
		
	}
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->target;
}