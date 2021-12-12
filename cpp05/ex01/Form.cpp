#include "Form.hpp"

class Form::GradeTooHighException : public std::exception
{
public:
	virtual const char* what() const _NOEXCEPT {
		return "Grade too high";
	}
};

class Form::GradeTooLowException : public std::exception
{
public:
	virtual const char* what() const _NOEXCEPT {
		return "Grade too low";
	}
};

Form::Form() : name("defalut Form"), isSigned(false), signGrade(LOWEST_GRADE), excuteGrade(LOWEST_GRADE)
{
}

Form::Form(std::string name, int signGrade, int excuteGrade) : name(name), isSigned(false), signGrade(signGrade), excuteGrade(excuteGrade)
{
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
	if (bureaucrat.getGrade() < this->signGrade)
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
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
	os << " > isSigned    : " << form.getIsSigned() << '\n';
	os << " > signGrade   : " << form.getSignGrade() << '\n';
	os << " > excuteGrade : " << form.getExcuteGrade() << '\n';
	return os;
}