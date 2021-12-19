#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest_", 72, 45), target("")
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest_" + target, 72, 45), target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rr) : Form(rr.getName(), 72, 45), target(rr.getTarget())
{
	srand(time(NULL));
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() > this->getExcuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		if (rand() % 2)
			std::cout << "(drill...) <" << this->target << "> has been robotomized successfully." << std::endl;
		else
			std::cout << "<" << this->target << "> fail to be robotomized." << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->target;
}