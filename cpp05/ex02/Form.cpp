#include "Form.hpp"

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Forms's grade too high";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Forms's grade too low";
}

Form::Form() : name("defalut Form"), isSigned(false), signGrade(LOWEST_GRADE), excuteGrade(LOWEST_GRADE)
{
}

Form::Form(std::string name, int signGrade, int excuteGrade) : name(name), isSigned(false), signGrade(signGrade), excuteGrade(excuteGrade)
{
	if (this->signGrade < HIGHEST_GRADE || this->excuteGrade < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	else if (this->signGrade > LOWEST_GRADE || this->excuteGrade > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& form) : name(form.getName()), isSigned(false), signGrade(form.getSignGrade()), excuteGrade(form.getExcuteGrade())
{
}

Form::~Form()
{
}

Form&	Form::operator=(const Form &)
{
	return *this;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw Bureaucrat::GradeTooLowException();
	else
		this->isSigned = true;
}

std::string	Form::getName() const
{
	return this->name;
}

bool	Form::getIsSigned() const
{
	return this->isSigned;
}

int	Form::getSignGrade() const
{
	return this->signGrade;
}

int	Form::getExcuteGrade() const
{
	return this->excuteGrade;
}

std::ostream&	operator<<(std::ostream &os, const Form &form)
{
	os << ">> describes the state of the form << \n";
	os << " > name        : " << form.getName() << '\n';
	os << " > isSigned    : " << (form.getIsSigned() ? "O" : "X") << '\n';
	os << " > signGrade   : " << form.getSignGrade() << '\n';
	os << " > excuteGrade : " << form.getExcuteGrade() << '\n';
	return os;
}