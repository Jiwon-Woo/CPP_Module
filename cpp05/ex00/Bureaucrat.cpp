#include "Bureaucrat.hpp"

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat's grade too high";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat's grade too low";
}

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
	os << ">> describes the bureaucrat << \n";
	os << " > name  : " << bureaucrat.getName() << '\n';
	os << " > grade : " << bureaucrat.getGrade() << '\n';
	return os;
}
