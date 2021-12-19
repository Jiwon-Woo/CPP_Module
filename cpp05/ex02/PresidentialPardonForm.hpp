#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &pp);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm &);
	~PresidentialPardonForm();
	void	execute(Bureaucrat const & executor) const;
	std::string getTarget() const;
};

#endif