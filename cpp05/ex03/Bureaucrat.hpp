#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Bureaucrat;

#include "Form.hpp"

class Bureaucrat
{
private:
	const std::string	name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat&	operator=(const Bureaucrat &);
	~Bureaucrat();
	std::string	getName() const;
	int	getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(Form &form);
	void	executeForm(Form const & form);
	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif