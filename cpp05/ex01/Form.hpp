#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Form
{
private:
	const std::string name;
	bool	isSigned;
	const int	signGrade;
	const int	excuteGrade;
public:
	Form();
	Form(const Form& form);
	Form&	operator=(const Form &);
	~Form();
	void	beSigned(const Bureaucrat& bureaucrat);
	class	GradeTooHighException;
	class	GradeTooLowException;
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif