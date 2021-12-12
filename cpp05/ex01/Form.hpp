#ifndef FORM_HPP
# define FORM_HPP

class Form;

# include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool	isSigned;
	const int	signGrade;
	const int	excuteGrade;
public:
	Form();
	Form(std::string name, int signGrade, int excuteGrade);
	Form(const Form& form);
	Form&	operator=(const Form &);
	~Form();
	void	beSigned(const Bureaucrat& bureaucrat);
	std::string	getName() const;
	bool	getIsSigned() const;
	int	getSignGrade() const;
	int	getExcuteGrade() const;
	class	GradeTooHighException;
	class	GradeTooLowException;
};

std::ostream&	operator<<(std::ostream &os, const Form &form);

#endif