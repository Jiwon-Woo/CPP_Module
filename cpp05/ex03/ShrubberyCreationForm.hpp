#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &sc);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();
	void	execute(Bureaucrat const & executor) const;
	std::string getTarget() const;
};

#endif