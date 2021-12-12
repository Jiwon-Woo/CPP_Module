#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception
{
public:
	virtual const char* what() const _NOEXCEPT {
		return "Grade too high";
	}
};

class Bureaucrat::GradeTooLowException : public std::exception
{
public:
	virtual const char* what() const _NOEXCEPT {
		return "Grade too low";
	}
};

Bureaucrat::Bureaucrat() : name("default Bureaucrat"), grade(LOWEST_GRADE)
{
}

Bureaucrat::Bureaucrat(std::string name) : name(name), grade(LOWEST_GRADE)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name(bureaucrat.getName()), grade(bureaucrat.getGrade())
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &)
{
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << "The grade of Bureaucrat <" << bureaucrat.getName() <<
		"> is <" << bureaucrat.getGrade() << ">";
	return os;
}
