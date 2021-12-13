#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &pp);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm &);
	~RobotomyRequestForm();
	void	execute(Bureaucrat const & executor) const;
}

#endif