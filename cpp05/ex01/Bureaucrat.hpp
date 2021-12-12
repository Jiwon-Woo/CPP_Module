#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

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
	class	GradeTooHighException;
	class	GradeTooLowException;
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif