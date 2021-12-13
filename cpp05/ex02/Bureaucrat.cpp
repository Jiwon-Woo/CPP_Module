#include "Bureaucrat.hpp"

# define C_NRML "\033[0m"
# define C_GREN "\033[32m"
# define C_RED  "\033[31m"

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

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << C_GREN << 
			"Bureaucrat <" << this->name << "> signs Form <" << form.getName() << ">"
			<< C_NRML << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << C_RED << "Bureaucrat <" << this->name << "> cannot signs Form <" << form.getName() << "> because ";
		std::cerr << "<" << this->name << "> " << e.what() << "." << C_NRML << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << ">> describes the bureaucrat << \n";
	os << " > name  : " << bureaucrat.getName() << '\n';
	os << " > grade : " << bureaucrat.getGrade() << '\n';
	return os;
}
