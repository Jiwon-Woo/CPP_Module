#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &pp);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();
	void	execute(Bureaucrat const & executor) const;
}

#endif